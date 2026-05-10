/*
 * syscall8.h
 * Copyright (c) 2010 Hermes <www.elotrolado.net>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 * - Redistribution of source code must retain the above copyright notice, this list of
 *   conditions and the following disclaimer.
 * - Redistribution in binary form must reproduce the above copyright notice, this list
 *   of conditions and the following disclaimer in the documentation and/or other
 *   materials provided with the distribution.
 * - The names of the contributors may not be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
 * THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _SYS8_H_
#define _SYS8_H_

#include <stdint.h>
#include <stddef.h>
#include <ppu-lv2.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SYSCALL_MAMBA	8ULL

// Remapper
#define SYSCALL_36		36ULL

// Skip payload
#define SYSCALL_SK1E	38ULL

	extern int sys8_disable_all; // Disable all sys8 functions

	/*
	 * FUNCTIONS TO USE IN KERNEL AREA 0x8000000000000000 - 0x80000000007fffff
	 * Payload V3 is loaded at 0x80000000007ff000
	 */

	 // Lv1 registers struct
	typedef struct {
		uint64_t reg3;
		uint64_t reg4;
		uint64_t reg5;
		uint64_t reg6;
		uint64_t reg7;
		uint64_t reg8;
		uint64_t reg9;
		uint64_t reg10;
		uint64_t reg11;
	} lv1_reg;

	// Hook_open
	typedef struct
	{
		uint64_t compare_addr;	// Kernel address to compare string
		uint64_t replace_addr;	// Kernel address to replace string
		int compare_len;		// Len of compare string
		int replace_len;		// Len of replace string
	} path_open_entry;

	/*
	 * sys8_disable: Disable syscalls 6,7, 36 and stealth syscall 8
	 * key: 64 bit key to enable syscalls
	 */
	int sys8_disable(uint64_t key); // Not supported yet

	/*
	 * sys8_enable: Enable syscalls 6,7, 36 and 8 when
	 * key: 64 bit key to enable syscalls or 0 to test
	 * return: 0x80010003 (<0) or current version (0x100)
	 */
	int sys8_enable(uint64_t key); // Not supported yet

	/*
	 * sys8_pokeinstr: 64 bit poke for instructions (with DCBF and ICIBI instructions)
	 * addr: Destination address
	 * data: 64 bit data to set
	 * return: Error code
	 */
	int sys8_pokeinstr(uint64_t addr, uint64_t data);

	/*
	 * sys8_memcpy: 64 bit address memory copy
	 * dst: Destination address
	 * src: Source address
	 * size: Number of bytes to copy
	 * return: Destination address
	 */
	uint64_t sys8_memcpy(uint64_t dst, uint64_t src, uint64_t size);

	/*
	 * NOTE: This function uses DCBF and ICIBI instructions
	 * sys8_memcpyinstr: 64 bit address memory copy instructions
	 * dst: Destination address for instructions
	 * src: Source address for instructions
	 * size: Number of bytes to copy
	 * return: Destination address
	 */
	uint64_t sys8_memcpyinstr(uint64_t dst, uint64_t src, uint64_t size);

	/*
	 * sys8_memset: 64 bit address memory set
	 * dst: Destination address
	 * val: Value to set (only the 8 bit lower)
	 * size: Number of bytes to set
	 * return: Destination address
	 */
	uint64_t sys8_memset(uint64_t dst, uint64_t val, uint64_t size);

	/*
	 * sys8_call: Kernel 64 bit address to call
	 * param1: First 64 bit param (maybe IN data address)
	 * param2: Second 64 bit param (maybe OUT data address)
	 * return: Value returned by kernel call
	 */
	uint64_t sys8_call(uint64_t addr, uint64_t param1, uint64_t param2);

	/*
	 * sys8_alloc: Kernel function to allocate memory
	 * size: Bytes to allocate
	 * pool: Usually 0x27 from PSJailbreak
	 * return: 64 bit address allocated
	 */
	uint64_t sys8_alloc(uint64_t size, uint64_t pool);

	/*
	 * sys8_free: Kernel function to free memory
	 * addr: 64 bit address to free
	 * pool: Usually 0x27 from PSJailbreak
	 * return: Unknown 64 bit address
	 */
	uint64_t sys8_free(uint64_t addr, uint64_t pool);

	/*
	 * sys8_panic: Kernel panic function
	 */
	void sys8_panic(void); // Not supported yet

	/*
	 * sys8_perm_mode: Function to changes as work 0x80000000000505d0 calls (connected with access permissions)
	 * mode: 0 -> PS3 perms normally, 1 -> PSJailbreak by default, 2 -> Special for games as F1 2010 (option by default)
	 * return: 0 - OK
	 */
	int sys8_perm_mode(uint64_t mode);

	/*
	 * sys8_sys_configure: Function to change the XMB or releases devices redirected
	 * mode: 0 -> XMB retail, 1 -> XMB debug, 2 -> Free /apps_home and /dev_usb redirection and remove patch APP_VER in PARAM.SFO,
	 * 3 -> Remove patch APP_VER in PARAM.SFO, 4 -> Patch APP_VER in PARAM.SFO
	 * return: 0 - OK
	 */
#define CFG_XMB_RETAIL		0
#define CFG_XMB_DEBUG		1
#define CFG_UNMOUNT_DEVICES	2
#define CFG_UNPATCH_APPVER	3
#define CFG_PATCH_APPVER	4

	int sys8_sys_configure(uint64_t mode); // Not supported yet

	/*
	 * sys8_lv1_syscall: Call to lv1 syscall from lv2
	 * in: Input lv1_reg struct registers
	 * out: Output lv1_reg struct registers
	 * return: Lv1 syscall return
	 */
	int sys8_lv1_syscall(lv1_reg* in, lv1_reg* out);

	/*
	 * sys8_path_table: Function to add one table for path redirection in hook_open
	 * addr_table: Kernel 64 bit address from one path_open_entry array, starts. The last path_open_entry.compare_addr must be 0 to stop
	 * return: Last addr_table
	 */
	uint64_t sys8_path_table(uint64_t addr_table);

	/*
	 * sys8_mamba: Return the mark of mamba
	 * return: 0x666 -> is mamba, otherwise -> is not mamba
	 */
	int sys8_mamba(void);
	int sys8_mamba_version(uint16_t* version);

#ifdef __cplusplus
}
#endif

#endif
