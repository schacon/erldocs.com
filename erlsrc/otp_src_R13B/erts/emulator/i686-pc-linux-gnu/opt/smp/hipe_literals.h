/* File: hipe_literals.h, generated by hipe_mkliterals */
#ifndef __HIPE_LITERALS_H__
#define __HIPE_LITERALS_H__

#define P_HP 0
#define P_HP_LIMIT 4
#define P_OFF_HEAP_MSO 292
#define P_MBUF 308
#define P_ID 136
#define P_FLAGS 164
#define P_FVALUE 168
#define P_FREASON 172
#define P_FTRACE 176
#define P_FCALLS 116
#define P_BEAM_IP 108
#define P_ARITY 68
#define P_ARG0 80
#define P_ARG1 84
#define P_ARG2 88
#define P_ARG3 92
#define P_ARG4 96
#define P_ARG5 100
#define P_NSP 28
#define P_NCALLEE 40
#define P_CLOSURE 44
#define P_NSP_LIMIT 32
#define P_CSP 60
#define P_NARITY 64
#define F_TIMO 4
#define FREASON_TRAP 256
#define THE_NON_VALUE 0
#define EFE_NATIVE_ADDRESS 40
#define EFE_REFC 52
#define EFT_THING 0
#define BSF_ALIGNED 1
#define PB_ACTIVE_WRITER 2
#define PB_IS_WRITABLE 1
#define MB_ORIG 0
#define MB_BASE 4
#define MB_OFFSET 8
#define MB_SIZE 12
#define PROC_BIN_THING_WORD 0
#define PROC_BIN_BINSIZE 4
#define PROC_BIN_NEXT 8
#define PROC_BIN_VAL 12
#define PROC_BIN_BYTES 16
#define PROC_BIN_FLAGS 20
#define PROC_BIN_WORDSIZE 6
#define SUB_BIN_THING_WORD 0
#define SUB_BIN_BINSIZE 4
#define SUB_BIN_BITSIZE 12
#define SUB_BIN_OFFS 8
#define SUB_BIN_BITOFFS 13
#define SUB_BIN_WRITABLE 14
#define SUB_BIN_ORIG 16
#define SUB_BIN_WORDSIZE 5
#define HEAP_BIN_THING_WORD 0
#define HEAP_BIN_SIZE 4
#define HEAP_BIN_DATA 8
#define BINARY_ORIG_SIZE 12
#define BINARY_ORIG_BYTES 16
#define MAX_HEAP_BIN_SIZE 64
#define MS_THING_WORD 0
#define MS_MATCHBUFFER 4
#define MS_SAVEOFFSET 20
#define MS_MIN_SIZE 6
#define MB_ORIG_SIZE 4
#define MB_BASE_SIZE 4
#define MB_OFFSET_SIZE 4
#define MB_SIZE_SIZE 4
#define PROC_BIN_THING_WORD_SIZE 4
#define PROC_BIN_BINSIZE_SIZE 4
#define PROC_BIN_NEXT_SIZE 4
#define PROC_BIN_VAL_SIZE 4
#define PROC_BIN_BYTES_SIZE 4
#define PROC_BIN_FLAGS_SIZE 4
#define SUB_BIN_THING_WORD_SIZE 4
#define SUB_BIN_BINSIZE_SIZE 4
#define SUB_BIN_BITSIZE_SIZE 1
#define SUB_BIN_OFFS_SIZE 4
#define SUB_BIN_BITOFFS_SIZE 1
#define SUB_BIN_WRITABLE_SIZE 1
#define SUB_BIN_ORIG_SIZE 4
#define HEAP_BIN_THING_WORD_SIZE 4
#define HEAP_BIN_SIZE_SIZE 4
#define HEAP_BIN_DATA_SIZE 4
#define BINARY_ORIG_SIZE_SIZE 4
#define BINARY_ORIG_BYTES_SIZE 1
#define MS_THING_WORD_SIZE 4
#define MS_SAVEOFFSET_SIZE 4
#define P_MSG_FIRST 208
#define P_MSG_SAVE 216
#define MSG_NEXT 0
#define ARM_LEAF_WORDS 16
#define ARM_NR_ARG_REGS 3
#define ARM_IS_BIG_ENDIAN 0
#define PPC_LEAF_WORDS 16
#define PPC_NR_ARG_REGS 4
#define AMD64_LEAF_WORDS 24
#define AMD64_NR_ARG_REGS 4
#define AMD64_HP_IN_REGISTER 1
#define AMD64_HEAP_POINTER 15
#define X86_LEAF_WORDS 24
#define X86_NR_ARG_REGS 3
#define X86_NR_RET_REGS 3
#define X86_HP_IN_ESI 1
#define SPARC_LEAF_WORDS 16
#define SPARC_NR_ARG_REGS 4
#define P_OFF_HEAP_FUNS 296
#define EFT_NEXT 4
#define EFT_CREATOR 24
#define EFT_FE 8
#define EFT_NATIVE_ADDRESS 12
#define EFT_ARITY 16
#define EFT_NUM_FREE 20
#define EFT_ENV 28
#define ERL_FUN_SIZE 7
#define P_SCHED_DATA 340
#define P_FP_EXCEPTION 24
#define ERTS_IS_SMP 1
#define MSG_MESSAGE 8
#define HIPE_LITERALS_CRC 75328212U
#define HIPE_SYSTEM_CRC 60162176U

#define RTS_PARAMS_CASES \
	case 1: value = 296; break; \
	case 4: value = 4; break; \
	case 5: value = 24; break; \
	case 6: value = 8; break; \
	case 7: value = 12; break; \
	case 8: value = 16; break; \
	case 9: value = 20; break; \
	case 10: value = 28; break; \
	case 11: value = 7; break; \
	case 12: value = 340; break; \
	case 14: value = 24; break; \
	case 15: value = 1; break; \
	case 19: value = 8; break;
#endif