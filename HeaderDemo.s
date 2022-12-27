	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 0
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3                               ; -- Begin function main
lCPI0_0:
	.quad	0x40091eb851eb851f              ; double 3.1400000000000001
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64                     ; =64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0
	str	w8, [sp, #12]                   ; 4-byte Folded Spill
	stur	wzr, [x29, #-4]
	sub	x8, x29, #16                    ; =16
	mov	w9, #11
	stur	w9, [x29, #-16]
	mov	w9, #52429
	movk	w9, #16884, lsl #16
	stur	w9, [x29, #-20]
	ldur	s0, [x29, #-20]
	fcvt	d1, s0
	adrp	x9, lCPI0_0@PAGE
	ldr	d0, [x9, lCPI0_0@PAGEOFF]
	fmul	d0, d0, d1
	ldur	s1, [x29, #-20]
	fcvt	d1, s1
	fmul	d0, d0, d1
	fcvt	s0, d0
	str	s0, [sp, #24]
	str	x8, [sp, #16]
	ldr	s0, [sp, #24]
	fcvt	d0, s0
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	mov	x8, sp
	str	d0, [x8]
	bl	_printf
	ldr	x8, [sp, #16]
	ldr	w9, [x8]
                                        ; implicit-def: $x8
	mov	x8, x9
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	ldr	w0, [sp, #12]                   ; 4-byte Folded Reload
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64                     ; =64
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Area is : %f\n"

l_.str.1:                               ; @.str.1
	.asciz	"Value of no is %d\n"

.subsections_via_symbols
