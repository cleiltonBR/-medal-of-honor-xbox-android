#include "recomp_types.h"

/* Estado de memória e execução do Xbox. */
ptrdiff_t g_xbox_mem_offset = 0;
int g_force_return = 0;
uint32_t g_xbox_code_lo = 0;
uint32_t g_xbox_code_hi = 0;

/* Registradores x86: estado independente por thread. */
RECOMP_TLS uint32_t g_eax = 0;
RECOMP_TLS uint32_t g_ecx = 0;
RECOMP_TLS uint32_t g_edx = 0;
RECOMP_TLS uint32_t g_esp = 0;
RECOMP_TLS uint32_t g_ebx = 0;
RECOMP_TLS uint32_t g_esi = 0;
RECOMP_TLS uint32_t g_edi = 0;
RECOMP_TLS uint32_t g_ebp = 0;

RECOMP_TLS double g_fp_stack[8] = {0};
RECOMP_TLS int g_fp_top = 0;
RECOMP_TLS uint32_t g_fs_base = 0;
RECOMP_TLS uint32_t g_seh_ebp = 0;
RECOMP_TLS int g_df = 0;
RECOMP_TLS uint32_t g_eflags = 0;
RECOMP_TLS uint16_t g_fp_control_word = 0;
RECOMP_TLS int g_fp_cmp = 0;
RECOMP_TLS uint16_t g_fp_cc = 0;
RECOMP_TLS uint32_t g_mxcsr = 0;

RECOMP_TLS RecompXmm g_xmm0 = {0};
RECOMP_TLS RecompXmm g_xmm1 = {0};
RECOMP_TLS RecompXmm g_xmm2 = {0};
RECOMP_TLS RecompXmm g_xmm3 = {0};
RECOMP_TLS RecompXmm g_xmm4 = {0};
RECOMP_TLS RecompXmm g_xmm5 = {0};
RECOMP_TLS RecompXmm g_xmm6 = {0};
RECOMP_TLS RecompXmm g_xmm7 = {0};

/* Diagnóstico de chamadas indiretas. */
volatile uint32_t g_icall_trace[ICALL_TRACE_SIZE] = {0};
volatile uint32_t g_icall_trace_idx = 0;
volatile uint64_t g_icall_count = 0;
volatile uint64_t g_icall_guard_hits = 0;
volatile uint64_t g_icall_guard_misses = 0;
int32_t g_xbox_guest_cpu_preempt = 0;
