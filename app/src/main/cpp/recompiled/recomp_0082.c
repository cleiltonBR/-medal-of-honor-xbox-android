/**
 * Medal of Honor European Assault - Recompiled code chunk 82
 * Functions: 250 (0x002D4E00 - 0x002D7440)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002D4E00
 * Original: 0x002D4E00 - 0x002D4E36 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D4E00(void)
{

loc_002D4E00: ;
    eax = MEM32(0x382EC8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x33D9DC);
    PUSH32(esp, 8);
    PUSH32(esp, 0x530F80);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x5310B8;
    PUSH32(esp, 0x002D4E2Au); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D4E2A: ;
    PUSH32(esp, 0x2D7E90);
    PUSH32(esp, 0x002D4E34u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D4E34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D4E40
 * Original: 0x002D4E40 - 0x002D4E85 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D4E40(void)
{

loc_002D4E40: ;
    eax = MEM32(0x382ECC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x33DA08);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5310B8);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x1FC5C0);
    PUSH32(esp, 0x1F8060);
    PUSH32(esp, 0x1FC540);
    PUSH32(esp, 0x1FC560);
    PUSH32(esp, eax);
    ecx = 0x5310EC;
    PUSH32(esp, 0x002D4E79u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D4E79: ;
    PUSH32(esp, 0x2D7EA0);
    PUSH32(esp, 0x002D4E83u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D4E83: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D4E90
 * Original: 0x002D4E90 - 0x002D4EC3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D4E90(void)
{

loc_002D4E90: ;
    eax = MEM32(0x382ED0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x530F80);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x531120;
    PUSH32(esp, 0x002D4EB7u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D4EB7: ;
    PUSH32(esp, 0x2D7EB0);
    PUSH32(esp, 0x002D4EC1u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D4EC1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D4ED0
 * Original: 0x002D4ED0 - 0x002D4F15 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D4ED0(void)
{

loc_002D4ED0: ;
    eax = MEM32(0x382ED4);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x33DAA0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x53101C);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x1FDD50);
    PUSH32(esp, 0x1F8060);
    PUSH32(esp, 0x1FDD30);
    PUSH32(esp, 0x1FDD80);
    PUSH32(esp, eax);
    ecx = 0x531154;
    PUSH32(esp, 0x002D4F09u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D4F09: ;
    PUSH32(esp, 0x2D7EC0);
    PUSH32(esp, 0x002D4F13u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D4F13: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D4F20
 * Original: 0x002D4F20 - 0x002D4F68 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D4F20(void)
{

loc_002D4F20: ;
    eax = MEM32(0x382ED8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x33DAE0);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x531120);
    PUSH32(esp, 0x1FE170);
    PUSH32(esp, 0x1FDF40);
    PUSH32(esp, 0x1F8060);
    PUSH32(esp, 0x1FDE60);
    PUSH32(esp, 0x1FDE00);
    PUSH32(esp, eax);
    ecx = 0x531188;
    PUSH32(esp, 0x002D4F5Cu); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D4F5C: ;
    PUSH32(esp, 0x2D7ED0);
    PUSH32(esp, 0x002D4F66u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D4F66: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D4F70
 * Original: 0x002D4F70 - 0x002D4FB5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D4F70(void)
{

loc_002D4F70: ;
    eax = MEM32(0x382EDC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x33DCBC);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x53101C);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x1FE200);
    PUSH32(esp, 0x1F8060);
    PUSH32(esp, 0x1FE180);
    PUSH32(esp, 0x1FE1A0);
    PUSH32(esp, eax);
    ecx = 0x5311BC;
    PUSH32(esp, 0x002D4FA9u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D4FA9: ;
    PUSH32(esp, 0x2D7EE0);
    PUSH32(esp, 0x002D4FB3u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D4FB3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D4FC0
 * Original: 0x002D4FC0 - 0x002D5005 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D4FC0(void)
{

loc_002D4FC0: ;
    eax = MEM32(0x382EE0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x33DCE0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x531120);
    PUSH32(esp, 0x1FE2F0);
    PUSH32(esp, 0x1FE2C0);
    PUSH32(esp, 0x1FE240);
    PUSH32(esp, 0x1FE230);
    PUSH32(esp, 0x1FE260);
    PUSH32(esp, eax);
    ecx = 0x5311F0;
    PUSH32(esp, 0x002D4FF9u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D4FF9: ;
    PUSH32(esp, 0x2D7EF0);
    PUSH32(esp, 0x002D5003u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5003: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5010
 * Original: 0x002D5010 - 0x002D5055 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5010(void)
{

loc_002D5010: ;
    eax = MEM32(0x382EE4);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x33DD28);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x530F80);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x1FE3A0);
    PUSH32(esp, 0x1F8060);
    PUSH32(esp, 0x1FE300);
    PUSH32(esp, 0x1FE340);
    PUSH32(esp, eax);
    ecx = 0x531224;
    PUSH32(esp, 0x002D5049u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5049: ;
    PUSH32(esp, 0x2D7F00);
    PUSH32(esp, 0x002D5053u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5053: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5060
 * Original: 0x002D5060 - 0x002D50A5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5060(void)
{

loc_002D5060: ;
    eax = MEM32(0x382EE8);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x33DD6C);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x53101C);
    PUSH32(esp, 0x1FE610);
    PUSH32(esp, 0x1FE550);
    PUSH32(esp, 0x1F8060);
    PUSH32(esp, 0x1FE4D0);
    PUSH32(esp, 0x1FE4F0);
    PUSH32(esp, eax);
    ecx = 0x531258;
    PUSH32(esp, 0x002D5099u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5099: ;
    PUSH32(esp, 0x2D7F10);
    PUSH32(esp, 0x002D50A3u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D50A3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D50B0
 * Original: 0x002D50B0 - 0x002D50C6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D50B0(void)
{

loc_002D50B0: ;
    ecx = 0x531290;
    PUSH32(esp, 0x002D50BAu); RECOMP_ABI_CALL(0x00218DA0u, sub_00218DA0); /* call 0x00218DA0 */

loc_002D50BA: ;
    PUSH32(esp, 0x2D7F20);
    PUSH32(esp, 0x002D50C4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D50C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D50D0
 * Original: 0x002D50D0 - 0x002D50DF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D50D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D50D0: ;
    fp_push(MEMD(0x33E830)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(0x53129C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D50E0
 * Original: 0x002D50E0 - 0x002D50EF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D50E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D50E0: ;
    fp_push(MEMD(0x33E830)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(0x5312A0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D50F0
 * Original: 0x002D50F0 - 0x002D5126 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D50F0(void)
{

loc_002D50F0: ;
    eax = MEM32(0x382F10);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x33ED2C);
    PUSH32(esp, 8);
    PUSH32(esp, 0x531374);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x5312A4;
    PUSH32(esp, 0x002D511Au); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D511A: ;
    PUSH32(esp, 0x2D7F30);
    PUSH32(esp, 0x002D5124u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5124: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5130
 * Original: 0x002D5130 - 0x002D5166 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5130(void)
{

loc_002D5130: ;
    eax = MEM32(0x382F14);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x33ED50);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x5312D8;
    PUSH32(esp, 0x002D515Au); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D515A: ;
    PUSH32(esp, 0x2D7F40);
    PUSH32(esp, 0x002D5164u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5164: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5170
 * Original: 0x002D5170 - 0x002D51A6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5170(void)
{

loc_002D5170: ;
    eax = MEM32(0x382F18);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x33EDC8);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x5312D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x53130C;
    PUSH32(esp, 0x002D519Au); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D519A: ;
    PUSH32(esp, 0x2D7F50);
    PUSH32(esp, 0x002D51A4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D51A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D51B0
 * Original: 0x002D51B0 - 0x002D51FB (75 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D51B0(void)
{

loc_002D51B0: ;
    eax = MEM32(0x382F1C);
    PUSH32(esp, 0x224240);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x33EEF0);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x22E9D0);
    PUSH32(esp, 0x22E9B0);
    PUSH32(esp, 0x22E9A0);
    PUSH32(esp, 0x22E940);
    PUSH32(esp, eax);
    ecx = 0x531340;
    PUSH32(esp, 0x002D51EFu); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D51EF: ;
    PUSH32(esp, 0x2D7F60);
    PUSH32(esp, 0x002D51F9u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D51F9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5200
 * Original: 0x002D5200 - 0x002D5236 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5200(void)
{

loc_002D5200: ;
    eax = MEM32(0x382F20);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x33F288);
    PUSH32(esp, 4);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x531374;
    PUSH32(esp, 0x002D522Au); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D522A: ;
    PUSH32(esp, 0x2D7F70);
    PUSH32(esp, 0x002D5234u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5234: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5240
 * Original: 0x002D5240 - 0x002D5276 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5240(void)
{

loc_002D5240: ;
    eax = MEM32(0x382F24);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x33F2A0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x5313A8;
    PUSH32(esp, 0x002D526Au); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D526A: ;
    PUSH32(esp, 0x2D7F80);
    PUSH32(esp, 0x002D5274u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5274: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5280
 * Original: 0x002D5280 - 0x002D52B3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5280(void)
{

loc_002D5280: ;
    eax = MEM32(0x382F28);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x5312D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x5313DC;
    PUSH32(esp, 0x002D52A7u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D52A7: ;
    PUSH32(esp, 0x2D7F90);
    PUSH32(esp, 0x002D52B1u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D52B1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D52C0
 * Original: 0x002D52C0 - 0x002D5308 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D52C0(void)
{

loc_002D52C0: ;
    eax = MEM32(0x382F2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x33F2F0);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x53130C);
    PUSH32(esp, 0x22EAA0);
    PUSH32(esp, 0x22EA90);
    PUSH32(esp, 0x22EA10);
    PUSH32(esp, 0x22EA00);
    PUSH32(esp, 0x22EA30);
    PUSH32(esp, eax);
    ecx = 0x531410;
    PUSH32(esp, 0x002D52FCu); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D52FC: ;
    PUSH32(esp, 0x2D7FA0);
    PUSH32(esp, 0x002D5306u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5306: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5310
 * Original: 0x002D5310 - 0x002D5343 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5310(void)
{

loc_002D5310: ;
    eax = MEM32(0x382F30);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5313A8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x531444;
    PUSH32(esp, 0x002D5337u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5337: ;
    PUSH32(esp, 0x2D7FB0);
    PUSH32(esp, 0x002D5341u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5341: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5350
 * Original: 0x002D5350 - 0x002D5398 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5350(void)
{

loc_002D5350: ;
    eax = MEM32(0x382F34);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x33F4A8);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x531444);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x22EE10);
    PUSH32(esp, 0x22ED70);
    PUSH32(esp, 0x22ED60);
    PUSH32(esp, 0x22EDB0);
    PUSH32(esp, eax);
    ecx = 0x531478;
    PUSH32(esp, 0x002D538Cu); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D538C: ;
    PUSH32(esp, 0x2D7FC0);
    PUSH32(esp, 0x002D5396u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5396: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D53A0
 * Original: 0x002D53A0 - 0x002D53B6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D53A0(void)
{

loc_002D53A0: ;
    ecx = 0x5314AC;
    PUSH32(esp, 0x002D53AAu); RECOMP_ABI_CALL(0x0022EE20u, sub_0022EE20); /* call 0x0022EE20 */

loc_002D53AA: ;
    PUSH32(esp, 0x2D7FD0);
    PUSH32(esp, 0x002D53B4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D53B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D53C0
 * Original: 0x002D53C0 - 0x002D5408 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D53C0(void)
{

loc_002D53C0: ;
    eax = MEM32(0x382F38);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x33F868);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x531444);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x231840);
    PUSH32(esp, 0x2317C0);
    PUSH32(esp, 0x2317B0);
    PUSH32(esp, 0x2317E0);
    PUSH32(esp, eax);
    ecx = 0x5314B4;
    PUSH32(esp, 0x002D53FCu); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D53FC: ;
    PUSH32(esp, 0x2D7FE0);
    PUSH32(esp, 0x002D5406u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5406: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5410
 * Original: 0x002D5410 - 0x002D5446 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5410(void)
{

loc_002D5410: ;
    eax = MEM32(0x382F3C);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x33F95C);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x5313DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x5314E8;
    PUSH32(esp, 0x002D543Au); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D543A: ;
    PUSH32(esp, 0x2D7FF0);
    PUSH32(esp, 0x002D5444u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5444: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5450
 * Original: 0x002D5450 - 0x002D5492 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5450(void)
{

loc_002D5450: ;
    eax = MEM32(0x382F40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x5314E8);
    PUSH32(esp, 0x22EAA0);
    PUSH32(esp, 0x231940);
    PUSH32(esp, 0x231920);
    PUSH32(esp, 0x231910);
    PUSH32(esp, 0x2318B0);
    PUSH32(esp, eax);
    ecx = 0x53151C;
    PUSH32(esp, 0x002D5486u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5486: ;
    PUSH32(esp, 0x2D8000);
    PUSH32(esp, 0x002D5490u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5490: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D54A0
 * Original: 0x002D54A0 - 0x002D54E5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D54A0(void)
{

loc_002D54A0: ;
    eax = MEM32(0x382F44);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x33F990);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x5313DC);
    PUSH32(esp, 0x22EAA0);
    PUSH32(esp, 0x231A20);
    PUSH32(esp, 0x231A00);
    PUSH32(esp, 0x2319F0);
    PUSH32(esp, 0x231990);
    PUSH32(esp, eax);
    ecx = 0x531550;
    PUSH32(esp, 0x002D54D9u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D54D9: ;
    PUSH32(esp, 0x2D8010);
    PUSH32(esp, 0x002D54E3u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D54E3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D54F0
 * Original: 0x002D54F0 - 0x002D5523 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D54F0(void)
{

loc_002D54F0: ;
    eax = MEM32(0x382F48);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x531588;
    PUSH32(esp, 0x002D5517u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5517: ;
    PUSH32(esp, 0x2D8020);
    PUSH32(esp, 0x002D5521u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5521: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5530
 * Original: 0x002D5530 - 0x002D5563 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5530(void)
{

loc_002D5530: ;
    eax = MEM32(0x382F4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x531588);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x5315BC;
    PUSH32(esp, 0x002D5557u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5557: ;
    PUSH32(esp, 0x2D8030);
    PUSH32(esp, 0x002D5561u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5561: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5570
 * Original: 0x002D5570 - 0x002D55B2 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5570(void)
{

loc_002D5570: ;
    eax = MEM32(0x382F50);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x5315BC);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x232670);
    PUSH32(esp, eax);
    ecx = 0x5315F0;
    PUSH32(esp, 0x002D55A6u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D55A6: ;
    PUSH32(esp, 0x2D8040);
    PUSH32(esp, 0x002D55B0u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D55B0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D55C0
 * Original: 0x002D55C0 - 0x002D5605 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D55C0(void)
{

loc_002D55C0: ;
    eax = MEM32(0x382F54);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x33FBA8);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x5315BC);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x232730);
    PUSH32(esp, 0x2326B0);
    PUSH32(esp, 0x2326A0);
    PUSH32(esp, 0x2326D0);
    PUSH32(esp, eax);
    ecx = 0x531624;
    PUSH32(esp, 0x002D55F9u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D55F9: ;
    PUSH32(esp, 0x2D8050);
    PUSH32(esp, 0x002D5603u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5603: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5610
 * Original: 0x002D5610 - 0x002D5625 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5610(void)
{

loc_002D5610: ;
    eax = MEM32(0x530F08);
    MEM32(0x382FE8) = eax;
    MEM32(0x530F08) = 0x382FE4;
    esp += 4; return; /* ret */

}

/**
 * sub_002D5630
 * Original: 0x002D5630 - 0x002D5675 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5630(void)
{

loc_002D5630: ;
    eax = MEM32(0x382FF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x349DF0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x25BFE0);
    PUSH32(esp, 0x25BFC0);
    PUSH32(esp, 0x25BFB0);
    PUSH32(esp, 0x25BF50);
    PUSH32(esp, eax);
    ecx = 0x532B60;
    PUSH32(esp, 0x002D5669u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5669: ;
    PUSH32(esp, 0x2D8060);
    PUSH32(esp, 0x002D5673u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5673: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5680
 * Original: 0x002D5680 - 0x002D5695 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5680(void)
{

loc_002D5680: ;
    eax = MEM32(0x530F08);
    MEM32(0x382FF8) = eax;
    MEM32(0x530F08) = 0x382FF4;
    esp += 4; return; /* ret */

}

/**
 * sub_002D56A0
 * Original: 0x002D56A0 - 0x002D56D6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D56A0(void)
{

loc_002D56A0: ;
    eax = MEM32(0x383000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x34A0F8);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x532B9C;
    PUSH32(esp, 0x002D56CAu); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D56CA: ;
    PUSH32(esp, 0x2D8070);
    PUSH32(esp, 0x002D56D4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D56D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D56E0
 * Original: 0x002D56E0 - 0x002D5725 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D56E0(void)
{

loc_002D56E0: ;
    eax = MEM32(0x383004);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x34A1FC);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x2616D0);
    PUSH32(esp, 0x2616B0);
    PUSH32(esp, 0x2616A0);
    PUSH32(esp, 0x261640);
    PUSH32(esp, eax);
    ecx = 0x532BD0;
    PUSH32(esp, 0x002D5719u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5719: ;
    PUSH32(esp, 0x2D8080);
    PUSH32(esp, 0x002D5723u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5723: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5730
 * Original: 0x002D5730 - 0x002D5772 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5730(void)
{

loc_002D5730: ;
    eax = MEM32(0x383008);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x261710);
    PUSH32(esp, eax);
    ecx = 0x532C04;
    PUSH32(esp, 0x002D5766u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5766: ;
    PUSH32(esp, 0x2D8090);
    PUSH32(esp, 0x002D5770u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5770: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5780
 * Original: 0x002D5780 - 0x002D57C2 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5780(void)
{

loc_002D5780: ;
    eax = MEM32(0x38300C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x532C04);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x261750);
    PUSH32(esp, eax);
    ecx = 0x532C38;
    PUSH32(esp, 0x002D57B6u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D57B6: ;
    PUSH32(esp, 0x2D80A0);
    PUSH32(esp, 0x002D57C0u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D57C0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D57D0
 * Original: 0x002D57D0 - 0x002D5815 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D57D0(void)
{

loc_002D57D0: ;
    eax = MEM32(0x383010);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x34A2C4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x532C38);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x261820);
    PUSH32(esp, 0x2617A0);
    PUSH32(esp, 0x261790);
    PUSH32(esp, 0x2617C0);
    PUSH32(esp, eax);
    ecx = 0x532C6C;
    PUSH32(esp, 0x002D5809u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5809: ;
    PUSH32(esp, 0x2D80B0);
    PUSH32(esp, 0x002D5813u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5813: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5820
 * Original: 0x002D5820 - 0x002D5865 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5820(void)
{

loc_002D5820: ;
    eax = MEM32(0x383014);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x34A350);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x532B9C);
    PUSH32(esp, 0x2618E0);
    PUSH32(esp, 0x2618D0);
    PUSH32(esp, 0x261850);
    PUSH32(esp, 0x261840);
    PUSH32(esp, 0x261870);
    PUSH32(esp, eax);
    ecx = 0x532CA0;
    PUSH32(esp, 0x002D5859u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5859: ;
    PUSH32(esp, 0x2D80C0);
    PUSH32(esp, 0x002D5863u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5863: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5870
 * Original: 0x002D5870 - 0x002D58A3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5870(void)
{

loc_002D5870: ;
    eax = MEM32(0x383018);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x532CD4;
    PUSH32(esp, 0x002D5897u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5897: ;
    PUSH32(esp, 0x2D80D0);
    PUSH32(esp, 0x002D58A1u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D58A1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D58B0
 * Original: 0x002D58B0 - 0x002D58F5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D58B0(void)
{

loc_002D58B0: ;
    eax = MEM32(0x38301C);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x34A4E0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x532CD4);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x261980);
    PUSH32(esp, 0x261900);
    PUSH32(esp, 0x2618F0);
    PUSH32(esp, 0x261920);
    PUSH32(esp, eax);
    ecx = 0x532D08;
    PUSH32(esp, 0x002D58E9u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D58E9: ;
    PUSH32(esp, 0x2D80E0);
    PUSH32(esp, 0x002D58F3u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D58F3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5900
 * Original: 0x002D5900 - 0x002D5945 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5900(void)
{

loc_002D5900: ;
    eax = MEM32(0x383020);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x34A574);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x532F10);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x261A60);
    PUSH32(esp, 0x2619E0);
    PUSH32(esp, 0x2619D0);
    PUSH32(esp, 0x261A00);
    PUSH32(esp, eax);
    ecx = 0x532D3C;
    PUSH32(esp, 0x002D5939u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5939: ;
    PUSH32(esp, 0x2D80F0);
    PUSH32(esp, 0x002D5943u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5943: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5950
 * Original: 0x002D5950 - 0x002D5995 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5950(void)
{

loc_002D5950: ;
    eax = MEM32(0x383024);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x34A628);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x532F44);
    PUSH32(esp, 0x262020);
    PUSH32(esp, 0x261FD0);
    PUSH32(esp, 0x261F50);
    PUSH32(esp, 0x261F40);
    PUSH32(esp, 0x261F70);
    PUSH32(esp, eax);
    ecx = 0x532D70;
    PUSH32(esp, 0x002D5989u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5989: ;
    PUSH32(esp, 0x2D8100);
    PUSH32(esp, 0x002D5993u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5993: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D59A0
 * Original: 0x002D59A0 - 0x002D59E5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D59A0(void)
{

loc_002D59A0: ;
    eax = MEM32(0x383028);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x34A6BC);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x532F78);
    PUSH32(esp, 0x262280);
    PUSH32(esp, 0x262250);
    PUSH32(esp, 0x2621D0);
    PUSH32(esp, 0x2621C0);
    PUSH32(esp, 0x2621F0);
    PUSH32(esp, eax);
    ecx = 0x532DA4;
    PUSH32(esp, 0x002D59D9u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D59D9: ;
    PUSH32(esp, 0x2D8110);
    PUSH32(esp, 0x002D59E3u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D59E3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D59F0
 * Original: 0x002D59F0 - 0x002D5A35 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D59F0(void)
{

loc_002D59F0: ;
    eax = MEM32(0x38302C);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 0x34A780);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x532FAC);
    PUSH32(esp, 0x2624A0);
    PUSH32(esp, 0x262460);
    PUSH32(esp, 0x2623E0);
    PUSH32(esp, 0x2623D0);
    PUSH32(esp, 0x262400);
    PUSH32(esp, eax);
    ecx = 0x532DD8;
    PUSH32(esp, 0x002D5A29u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5A29: ;
    PUSH32(esp, 0x2D8120);
    PUSH32(esp, 0x002D5A33u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5A33: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5A40
 * Original: 0x002D5A40 - 0x002D5A82 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5A40(void)
{

loc_002D5A40: ;
    eax = MEM32(0x383030);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x532C04);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x2624C0);
    PUSH32(esp, eax);
    ecx = 0x532E0C;
    PUSH32(esp, 0x002D5A76u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5A76: ;
    PUSH32(esp, 0x2D8130);
    PUSH32(esp, 0x002D5A80u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5A80: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5A90
 * Original: 0x002D5A90 - 0x002D5AD5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5A90(void)
{

loc_002D5A90: ;
    eax = MEM32(0x383034);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x34A880);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x532E0C);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x262580);
    PUSH32(esp, 0x262500);
    PUSH32(esp, 0x2624F0);
    PUSH32(esp, 0x262520);
    PUSH32(esp, eax);
    ecx = 0x532E40;
    PUSH32(esp, 0x002D5AC9u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5AC9: ;
    PUSH32(esp, 0x2D8140);
    PUSH32(esp, 0x002D5AD3u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5AD3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5AE0
 * Original: 0x002D5AE0 - 0x002D5B25 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5AE0(void)
{

loc_002D5AE0: ;
    eax = MEM32(0x383038);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x34A9D4);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x532FE0);
    PUSH32(esp, 0x2627D0);
    PUSH32(esp, 0x2627B0);
    PUSH32(esp, 0x262730);
    PUSH32(esp, 0x262720);
    PUSH32(esp, 0x262750);
    PUSH32(esp, eax);
    ecx = 0x532E74;
    PUSH32(esp, 0x002D5B19u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5B19: ;
    PUSH32(esp, 0x2D8150);
    PUSH32(esp, 0x002D5B23u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5B23: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5B30
 * Original: 0x002D5B30 - 0x002D5B72 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5B30(void)
{

loc_002D5B30: ;
    eax = MEM32(0x38303C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x533014);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x264080);
    PUSH32(esp, 0x262CC0);
    PUSH32(esp, 0x262CB0);
    PUSH32(esp, 0x262CE0);
    PUSH32(esp, eax);
    ecx = 0x532EA8;
    PUSH32(esp, 0x002D5B66u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5B66: ;
    PUSH32(esp, 0x2D8160);
    PUSH32(esp, 0x002D5B70u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5B70: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5B80
 * Original: 0x002D5B80 - 0x002D5BC2 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5B80(void)
{

loc_002D5B80: ;
    eax = MEM32(0x383040);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x533048);
    PUSH32(esp, 0x263CE0);
    PUSH32(esp, 0x264130);
    PUSH32(esp, 0x263C40);
    PUSH32(esp, 0x263C30);
    PUSH32(esp, 0x263C80);
    PUSH32(esp, eax);
    ecx = 0x532EDC;
    PUSH32(esp, 0x002D5BB6u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5BB6: ;
    PUSH32(esp, 0x2D8170);
    PUSH32(esp, 0x002D5BC0u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5BC0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5BD0
 * Original: 0x002D5BD0 - 0x002D5C12 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5BD0(void)
{

loc_002D5BD0: ;
    eax = MEM32(0x383044);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x532C04);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x263D00);
    PUSH32(esp, 0x263CF0);
    PUSH32(esp, 0x263D20);
    PUSH32(esp, eax);
    ecx = 0x532F10;
    PUSH32(esp, 0x002D5C06u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5C06: ;
    PUSH32(esp, 0x2D8180);
    PUSH32(esp, 0x002D5C10u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5C10: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5C20
 * Original: 0x002D5C20 - 0x002D5C65 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5C20(void)
{

loc_002D5C20: ;
    eax = MEM32(0x383048);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x34AAB0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x532C04);
    PUSH32(esp, 0x263E40);
    PUSH32(esp, 0x263E10);
    PUSH32(esp, 0x263D90);
    PUSH32(esp, 0x263D80);
    PUSH32(esp, 0x263DB0);
    PUSH32(esp, eax);
    ecx = 0x532F44;
    PUSH32(esp, 0x002D5C59u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5C59: ;
    PUSH32(esp, 0x2D8190);
    PUSH32(esp, 0x002D5C63u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5C63: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5C70
 * Original: 0x002D5C70 - 0x002D5CB5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5C70(void)
{

loc_002D5C70: ;
    eax = MEM32(0x38304C);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x34AB24);
    PUSH32(esp, 1);
    PUSH32(esp, 0x532C04);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x263FE0);
    PUSH32(esp, 0x263E50);
    PUSH32(esp, 0x263ED0);
    PUSH32(esp, 0x263E70);
    PUSH32(esp, eax);
    ecx = 0x532F78;
    PUSH32(esp, 0x002D5CA9u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5CA9: ;
    PUSH32(esp, 0x2D81A0);
    PUSH32(esp, 0x002D5CB3u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5CB3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5CC0
 * Original: 0x002D5CC0 - 0x002D5D05 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5CC0(void)
{

loc_002D5CC0: ;
    eax = MEM32(0x383050);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x34AB50);
    PUSH32(esp, 1);
    PUSH32(esp, 0x532C04);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x263FE0);
    PUSH32(esp, 0x263EE0);
    PUSH32(esp, 0x263ED0);
    PUSH32(esp, 0x263F00);
    PUSH32(esp, eax);
    ecx = 0x532FAC;
    PUSH32(esp, 0x002D5CF9u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5CF9: ;
    PUSH32(esp, 0x2D81B0);
    PUSH32(esp, 0x002D5D03u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5D03: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5D10
 * Original: 0x002D5D10 - 0x002D5D55 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5D10(void)
{

loc_002D5D10: ;
    eax = MEM32(0x383054);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x34AB74);
    PUSH32(esp, 1);
    PUSH32(esp, 0x532C04);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x263FE0);
    PUSH32(esp, 0x263F60);
    PUSH32(esp, 0x263ED0);
    PUSH32(esp, 0x263F80);
    PUSH32(esp, eax);
    ecx = 0x532FE0;
    PUSH32(esp, 0x002D5D49u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5D49: ;
    PUSH32(esp, 0x2D81C0);
    PUSH32(esp, 0x002D5D53u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5D53: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5D60
 * Original: 0x002D5D60 - 0x002D5DA5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5D60(void)
{

loc_002D5D60: ;
    eax = MEM32(0x383058);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x34AB94);
    PUSH32(esp, 8);
    PUSH32(esp, 0x530EBC);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x264080);
    PUSH32(esp, 0x264000);
    PUSH32(esp, 0x263FF0);
    PUSH32(esp, 0x264020);
    PUSH32(esp, eax);
    ecx = 0x533014;
    PUSH32(esp, 0x002D5D99u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5D99: ;
    PUSH32(esp, 0x2D81D0);
    PUSH32(esp, 0x002D5DA3u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5DA3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5DB0
 * Original: 0x002D5DB0 - 0x002D5DF5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5DB0(void)
{

loc_002D5DB0: ;
    eax = MEM32(0x38305C);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    PUSH32(esp, 0x34ABE0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x532C04);
    PUSH32(esp, 0x264140);
    PUSH32(esp, 0x264130);
    PUSH32(esp, 0x2640B0);
    PUSH32(esp, 0x2640A0);
    PUSH32(esp, 0x2640D0);
    PUSH32(esp, eax);
    ecx = 0x533048;
    PUSH32(esp, 0x002D5DE9u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5DE9: ;
    PUSH32(esp, 0x2D81E0);
    PUSH32(esp, 0x002D5DF3u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5DF3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5E00
 * Original: 0x002D5E00 - 0x002D5E17 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D5E00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x323530);
    PUSH32(esp, 0x002D5E0Eu); RECOMP_ABI_CALL(0x002C9560u, sub_002C9560); /* call 0x002C9560 */

loc_002D5E0E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5332C4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002D5E20
 * Original: 0x002D5E20 - 0x002D5E33 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D5E20: ;
    MEM16(0x383248) = MEM16(0x383248) + 1;
    _fa = (uint32_t)(MEM16(0x383248)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x2D81F0);
    PUSH32(esp, 0x002D5E31u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5E31: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5E40
 * Original: 0x002D5E40 - 0x002D5E56 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5E40(void)
{

loc_002D5E40: ;
    ecx = 0x534578;
    PUSH32(esp, 0x002D5E4Au); RECOMP_ABI_CALL(0x002841E0u, sub_002841E0); /* call 0x002841E0 */

loc_002D5E4A: ;
    PUSH32(esp, 0x2D8210);
    PUSH32(esp, 0x002D5E54u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5E54: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5E60
 * Original: 0x002D5E60 - 0x002D5E87 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5E60(void)
{

loc_002D5E60: ;
    PUSH32(esp, 0x277430);
    PUSH32(esp, 0x277420);
    PUSH32(esp, 0xB2);
    PUSH32(esp, 4);
    PUSH32(esp, 0x5345E8);
    PUSH32(esp, 0x002D5E7Bu); RECOMP_ABI_CALL(0x002C1AE6u, sub_002C1AE6); /* call 0x002C1AE6 */

loc_002D5E7B: ;
    PUSH32(esp, 0x2D8220);
    PUSH32(esp, 0x002D5E85u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5E85: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5E90
 * Original: 0x002D5E90 - 0x002D5EA3 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D5E90: ;
    MEM16(0x383248) = MEM16(0x383248) + 1;
    _fa = (uint32_t)(MEM16(0x383248)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x2D8240);
    PUSH32(esp, 0x002D5EA1u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5EA1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5EB0
 * Original: 0x002D5EB0 - 0x002D5EC5 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5EB0(void)
{

loc_002D5EB0: ;
    eax = MEM32(0x530F08);
    MEM32(0x384794) = eax;
    MEM32(0x530F08) = 0x384790;
    esp += 4; return; /* ret */

}

/**
 * sub_002D5ED0
 * Original: 0x002D5ED0 - 0x002D5EE5 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5ED0(void)
{

loc_002D5ED0: ;
    eax = MEM32(0x530F08);
    MEM32(0x3847A0) = eax;
    MEM32(0x530F08) = 0x38479C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D5EF0
 * Original: 0x002D5EF0 - 0x002D5F05 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5EF0(void)
{

loc_002D5EF0: ;
    eax = MEM32(0x530F08);
    MEM32(0x3847AC) = eax;
    MEM32(0x530F08) = 0x3847A8;
    esp += 4; return; /* ret */

}

/**
 * sub_002D5F10
 * Original: 0x002D5F10 - 0x002D5F52 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5F10(void)
{

loc_002D5F10: ;
    eax = MEM32(0x3847B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x530F4C);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0xF23E0);
    PUSH32(esp, 0x2B2960);
    PUSH32(esp, eax);
    ecx = 0x535568;
    PUSH32(esp, 0x002D5F46u); RECOMP_ABI_CALL(0x001F6AC0u, sub_001F6AC0); /* call 0x001F6AC0 */

loc_002D5F46: ;
    PUSH32(esp, 0x2D8260);
    PUSH32(esp, 0x002D5F50u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D5F50: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5F60
 * Original: 0x002D5F60 - 0x002D5F6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D5F60: ;
    ecx = 0x3887D0;
    g_seh_ebp = ebp; sub_0015C5D0(); return; /* tail jmp 0x0015C5D0 */

}

/**
 * sub_002D5F70
 * Original: 0x002D5F70 - 0x002D5F7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D5F70: ;
    ecx = 0x389F60;
    g_seh_ebp = ebp; sub_001374D0(); return; /* tail jmp 0x001374D0 */

}

/**
 * sub_002D5F80
 * Original: 0x002D5F80 - 0x002D5F8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D5F80: ;
    ecx = 0x389FD0;
    g_seh_ebp = ebp; sub_00014130(); return; /* tail jmp 0x00014130 */

}

/**
 * sub_002D5F90
 * Original: 0x002D5F90 - 0x002D5F91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5F90(void)
{

loc_002D5F90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D5FA0
 * Original: 0x002D5FA0 - 0x002D5FD3 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D5FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x3883C0;
    PUSH32(esp, 0x002D5FACu); RECOMP_ABI_CALL(0x00082160u, sub_00082160); /* call 0x00082160 */

loc_002D5FAC: ;
    esi = 0x3877DC;
    edi = 4;
    goto loc_002D5FC0;

    /* nop */
    /* nop */

loc_002D5FC0: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x124;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x002D5FCDu); RECOMP_ABI_CALL(0x00077FA0u, sub_00077FA0); /* call 0x00077FA0 */

loc_002D5FCD: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002D5FC0; /* jne: not equal / not zero */

loc_002D5FD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002D5FE0
 * Original: 0x002D5FE0 - 0x002D5FEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D5FE0: ;
    ecx = 0x38DCC8;
    g_seh_ebp = ebp; sub_0001C150(); return; /* tail jmp 0x0001C150 */

}

/**
 * sub_002D5FF0
 * Original: 0x002D5FF0 - 0x002D5FF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D5FF0(void)
{

loc_002D5FF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6000
 * Original: 0x002D6000 - 0x002D604E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x39FCF8;
    edi = 0x5FF;
    /* nop */

loc_002D6010: ;
    eax = MEM32(esi + -48);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6029; /* je: equal / zero */

loc_002D601A: ;
    edx = MEM32(eax);
    ecx = esi + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002D6029; /* jne: not equal / not zero */

loc_002D6023: ;
    MEM32(eax) = 0;

loc_002D6029: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6034; /* je: equal / zero */

loc_002D6030: ;
    MEM8(esi + 0x24) = 0;

loc_002D6034: ;
    ecx = esi + -8;
    MEM32(ecx) = 0;
    MEM32(esi) = 0;
    PUSH32(esp, 0x002D6048u); RECOMP_ABI_CALL(0x00017300u, sub_00017300); /* call 0x00017300 */

loc_002D6048: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002D6010; /* jne: not equal / not zero */

loc_002D604B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002D6050
 * Original: 0x002D6050 - 0x002D6051 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6050(void)
{

loc_002D6050: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6060
 * Original: 0x002D6060 - 0x002D606A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6060: ;
    ecx = 0x3A0190;
    g_seh_ebp = ebp; sub_000EF420(); return; /* tail jmp 0x000EF420 */

}

/**
 * sub_002D6070
 * Original: 0x002D6070 - 0x002D608A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6070: ;
    SET_LO8(eax, MEM8(0x3A0170));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6089; /* je: equal / zero */

loc_002D6079: ;
    eax = MEM32(0x3A0160);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6089; /* je: equal / zero */

loc_002D6082: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6088u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_002D6088: ;
    POP32(esp, ecx);

loc_002D6089: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6090
 * Original: 0x002D6090 - 0x002D60AA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6090: ;
    SET_LO8(eax, MEM8(0x3A0240));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D60A9; /* je: equal / zero */

loc_002D6099: ;
    eax = MEM32(0x3A0230);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D60A9; /* je: equal / zero */

loc_002D60A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D60A8u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_002D60A8: ;
    POP32(esp, ecx);

loc_002D60A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D60B0
 * Original: 0x002D60B0 - 0x002D60CA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D60B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D60B0: ;
    SET_LO8(eax, MEM8(0x372E20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D60C9; /* je: equal / zero */

loc_002D60B9: ;
    eax = MEM32(0x372E10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D60C9; /* je: equal / zero */

loc_002D60C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D60C8u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_002D60C8: ;
    POP32(esp, ecx);

loc_002D60C9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D60D0
 * Original: 0x002D60D0 - 0x002D60D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D60D0(void)
{

loc_002D60D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D60E0
 * Original: 0x002D60E0 - 0x002D6134 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D60E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D60E0: ;
    eax = MEM32(0x3A02E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6123; /* je: equal / zero */

loc_002D60E9: ;
    eax = MEM32(0x3A02E0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A02E0;
    PUSH32(esp, 0x002D60FCu); RECOMP_ABI_CALL(0x00036240u, sub_00036240); /* call 0x00036240 */

loc_002D60FC: ;
    eax = MEM32(0x3A02E0);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A02E0);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A02E0);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A02E4) = 0;

loc_002D6123: ;
    eax = MEM32(0x3A02E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6133; /* je: equal / zero */

loc_002D612C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6132u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6132: ;
    POP32(esp, ecx);

loc_002D6133: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6140
 * Original: 0x002D6140 - 0x002D615A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6140: ;
    SET_LO8(eax, MEM8(0x372E44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6159; /* je: equal / zero */

loc_002D6149: ;
    eax = MEM32(0x372E34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6159; /* je: equal / zero */

loc_002D6152: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6158u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_002D6158: ;
    POP32(esp, ecx);

loc_002D6159: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6160
 * Original: 0x002D6160 - 0x002D61B4 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6160: ;
    eax = MEM32(0x3A0308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D61A3; /* je: equal / zero */

loc_002D6169: ;
    eax = MEM32(0x3A0304);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A0304;
    PUSH32(esp, 0x002D617Cu); RECOMP_ABI_CALL(0x00037220u, sub_00037220); /* call 0x00037220 */

loc_002D617C: ;
    eax = MEM32(0x3A0304);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A0304);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A0304);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A0308) = 0;

loc_002D61A3: ;
    eax = MEM32(0x3A0304);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D61B3; /* je: equal / zero */

loc_002D61AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D61B2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D61B2: ;
    POP32(esp, ecx);

loc_002D61B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D61C0
 * Original: 0x002D61C0 - 0x002D6214 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D61C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D61C0: ;
    eax = MEM32(0x3A0314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6203; /* je: equal / zero */

loc_002D61C9: ;
    eax = MEM32(0x3A0310);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A0310;
    PUSH32(esp, 0x002D61DCu); RECOMP_ABI_CALL(0x00037260u, sub_00037260); /* call 0x00037260 */

loc_002D61DC: ;
    eax = MEM32(0x3A0310);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A0310);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A0310);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A0314) = 0;

loc_002D6203: ;
    eax = MEM32(0x3A0310);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6213; /* je: equal / zero */

loc_002D620C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6212u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6212: ;
    POP32(esp, ecx);

loc_002D6213: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6220
 * Original: 0x002D6220 - 0x002D6221 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6220(void)
{

loc_002D6220: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6230
 * Original: 0x002D6230 - 0x002D6231 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6230(void)
{

loc_002D6230: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6240
 * Original: 0x002D6240 - 0x002D625C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6240: ;
    ecx = MEM32(0x3A0528);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6251; /* je: equal / zero */

loc_002D624A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x002D6251u); RECOMP_ABI_CALL(0x00039AF0u, sub_00039AF0); /* call 0x00039AF0 */

loc_002D6251: ;
    MEM32(0x3A0528) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6260
 * Original: 0x002D6260 - 0x002D6271 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6260: ;
    eax = MEM32(0x3A656C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6270; /* je: equal / zero */

loc_002D6269: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D626Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D626F: ;
    POP32(esp, ecx);

loc_002D6270: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6280
 * Original: 0x002D6280 - 0x002D62D4 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6280: ;
    eax = MEM32(0x3A658C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D62C3; /* je: equal / zero */

loc_002D6289: ;
    eax = MEM32(0x3A6588);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A6588;
    PUSH32(esp, 0x002D629Cu); RECOMP_ABI_CALL(0x0003C460u, sub_0003C460); /* call 0x0003C460 */

loc_002D629C: ;
    eax = MEM32(0x3A6588);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A6588);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A6588);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A658C) = 0;

loc_002D62C3: ;
    eax = MEM32(0x3A6588);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D62D3; /* je: equal / zero */

loc_002D62CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D62D2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D62D2: ;
    POP32(esp, ecx);

loc_002D62D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D62E0
 * Original: 0x002D62E0 - 0x002D6334 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D62E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D62E0: ;
    eax = MEM32(0x3A6580);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6323; /* je: equal / zero */

loc_002D62E9: ;
    eax = MEM32(0x3A657C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A657C;
    PUSH32(esp, 0x002D62FCu); RECOMP_ABI_CALL(0x0003C460u, sub_0003C460); /* call 0x0003C460 */

loc_002D62FC: ;
    eax = MEM32(0x3A657C);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A657C);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A657C);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A6580) = 0;

loc_002D6323: ;
    eax = MEM32(0x3A657C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6333; /* je: equal / zero */

loc_002D632C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6332u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6332: ;
    POP32(esp, ecx);

loc_002D6333: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6340
 * Original: 0x002D6340 - 0x002D634A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6340: ;
    ecx = 0x3A65A8;
    g_seh_ebp = ebp; sub_00156800(); return; /* tail jmp 0x00156800 */

}

/**
 * sub_002D6350
 * Original: 0x002D6350 - 0x002D6361 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6350: ;
    eax = MEM32(0x3A6598);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6360; /* je: equal / zero */

loc_002D6359: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D635Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D635F: ;
    POP32(esp, ecx);

loc_002D6360: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6370
 * Original: 0x002D6370 - 0x002D637A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6370: ;
    ecx = 0x3A6670;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D6380
 * Original: 0x002D6380 - 0x002D638A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6380: ;
    ecx = 0x3A6694;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D6390
 * Original: 0x002D6390 - 0x002D639A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6390: ;
    ecx = 0x3A66B8;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D63A0
 * Original: 0x002D63A0 - 0x002D63AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D63A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D63A0: ;
    ecx = 0x3A66DC;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D63B0
 * Original: 0x002D63B0 - 0x002D63BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D63B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D63B0: ;
    ecx = 0x3A6700;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D63C0
 * Original: 0x002D63C0 - 0x002D63CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D63C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D63C0: ;
    ecx = 0x3A6738;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D63D0
 * Original: 0x002D63D0 - 0x002D6424 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D63D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D63D0: ;
    eax = MEM32(0x3A6760);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6413; /* je: equal / zero */

loc_002D63D9: ;
    eax = MEM32(0x3A675C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A675C;
    PUSH32(esp, 0x002D63ECu); RECOMP_ABI_CALL(0x0004F420u, sub_0004F420); /* call 0x0004F420 */

loc_002D63EC: ;
    eax = MEM32(0x3A675C);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A675C);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A675C);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A6760) = 0;

loc_002D6413: ;
    eax = MEM32(0x3A675C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6423; /* je: equal / zero */

loc_002D641C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6422u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6422: ;
    POP32(esp, ecx);

loc_002D6423: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6430
 * Original: 0x002D6430 - 0x002D643A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6430: ;
    ecx = 0x3A75BC;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D6440
 * Original: 0x002D6440 - 0x002D6494 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6440: ;
    eax = MEM32(0x3A75EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6483; /* je: equal / zero */

loc_002D6449: ;
    eax = MEM32(0x3A75E8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A75E8;
    PUSH32(esp, 0x002D645Cu); RECOMP_ABI_CALL(0x00050E40u, sub_00050E40); /* call 0x00050E40 */

loc_002D645C: ;
    eax = MEM32(0x3A75E8);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A75E8);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A75E8);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A75EC) = 0;

loc_002D6483: ;
    eax = MEM32(0x3A75E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6493; /* je: equal / zero */

loc_002D648C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6492u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6492: ;
    POP32(esp, ecx);

loc_002D6493: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D64A0
 * Original: 0x002D64A0 - 0x002D64AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D64A0(void)
{

loc_002D64A0: ;
    MEM32(0x3A75FC) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D64B0
 * Original: 0x002D64B0 - 0x002D64BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D64B0(void)
{

loc_002D64B0: ;
    MEM32(0x3A7628) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D64C0
 * Original: 0x002D64C0 - 0x002D64CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D64C0(void)
{

loc_002D64C0: ;
    MEM32(0x3A7654) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D64D0
 * Original: 0x002D64D0 - 0x002D64DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D64D0(void)
{

loc_002D64D0: ;
    MEM32(0x3A7680) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D64E0
 * Original: 0x002D64E0 - 0x002D64EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D64E0(void)
{

loc_002D64E0: ;
    MEM32(0x3A76AC) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D64F0
 * Original: 0x002D64F0 - 0x002D64FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D64F0(void)
{

loc_002D64F0: ;
    MEM32(0x3A76D8) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6500
 * Original: 0x002D6500 - 0x002D6514 (20 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6500: ;
    MEM32(0x3A7708) = 0x3052C4;
    ecx = 0x3A7708;
    g_seh_ebp = ebp; sub_0005D6B0(); return; /* tail jmp 0x0005D6B0 */

}

/**
 * sub_002D6520
 * Original: 0x002D6520 - 0x002D652A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6520: ;
    ecx = 0x3A7828;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D6530
 * Original: 0x002D6530 - 0x002D653A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6530: ;
    ecx = 0x3A784C;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D6540
 * Original: 0x002D6540 - 0x002D654A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6540: ;
    ecx = 0x3A7878;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D6550
 * Original: 0x002D6550 - 0x002D6561 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6550: ;
    eax = MEM32(0x3A78A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6560; /* je: equal / zero */

loc_002D6559: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D655Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D655F: ;
    POP32(esp, ecx);

loc_002D6560: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6570
 * Original: 0x002D6570 - 0x002D6581 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6570: ;
    eax = MEM32(0x3A78B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6580; /* je: equal / zero */

loc_002D6579: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D657Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D657F: ;
    POP32(esp, ecx);

loc_002D6580: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6590
 * Original: 0x002D6590 - 0x002D65E4 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6590: ;
    eax = MEM32(0x3A78C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D65D3; /* je: equal / zero */

loc_002D6599: ;
    eax = MEM32(0x3A78C4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A78C4;
    PUSH32(esp, 0x002D65ACu); RECOMP_ABI_CALL(0x00063CF0u, sub_00063CF0); /* call 0x00063CF0 */

loc_002D65AC: ;
    eax = MEM32(0x3A78C4);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A78C4);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A78C4);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A78C8) = 0;

loc_002D65D3: ;
    eax = MEM32(0x3A78C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D65E3; /* je: equal / zero */

loc_002D65DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D65E2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D65E2: ;
    POP32(esp, ecx);

loc_002D65E3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D65F0
 * Original: 0x002D65F0 - 0x002D65FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D65F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D65F0: ;
    ecx = 0x3A78D0;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D6600
 * Original: 0x002D6600 - 0x002D6601 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6600(void)
{

loc_002D6600: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6610
 * Original: 0x002D6610 - 0x002D6664 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6610: ;
    eax = MEM32(0x3A9C38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6653; /* je: equal / zero */

loc_002D6619: ;
    eax = MEM32(0x3A9C34);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A9C34;
    PUSH32(esp, 0x002D662Cu); RECOMP_ABI_CALL(0x00067250u, sub_00067250); /* call 0x00067250 */

loc_002D662C: ;
    eax = MEM32(0x3A9C34);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A9C34);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A9C34);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A9C38) = 0;

loc_002D6653: ;
    eax = MEM32(0x3A9C34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6663; /* je: equal / zero */

loc_002D665C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6662u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6662: ;
    POP32(esp, ecx);

loc_002D6663: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6670
 * Original: 0x002D6670 - 0x002D66C4 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6670: ;
    eax = MEM32(0x3A9C5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D66B3; /* je: equal / zero */

loc_002D6679: ;
    eax = MEM32(0x3A9C58);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A9C58;
    PUSH32(esp, 0x002D668Cu); RECOMP_ABI_CALL(0x00067E80u, sub_00067E80); /* call 0x00067E80 */

loc_002D668C: ;
    eax = MEM32(0x3A9C58);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A9C58);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A9C58);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A9C5C) = 0;

loc_002D66B3: ;
    eax = MEM32(0x3A9C58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D66C3; /* je: equal / zero */

loc_002D66BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D66C2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D66C2: ;
    POP32(esp, ecx);

loc_002D66C3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D66D0
 * Original: 0x002D66D0 - 0x002D6724 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D66D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D66D0: ;
    eax = MEM32(0x3A9C44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6713; /* je: equal / zero */

loc_002D66D9: ;
    eax = MEM32(0x3A9C40);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A9C40;
    PUSH32(esp, 0x002D66ECu); RECOMP_ABI_CALL(0x00068030u, sub_00068030); /* call 0x00068030 */

loc_002D66EC: ;
    eax = MEM32(0x3A9C40);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A9C40);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A9C40);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A9C44) = 0;

loc_002D6713: ;
    eax = MEM32(0x3A9C40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6723; /* je: equal / zero */

loc_002D671C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6722u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6722: ;
    POP32(esp, ecx);

loc_002D6723: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6730
 * Original: 0x002D6730 - 0x002D6784 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6730: ;
    eax = MEM32(0x3A9C50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6773; /* je: equal / zero */

loc_002D6739: ;
    eax = MEM32(0x3A9C4C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3A9C4C;
    PUSH32(esp, 0x002D674Cu); RECOMP_ABI_CALL(0x00068710u, sub_00068710); /* call 0x00068710 */

loc_002D674C: ;
    eax = MEM32(0x3A9C4C);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3A9C4C);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3A9C4C);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3A9C50) = 0;

loc_002D6773: ;
    eax = MEM32(0x3A9C4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6783; /* je: equal / zero */

loc_002D677C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6782u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6782: ;
    POP32(esp, ecx);

loc_002D6783: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6790
 * Original: 0x002D6790 - 0x002D679A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6790: ;
    ecx = 0x3BC890;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D67A0
 * Original: 0x002D67A0 - 0x002D67AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D67A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D67A0: ;
    ecx = 0x3BC8B4;
    g_seh_ebp = ebp; sub_000659F0(); return; /* tail jmp 0x000659F0 */

}

/**
 * sub_002D67B0
 * Original: 0x002D67B0 - 0x002D67C1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D67B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D67B0: ;
    eax = MEM32(0x3BC8E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D67C0; /* je: equal / zero */

loc_002D67B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D67BFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D67BF: ;
    POP32(esp, ecx);

loc_002D67C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D67D0
 * Original: 0x002D67D0 - 0x002D67E1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D67D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D67D0: ;
    eax = MEM32(0x3BC8F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D67E0; /* je: equal / zero */

loc_002D67D9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D67DFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D67DF: ;
    POP32(esp, ecx);

loc_002D67E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D67F0
 * Original: 0x002D67F0 - 0x002D6801 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D67F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D67F0: ;
    eax = MEM32(0x3BC904);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6800; /* je: equal / zero */

loc_002D67F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D67FFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D67FF: ;
    POP32(esp, ecx);

loc_002D6800: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6810
 * Original: 0x002D6810 - 0x002D6821 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6810: ;
    eax = MEM32(0x3BC918);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6820; /* je: equal / zero */

loc_002D6819: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D681Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D681F: ;
    POP32(esp, ecx);

loc_002D6820: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6830
 * Original: 0x002D6830 - 0x002D6841 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6830: ;
    eax = MEM32(0x3BC92C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6840; /* je: equal / zero */

loc_002D6839: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D683Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D683F: ;
    POP32(esp, ecx);

loc_002D6840: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6850
 * Original: 0x002D6850 - 0x002D6861 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6850: ;
    eax = MEM32(0x3BC940);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6860; /* je: equal / zero */

loc_002D6859: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D685Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D685F: ;
    POP32(esp, ecx);

loc_002D6860: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6870
 * Original: 0x002D6870 - 0x002D6881 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6870: ;
    eax = MEM32(0x3BC954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6880; /* je: equal / zero */

loc_002D6879: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D687Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D687F: ;
    POP32(esp, ecx);

loc_002D6880: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6890
 * Original: 0x002D6890 - 0x002D68A1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6890: ;
    eax = MEM32(0x3BC964);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D68A0; /* je: equal / zero */

loc_002D6899: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D689Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D689F: ;
    POP32(esp, ecx);

loc_002D68A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D68B0
 * Original: 0x002D68B0 - 0x002D68C1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D68B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D68B0: ;
    eax = MEM32(0x3BC974);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D68C0; /* je: equal / zero */

loc_002D68B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D68BFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D68BF: ;
    POP32(esp, ecx);

loc_002D68C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D68D0
 * Original: 0x002D68D0 - 0x002D68E1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D68D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D68D0: ;
    eax = MEM32(0x3BC984);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D68E0; /* je: equal / zero */

loc_002D68D9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D68DFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D68DF: ;
    POP32(esp, ecx);

loc_002D68E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D68F0
 * Original: 0x002D68F0 - 0x002D6901 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D68F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D68F0: ;
    eax = MEM32(0x3BC994);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6900; /* je: equal / zero */

loc_002D68F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D68FFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D68FF: ;
    POP32(esp, ecx);

loc_002D6900: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6910
 * Original: 0x002D6910 - 0x002D6921 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6910: ;
    eax = MEM32(0x3BC9A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6920; /* je: equal / zero */

loc_002D6919: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D691Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D691F: ;
    POP32(esp, ecx);

loc_002D6920: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6930
 * Original: 0x002D6930 - 0x002D6941 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6930: ;
    eax = MEM32(0x3BC9B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6940; /* je: equal / zero */

loc_002D6939: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D693Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D693F: ;
    POP32(esp, ecx);

loc_002D6940: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6950
 * Original: 0x002D6950 - 0x002D6961 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6950: ;
    eax = MEM32(0x3BC9C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6960; /* je: equal / zero */

loc_002D6959: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D695Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D695F: ;
    POP32(esp, ecx);

loc_002D6960: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6970
 * Original: 0x002D6970 - 0x002D6981 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6970: ;
    eax = MEM32(0x3BC9D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6980; /* je: equal / zero */

loc_002D6979: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D697Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D697F: ;
    POP32(esp, ecx);

loc_002D6980: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6990
 * Original: 0x002D6990 - 0x002D69A1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6990: ;
    eax = MEM32(0x3BC9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D69A0; /* je: equal / zero */

loc_002D6999: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D699Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D699F: ;
    POP32(esp, ecx);

loc_002D69A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D69B0
 * Original: 0x002D69B0 - 0x002D69B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D69B0(void)
{

loc_002D69B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D69C0
 * Original: 0x002D69C0 - 0x002D69C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D69C0(void)
{

loc_002D69C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D69D0
 * Original: 0x002D69D0 - 0x002D69DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D69D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D69D0: ;
    ecx = 0x3BE9A0;
    g_seh_ebp = ebp; sub_000742F0(); return; /* tail jmp 0x000742F0 */

}

/**
 * sub_002D69E0
 * Original: 0x002D69E0 - 0x002D69E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D69E0(void)
{

loc_002D69E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D69F0
 * Original: 0x002D69F0 - 0x002D6A04 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D69F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D69F0: ;
    ecx = 0x3C2538;
    PUSH32(esp, 0x002D69FAu); RECOMP_ABI_CALL(0x000774B0u, sub_000774B0); /* call 0x000774B0 */

loc_002D69FA: ;
    ecx = 0x3C2470;
    g_seh_ebp = ebp; sub_001557F0(); return; /* tail jmp 0x001557F0 */

}

/**
 * sub_002D6A10
 * Original: 0x002D6A10 - 0x002D6A1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6A10: ;
    ecx = 0x3C2F40;
    g_seh_ebp = ebp; sub_00181E10(); return; /* tail jmp 0x00181E10 */

}

/**
 * sub_002D6A20
 * Original: 0x002D6A20 - 0x002D6A3E (30 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6A20: ;
    MEM32(0x3C35B0) = 0x307AF8;
    MEM32(0x3C35B8) = 0x307AEC;
    ecx = 0x3C35B0;
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_002D6A40
 * Original: 0x002D6A40 - 0x002D6A4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6A40: ;
    ecx = 0x3C36F0;
    g_seh_ebp = ebp; sub_00156800(); return; /* tail jmp 0x00156800 */

}

/**
 * sub_002D6A50
 * Original: 0x002D6A50 - 0x002D6A5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6A50: ;
    ecx = 0x3C3740;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6A60
 * Original: 0x002D6A60 - 0x002D6A6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6A60: ;
    ecx = 0x3C3794;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6A70
 * Original: 0x002D6A70 - 0x002D6AC4 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6A70: ;
    eax = MEM32(0x3C37C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6AB3; /* je: equal / zero */

loc_002D6A79: ;
    eax = MEM32(0x3C37C0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3C37C0;
    PUSH32(esp, 0x002D6A8Cu); RECOMP_ABI_CALL(0x0008AAD0u, sub_0008AAD0); /* call 0x0008AAD0 */

loc_002D6A8C: ;
    eax = MEM32(0x3C37C0);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3C37C0);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3C37C0);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3C37C4) = 0;

loc_002D6AB3: ;
    eax = MEM32(0x3C37C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6AC3; /* je: equal / zero */

loc_002D6ABC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6AC2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6AC2: ;
    POP32(esp, ecx);

loc_002D6AC3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6AD0
 * Original: 0x002D6AD0 - 0x002D6ADA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6AD0: ;
    ecx = 0x3C383C;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6AE0
 * Original: 0x002D6AE0 - 0x002D6AEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6AE0: ;
    ecx = 0x3C3858;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6AF0
 * Original: 0x002D6AF0 - 0x002D6AFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6AF0: ;
    ecx = 0x3C388C;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6B00
 * Original: 0x002D6B00 - 0x002D6B0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6B00: ;
    ecx = 0x3C38FC;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6B10
 * Original: 0x002D6B10 - 0x002D6B1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6B10: ;
    ecx = 0x3C392C;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6B20
 * Original: 0x002D6B20 - 0x002D6B2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6B20: ;
    ecx = 0x3C3A2C;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6B30
 * Original: 0x002D6B30 - 0x002D6B3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6B30: ;
    ecx = 0x3C3AC4;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6B40
 * Original: 0x002D6B40 - 0x002D6B4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6B40: ;
    ecx = 0x3C3CA0;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6B50
 * Original: 0x002D6B50 - 0x002D6B5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6B50: ;
    ecx = 0x3C3CAC;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6B60
 * Original: 0x002D6B60 - 0x002D6B6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6B60: ;
    ecx = 0x3C3CB8;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6B70
 * Original: 0x002D6B70 - 0x002D6B7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6B70: ;
    ecx = 0x3C3D08;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6B80
 * Original: 0x002D6B80 - 0x002D6B8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6B80: ;
    ecx = 0x3C3D70;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D6B90
 * Original: 0x002D6B90 - 0x002D6BE4 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6B90: ;
    eax = MEM32(0x3C3E84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6BD3; /* je: equal / zero */

loc_002D6B99: ;
    eax = MEM32(0x3C3E80);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3C3E80;
    PUSH32(esp, 0x002D6BACu); RECOMP_ABI_CALL(0x000A5290u, sub_000A5290); /* call 0x000A5290 */

loc_002D6BAC: ;
    eax = MEM32(0x3C3E80);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3C3E80);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3C3E80);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3C3E84) = 0;

loc_002D6BD3: ;
    eax = MEM32(0x3C3E80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6BE3; /* je: equal / zero */

loc_002D6BDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6BE2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6BE2: ;
    POP32(esp, ecx);

loc_002D6BE3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6BF0
 * Original: 0x002D6BF0 - 0x002D6C04 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6BF0: ;
    ecx = 0x3734F8;
    PUSH32(esp, 0x002D6BFAu); RECOMP_ABI_CALL(0x000A69E0u, sub_000A69E0); /* call 0x000A69E0 */

loc_002D6BFA: ;
    ecx = 0x373508;
    g_seh_ebp = ebp; sub_00156700(); return; /* tail jmp 0x00156700 */

}

/**
 * sub_002D6C10
 * Original: 0x002D6C10 - 0x002D6C11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6C10(void)
{

loc_002D6C10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6C20
 * Original: 0x002D6C20 - 0x002D6C2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6C20: ;
    ecx = 0x3C6088;
    g_seh_ebp = ebp; sub_001D0960(); return; /* tail jmp 0x001D0960 */

}

/**
 * sub_002D6C30
 * Original: 0x002D6C30 - 0x002D6C44 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6C30: ;
    ecx = 0x3735A4;
    PUSH32(esp, 0x002D6C3Au); RECOMP_ABI_CALL(0x000B9200u, sub_000B9200); /* call 0x000B9200 */

loc_002D6C3A: ;
    ecx = 0x3735B4;
    g_seh_ebp = ebp; sub_00156700(); return; /* tail jmp 0x00156700 */

}

/**
 * sub_002D6C50
 * Original: 0x002D6C50 - 0x002D6C5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6C50: ;
    ecx = 0x3C6184;
    g_seh_ebp = ebp; sub_00156800(); return; /* tail jmp 0x00156800 */

}

/**
 * sub_002D6C60
 * Original: 0x002D6C60 - 0x002D6C6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6C60: ;
    ecx = 0x3C61A0;
    g_seh_ebp = ebp; sub_00156800(); return; /* tail jmp 0x00156800 */

}

/**
 * sub_002D6C70
 * Original: 0x002D6C70 - 0x002D6C7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6C70: ;
    ecx = 0x3C6230;
    g_seh_ebp = ebp; sub_001CE560(); return; /* tail jmp 0x001CE560 */

}

/**
 * sub_002D6C80
 * Original: 0x002D6C80 - 0x002D6CA0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6C80: ;
    ecx = MEM32(0x3C62B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002D6C9E; /* je: equal / zero */

loc_002D6C8D: ;
    PUSH32(esp, 0x002D6C92u); RECOMP_ABI_CALL(0x001D2B50u, sub_001D2B50); /* call 0x001D2B50 */

loc_002D6C92: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x34);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x002D6C9Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002D6C95u); } /* indirect call */
    }

loc_002D6C9B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002D6C9E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002D6CA0
 * Original: 0x002D6CA0 - 0x002D6CF9 (89 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6CA0: ;
    ecx = MEM32(0x3C6424);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6CD2; /* je: equal / zero */

loc_002D6CAA: ;
    SET_LO8(eax, MEM8(0x3C6438));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6CC8; /* je: equal / zero */

loc_002D6CB3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002D6CBBu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_002D6CBB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x002D6CC4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002D6CBEu); } /* indirect call */
    }

loc_002D6CC4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_002D6CC8: ;
    MEM32(0x3C6424) = 0;

loc_002D6CD2: ;
    eax = MEM32(0x3C6420);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6CF8; /* je: equal / zero */

loc_002D6CDB: ;
    SET_LO8(ecx, MEM8(0x3C6439));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6CEE; /* je: equal / zero */

loc_002D6CE5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6CEBu); RECOMP_ABI_CALL(0x00152060u, sub_00152060); /* call 0x00152060 */

loc_002D6CEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002D6CEE: ;
    MEM32(0x3C6420) = 0;

loc_002D6CF8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6D00
 * Original: 0x002D6D00 - 0x002D6D0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6D00: ;
    ecx = 0x3C64F8;
    g_seh_ebp = ebp; sub_001CE560(); return; /* tail jmp 0x001CE560 */

}

/**
 * sub_002D6D10
 * Original: 0x002D6D10 - 0x002D6D1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6D10: ;
    ecx = 0x3C6570;
    g_seh_ebp = ebp; sub_001CE560(); return; /* tail jmp 0x001CE560 */

}

/**
 * sub_002D6D20
 * Original: 0x002D6D20 - 0x002D6D39 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6D20: ;
    eax = 0x2FF0D4;
    MEM32(0x3C9690) = eax;
    MEM32(0x3C9500) = eax;
    ecx = 0x3C6600;
    g_seh_ebp = ebp; sub_000C51F0(); return; /* tail jmp 0x000C51F0 */

}

/**
 * sub_002D6D40
 * Original: 0x002D6D40 - 0x002D6D4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6D40(void)
{

loc_002D6D40: ;
    MEM32(0x3DAF78) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6D50
 * Original: 0x002D6D50 - 0x002D6D5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6D50(void)
{

loc_002D6D50: ;
    MEM32(0x3DAFA4) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6D60
 * Original: 0x002D6D60 - 0x002D6DB4 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6D60: ;
    eax = MEM32(0x3DAFF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6DA3; /* je: equal / zero */

loc_002D6D69: ;
    eax = MEM32(0x3DAFF4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3DAFF4;
    PUSH32(esp, 0x002D6D7Cu); RECOMP_ABI_CALL(0x000F0530u, sub_000F0530); /* call 0x000F0530 */

loc_002D6D7C: ;
    eax = MEM32(0x3DAFF4);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3DAFF4);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3DAFF4);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3DAFF8) = 0;

loc_002D6DA3: ;
    eax = MEM32(0x3DAFF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6DB3; /* je: equal / zero */

loc_002D6DAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6DB2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6DB2: ;
    POP32(esp, ecx);

loc_002D6DB3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6DC0
 * Original: 0x002D6DC0 - 0x002D6DF5 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x3DB504;
    edi = 0x50;
    /* nop */

loc_002D6DD0: ;
    ecx = MEM32(esi + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + -4;
    MEM32(eax) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_002D6DE9; /* je: equal / zero */

loc_002D6DE3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6DE9u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_002D6DE9: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0;
    if ((_fa != 0)) goto loc_002D6DD0; /* jne: not equal / not zero */

loc_002D6DF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002D6E00
 * Original: 0x002D6E00 - 0x002D6E0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6E00(void)
{

loc_002D6E00: ;
    MEM32(0x3DB624) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6E10
 * Original: 0x002D6E10 - 0x002D6E1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6E10(void)
{

loc_002D6E10: ;
    MEM32(0x3DB65C) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6E20
 * Original: 0x002D6E20 - 0x002D6E2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6E20(void)
{

loc_002D6E20: ;
    MEM32(0x3DB688) = 0x30466C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6E30
 * Original: 0x002D6E30 - 0x002D6E3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6E30(void)
{

loc_002D6E30: ;
    MEM32(0x375E70) = 0x316ED8;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6E40
 * Original: 0x002D6E40 - 0x002D6E94 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6E40: ;
    eax = MEM32(0x3DB8DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6E83; /* je: equal / zero */

loc_002D6E49: ;
    eax = MEM32(0x3DB8D8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3DB8D8;
    PUSH32(esp, 0x002D6E5Cu); RECOMP_ABI_CALL(0x000FC330u, sub_000FC330); /* call 0x000FC330 */

loc_002D6E5C: ;
    eax = MEM32(0x3DB8D8);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3DB8D8);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3DB8D8);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3DB8DC) = 0;

loc_002D6E83: ;
    eax = MEM32(0x3DB8D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6E93; /* je: equal / zero */

loc_002D6E8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6E92u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D6E92: ;
    POP32(esp, ecx);

loc_002D6E93: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6EA0
 * Original: 0x002D6EA0 - 0x002D6EAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6EA0: ;
    ecx = 0x3DB900;
    g_seh_ebp = ebp; sub_000EF420(); return; /* tail jmp 0x000EF420 */

}

/**
 * sub_002D6EB0
 * Original: 0x002D6EB0 - 0x002D6EBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6EB0: ;
    ecx = 0x3DB930;
    g_seh_ebp = ebp; sub_000EF420(); return; /* tail jmp 0x000EF420 */

}

/**
 * sub_002D6EC0
 * Original: 0x002D6EC0 - 0x002D6ECA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6EC0: ;
    ecx = 0x3DB960;
    g_seh_ebp = ebp; sub_000EF420(); return; /* tail jmp 0x000EF420 */

}

/**
 * sub_002D6ED0
 * Original: 0x002D6ED0 - 0x002D6EDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6ED0: ;
    ecx = 0x3DE7E0;
    g_seh_ebp = ebp; sub_000EF420(); return; /* tail jmp 0x000EF420 */

}

/**
 * sub_002D6EE0
 * Original: 0x002D6EE0 - 0x002D6EEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6EE0: ;
    ecx = 0x3DE810;
    g_seh_ebp = ebp; sub_000EF420(); return; /* tail jmp 0x000EF420 */

}

/**
 * sub_002D6EF0
 * Original: 0x002D6EF0 - 0x002D6F0A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6EF0: ;
    SET_LO8(eax, MEM8(0x3DC470));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6F09; /* je: equal / zero */

loc_002D6EF9: ;
    eax = MEM32(0x3DC460);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6F09; /* je: equal / zero */

loc_002D6F02: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6F08u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_002D6F08: ;
    POP32(esp, ecx);

loc_002D6F09: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6F10
 * Original: 0x002D6F10 - 0x002D6F2A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6F10: ;
    SET_LO8(eax, MEM8(0x3DD8D0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6F29; /* je: equal / zero */

loc_002D6F19: ;
    eax = MEM32(0x3DD8C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6F29; /* je: equal / zero */

loc_002D6F22: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6F28u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_002D6F28: ;
    POP32(esp, ecx);

loc_002D6F29: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6F30
 * Original: 0x002D6F30 - 0x002D6F4A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6F30: ;
    SET_LO8(eax, MEM8(0x3DD930));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6F49; /* je: equal / zero */

loc_002D6F39: ;
    eax = MEM32(0x3DD920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6F49; /* je: equal / zero */

loc_002D6F42: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6F48u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_002D6F48: ;
    POP32(esp, ecx);

loc_002D6F49: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6F50
 * Original: 0x002D6F50 - 0x002D6F6A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6F50: ;
    SET_LO8(eax, MEM8(0x3DE7D0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6F69; /* je: equal / zero */

loc_002D6F59: ;
    eax = MEM32(0x3DE7C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6F69; /* je: equal / zero */

loc_002D6F62: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D6F68u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_002D6F68: ;
    POP32(esp, ecx);

loc_002D6F69: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6F70
 * Original: 0x002D6F70 - 0x002D6F7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6F70(void)
{

loc_002D6F70: ;
    MEM32(0x375E88) = 0x318B18;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6F80
 * Original: 0x002D6F80 - 0x002D6F8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6F80(void)
{

loc_002D6F80: ;
    MEM32(0x375E8C) = 0x318B18;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6F90
 * Original: 0x002D6F90 - 0x002D6F9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6F90(void)
{

loc_002D6F90: ;
    MEM32(0x375E90) = 0x318B18;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6FA0
 * Original: 0x002D6FA0 - 0x002D6FA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6FA0(void)
{

loc_002D6FA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6FB0
 * Original: 0x002D6FB0 - 0x002D6FB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6FB0(void)
{

loc_002D6FB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D6FC0
 * Original: 0x002D6FC0 - 0x002D6FD4 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D6FC0: ;
    ecx = 0x3761F0;
    PUSH32(esp, 0x002D6FCAu); RECOMP_ABI_CALL(0x000EE550u, sub_000EE550); /* call 0x000EE550 */

loc_002D6FCA: ;
    ecx = 0x3761C8;
    g_seh_ebp = ebp; sub_000EE550(); return; /* tail jmp 0x000EE550 */

}

/**
 * sub_002D6FE0
 * Original: 0x002D6FE0 - 0x002D6FFF (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D6FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D6FE0: ;
    eax = MEM32(0x3DEED8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D6FFE; /* je: equal / zero */

loc_002D6FE9: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002D6FFE; /* jne: not equal / not zero */

loc_002D6FF8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002D6FFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D6FFCu); } /* indirect call */
    }

loc_002D6FFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7000
 * Original: 0x002D7000 - 0x002D700B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7000(void)
{

loc_002D7000: ;
    MEM32(0x376C58) = 0x31ABF8;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7010
 * Original: 0x002D7010 - 0x002D702F (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D7010: ;
    eax = 0x376C58;
    ecx = 8;
    /* nop */

loc_002D7020: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xA4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x31ABF8;
    if ((_fa != 0)) goto loc_002D7020; /* jne: not equal / not zero */

loc_002D702E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7030
 * Original: 0x002D7030 - 0x002D703A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D7030: ;
    ecx = 0x3E8B60;
    g_seh_ebp = ebp; sub_000EF420(); return; /* tail jmp 0x000EF420 */

}

/**
 * sub_002D7040
 * Original: 0x002D7040 - 0x002D704A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D7040: ;
    ecx = 0x3E8B90;
    g_seh_ebp = ebp; sub_000EF420(); return; /* tail jmp 0x000EF420 */

}

/**
 * sub_002D7050
 * Original: 0x002D7050 - 0x002D705A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D7050: ;
    ecx = 0x3E8BC0;
    g_seh_ebp = ebp; sub_000EF420(); return; /* tail jmp 0x000EF420 */

}

/**
 * sub_002D7060
 * Original: 0x002D7060 - 0x002D706A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D7060: ;
    ecx = 0x3E8BF0;
    g_seh_ebp = ebp; sub_000EF420(); return; /* tail jmp 0x000EF420 */

}

/**
 * sub_002D7070
 * Original: 0x002D7070 - 0x002D707A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D7070: ;
    ecx = 0x3E8C40;
    g_seh_ebp = ebp; sub_00132B00(); return; /* tail jmp 0x00132B00 */

}

/**
 * sub_002D7080
 * Original: 0x002D7080 - 0x002D709F (31 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7080(void)
{

loc_002D7080: ;
    ecx = 0x376D40;
    MEM32(0x376D30) = 0x31B6FC;
    PUSH32(esp, 0x002D7094u); RECOMP_ABI_CALL(0x000EF420u, sub_000EF420); /* call 0x000EF420 */

loc_002D7094: ;
    MEM32(0x376D30) = 0x316ED8;
    esp += 4; return; /* ret */

}

/**
 * sub_002D70A0
 * Original: 0x002D70A0 - 0x002D70F4 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D70A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D70A0: ;
    eax = MEM32(0x3F2DFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D70E3; /* je: equal / zero */

loc_002D70A9: ;
    eax = MEM32(0x3F2DF8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3F2DF8;
    PUSH32(esp, 0x002D70BCu); RECOMP_ABI_CALL(0x0013D580u, sub_0013D580); /* call 0x0013D580 */

loc_002D70BC: ;
    eax = MEM32(0x3F2DF8);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3F2DF8);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3F2DF8);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3F2DFC) = 0;

loc_002D70E3: ;
    eax = MEM32(0x3F2DF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D70F3; /* je: equal / zero */

loc_002D70EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D70F2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D70F2: ;
    POP32(esp, ecx);

loc_002D70F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7100
 * Original: 0x002D7100 - 0x002D710B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7100(void)
{

loc_002D7100: ;
    MEM32(0x376DDC) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7110
 * Original: 0x002D7110 - 0x002D711B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7110(void)
{

loc_002D7110: ;
    MEM32(0x376DE4) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7120
 * Original: 0x002D7120 - 0x002D712B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7120(void)
{

loc_002D7120: ;
    MEM32(0x376DEC) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7130
 * Original: 0x002D7130 - 0x002D713B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7130(void)
{

loc_002D7130: ;
    MEM32(0x376DF4) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7140
 * Original: 0x002D7140 - 0x002D714B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7140(void)
{

loc_002D7140: ;
    MEM32(0x376DFC) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7150
 * Original: 0x002D7150 - 0x002D715B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7150(void)
{

loc_002D7150: ;
    MEM32(0x376E04) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7160
 * Original: 0x002D7160 - 0x002D716B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7160(void)
{

loc_002D7160: ;
    MEM32(0x376E0C) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7170
 * Original: 0x002D7170 - 0x002D717B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7170(void)
{

loc_002D7170: ;
    MEM32(0x376E14) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7180
 * Original: 0x002D7180 - 0x002D718B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7180(void)
{

loc_002D7180: ;
    MEM32(0x376E1C) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7190
 * Original: 0x002D7190 - 0x002D719B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7190(void)
{

loc_002D7190: ;
    MEM32(0x376E24) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D71A0
 * Original: 0x002D71A0 - 0x002D71AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D71A0(void)
{

loc_002D71A0: ;
    MEM32(0x376E2C) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D71B0
 * Original: 0x002D71B0 - 0x002D71BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D71B0(void)
{

loc_002D71B0: ;
    MEM32(0x376E34) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D71C0
 * Original: 0x002D71C0 - 0x002D71CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D71C0(void)
{

loc_002D71C0: ;
    MEM32(0x376E3C) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D71D0
 * Original: 0x002D71D0 - 0x002D71DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D71D0(void)
{

loc_002D71D0: ;
    MEM32(0x376E44) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D71E0
 * Original: 0x002D71E0 - 0x002D71EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D71E0(void)
{

loc_002D71E0: ;
    MEM32(0x376E4C) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D71F0
 * Original: 0x002D71F0 - 0x002D71FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D71F0(void)
{

loc_002D71F0: ;
    MEM32(0x376E54) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7200
 * Original: 0x002D7200 - 0x002D720B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7200(void)
{

loc_002D7200: ;
    MEM32(0x376E5C) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7210
 * Original: 0x002D7210 - 0x002D721B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7210(void)
{

loc_002D7210: ;
    MEM32(0x376E64) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7220
 * Original: 0x002D7220 - 0x002D722B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7220(void)
{

loc_002D7220: ;
    MEM32(0x376E6C) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7230
 * Original: 0x002D7230 - 0x002D723B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7230(void)
{

loc_002D7230: ;
    MEM32(0x376E74) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7240
 * Original: 0x002D7240 - 0x002D724B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7240(void)
{

loc_002D7240: ;
    MEM32(0x376E7C) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7250
 * Original: 0x002D7250 - 0x002D725B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7250(void)
{

loc_002D7250: ;
    MEM32(0x376E84) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7260
 * Original: 0x002D7260 - 0x002D726B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7260(void)
{

loc_002D7260: ;
    MEM32(0x376E8C) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7270
 * Original: 0x002D7270 - 0x002D727B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7270(void)
{

loc_002D7270: ;
    MEM32(0x376E94) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7280
 * Original: 0x002D7280 - 0x002D728B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7280(void)
{

loc_002D7280: ;
    MEM32(0x376E9C) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7290
 * Original: 0x002D7290 - 0x002D729B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7290(void)
{

loc_002D7290: ;
    MEM32(0x376EA4) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D72A0
 * Original: 0x002D72A0 - 0x002D72AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D72A0(void)
{

loc_002D72A0: ;
    MEM32(0x376EAC) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D72B0
 * Original: 0x002D72B0 - 0x002D72BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D72B0(void)
{

loc_002D72B0: ;
    MEM32(0x376EB4) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D72C0
 * Original: 0x002D72C0 - 0x002D72CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D72C0(void)
{

loc_002D72C0: ;
    MEM32(0x376EBC) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D72D0
 * Original: 0x002D72D0 - 0x002D72DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D72D0(void)
{

loc_002D72D0: ;
    MEM32(0x376EC4) = 0x31BF2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002D72E0
 * Original: 0x002D72E0 - 0x002D72F1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D72E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D72E0: ;
    eax = MEM32(0x3F2E20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D72F0; /* je: equal / zero */

loc_002D72E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D72EFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D72EF: ;
    POP32(esp, ecx);

loc_002D72F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7300
 * Original: 0x002D7300 - 0x002D7311 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D7300: ;
    eax = MEM32(0x3F2E30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D7310; /* je: equal / zero */

loc_002D7309: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D730Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D730F: ;
    POP32(esp, ecx);

loc_002D7310: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7320
 * Original: 0x002D7320 - 0x002D7331 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D7320: ;
    eax = MEM32(0x3F2E40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D7330; /* je: equal / zero */

loc_002D7329: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D732Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D732F: ;
    POP32(esp, ecx);

loc_002D7330: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7340
 * Original: 0x002D7340 - 0x002D7351 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D7340: ;
    eax = MEM32(0x3F2E50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D7350; /* je: equal / zero */

loc_002D7349: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D734Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D734F: ;
    POP32(esp, ecx);

loc_002D7350: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7360
 * Original: 0x002D7360 - 0x002D7371 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D7360: ;
    eax = MEM32(0x3F2E60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D7370; /* je: equal / zero */

loc_002D7369: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D736Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_002D736F: ;
    POP32(esp, ecx);

loc_002D7370: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7380
 * Original: 0x002D7380 - 0x002D738A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D7380: ;
    ecx = 0x3F2E70;
    g_seh_ebp = ebp; sub_0014B3F0(); return; /* tail jmp 0x0014B3F0 */

}

/**
 * sub_002D7390
 * Original: 0x002D7390 - 0x002D739A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D7390: ;
    ecx = 0x3F32B8;
    g_seh_ebp = ebp; sub_001AE740(); return; /* tail jmp 0x001AE740 */

}

/**
 * sub_002D73A0
 * Original: 0x002D73A0 - 0x002D73A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D73A0(void)
{

loc_002D73A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D73B0
 * Original: 0x002D73B0 - 0x002D73CD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D73B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D73B0: ;
    eax = 0x3F49D0;
    ecx = 3;
    /* nop */

loc_002D73C0: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x2FF9D4;
    if ((_fa != 0)) goto loc_002D73C0; /* jne: not equal / not zero */

loc_002D73CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D73D0
 * Original: 0x002D73D0 - 0x002D7436 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D73D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D73D0: ;
    eax = MEM32(0x377420);
    edx = 0x37741C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D73FE; /* je: equal / zero */

loc_002D73DE: ;
    PUSH32(esp, esi);
    /* nop */

loc_002D73E0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax) = 0;
    esi = MEM32(0x377418);
    MEM32(eax + 4) = esi;
    MEM32(0x377418) = eax;
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002D73E0; /* jne: not equal / not zero */

loc_002D73FD: ;
    POP32(esp, esi);

loc_002D73FE: ;
    SET_LO8(eax, MEM8(0x377428));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x377420) = edx;
    MEM32(0x37741C) = edx;
    MEM32(0x37740C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002D742B; /* je: equal / zero */

loc_002D741D: ;
    eax = MEM32(0x377414);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D7428u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_002D7428: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002D742B: ;
    MEM32(0x377414) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002D7440
 * Original: 0x002D7440 - 0x002D74A6 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D7440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D7440: ;
    eax = MEM32(0x377440);
    edx = 0x37743C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D746E; /* je: equal / zero */

loc_002D744E: ;
    PUSH32(esp, esi);
    /* nop */

loc_002D7450: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax) = 0;
    esi = MEM32(0x377438);
    MEM32(eax + 4) = esi;
    MEM32(0x377438) = eax;
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002D7450; /* jne: not equal / not zero */

loc_002D746D: ;
    POP32(esp, esi);

loc_002D746E: ;
    SET_LO8(eax, MEM8(0x377448));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x377440) = edx;
    MEM32(0x37743C) = edx;
    MEM32(0x37742C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002D749B; /* je: equal / zero */

loc_002D748D: ;
    eax = MEM32(0x377434);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D7498u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_002D7498: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002D749B: ;
    MEM32(0x377434) = 0;
    esp += 4; return; /* ret */

}
