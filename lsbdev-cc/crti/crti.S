	.file	"initfini.c"
#APP
	
#include "defs.h"
	
/*@HEADER_ENDS*/
/*@_init_PROLOG_BEGINS*/
#NO_APP
	.align 2
	.type	call_gmon_start, @function
call_gmon_start:
	stwu 1,-16(1)
	mflr 0
	stw 30,8(1)
	stw 0,20(1)
	bl _GLOBAL_OFFSET_TABLE_@local-4
	mflr 30
	lwz 0,__gmon_start__@got(30)
	cmpwi 7,0,0
	beq- 7,.L8
	bl __gmon_start__@plt
.L8:
	lwz 0,20(1)
	mtlr 0
	lwz 30,8(1)
	addi 1,1,16
	blr
#APP
	.section .init
#NO_APP
	.align 2
	.globl _init
	.type	_init, @function
_init:
	stwu 1,-16(1)
	mflr 0
	stw 0,20(1)
	bl call_gmon_start@local
#APP
	ALIGN
	END_INIT
	
/*@_init_PROLOG_ENDS*/
/*@_fini_PROLOG_BEGINS*/
	.section .fini
#NO_APP
	.align 2
	.globl _fini
	.type	_fini, @function
_fini:
	stwu 1,-16(1)
	mflr 0
	stw 0,20(1)
#APP
	ALIGN
	END_FINI
	
/*@_fini_PROLOG_ENDS*/
/*@TRAILER_BEGINS*/
	.weak	__gmon_start__
	.ident	"GCC: (GNU) 4.1.1 20060717 (prerelease)"
	.section	.note.GNU-stack,"",@progbits
