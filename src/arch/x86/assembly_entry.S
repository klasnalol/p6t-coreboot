/* SPDX-License-Identifier: GPL-2.0-only */

/*
 * This path is for stages that are post bootblock. The gdt is reloaded
 * to accommodate platforms that are executing out of CAR. In order to
 * continue with C code execution one needs to set stack pointer and
 * clear .bss variables that are stage specific.
 */

#if CONFIG(RESET_VECTOR_IN_RAM)
	#define _STACK_TOP _eearlyram_stack
#else
	#define _STACK_TOP _ecar_stack
#endif

#if ENV_X86_64
.code64
#else
.code32
#endif

#if CONFIG(BOARD_ASUS_P6T_SE) && !ENV_X86_64
/*
 * Temporary P6T SE raw speaker checkpoint.
 *
 * Does not call C and does not depend on romstage .data/.bss.
 * Argument is the PIT channel-2 divisor.
 */
.macro P6TSE_RAW_TONE divisor
	pushfl
	pushal

	/* Save speaker control register. */
	inb	$0x61, %al
	movb	%al, %bl

	/* PIT channel 2, mode 3 square wave. */
	movb	$0xb6, %al
	outb	%al, $0x43

	movb	$(\divisor & 0xff), %al
	outb	%al, $0x42

	movb	$((\divisor >> 8) & 0xff), %al
	outb	%al, $0x42

	/* Enable channel 2 + speaker gate. */
	movb	%bl, %al
	orb	$0x03, %al
	outb	%al, $0x61

	/* Audible tone. */
	movl	$30000000, %ecx
1:
	pause
	loop	1b

	/* Restore original speaker state. */
	movb	%bl, %al
	outb	%al, $0x61

	/* Separator silence. */
	movl	$30000000, %ecx
2:
	pause
	loop	2b

	popal
	popfl
.endm
#else
.macro P6TSE_RAW_TONE divisor
.endm
#endif

.section ".text._start", "ax", @progbits
.global _start
_start:
	P6TSE_RAW_TONE 2386	/* A: 500 Hz - entered _start */

	/* Migrate GDT to this text segment */
#if ENV_X86_64
	call	gdt_init64
#else
	call	gdt_init
#endif

	P6TSE_RAW_TONE 1704	/* B: 700 Hz - gdt_init returned */

	/* reset stack pointer to CAR/EARLYRAM stack */
	mov	$_STACK_TOP, %esp
	P6TSE_RAW_TONE 1325	/* C: 900 Hz - new stack works */

#if ENV_SEPARATE_DATA_AND_BSS
	/* clear .bss section as it is not shared */
	cld
	xor	%eax, %eax
	movl	$(_ebss), %ecx
	movl	$(_bss), %edi
	sub	%edi, %ecx
	shrl	$2, %ecx
	rep	stosl
	P6TSE_RAW_TONE 1084	/* D: 1100 Hz - BSS clear done */

	/* Copy .data section content to Cache-As-Ram */
	movl	$(_edata), %ecx
	movl	$(_data), %edi
	sub	%edi, %ecx
	shrl	$2, %ecx
	movl	$(_data_load),%esi
	rep	movsl
	P6TSE_RAW_TONE 917	/* E: 1300 Hz - .data copy done */
#endif

#if ((ENV_SEPARATE_VERSTAGE && CONFIG(VERSTAGE_DEBUG_SPINLOOP)) \
	|| (ENV_SEPARATE_ROMSTAGE && CONFIG(ROMSTAGE_DEBUG_SPINLOOP)))

	/* Wait for a JTAG debugger to break in and set EBX non-zero */
	xor	%ebx, %ebx

debug_spinloop:
	cmp	$0, %ebx
	jz	debug_spinloop
#endif

	andl	$0xfffffff0, %esp
#if CONFIG(IDT_IN_EVERY_STAGE)
	call	exception_init
#endif

#if CONFIG(ASAN_IN_ROMSTAGE)
	call	asan_init
#endif
	P6TSE_RAW_TONE 795	/* F: 1500 Hz - before car_stage_entry */
	call	car_stage_entry

	/* Expect to never return. */
1:
	jmp	1b
