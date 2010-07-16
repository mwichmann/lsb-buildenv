#if (__LSB_VERSION__ >= 41 )
#ifndef _ELF_H_
#define _ELF_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef uint32_t Elf32_Addr;

    typedef uint64_t Elf64_Addr;

    typedef uint32_t Elf32_Word;

    typedef uint32_t Elf64_Word;

    typedef int32_t Elf32_Sword;

    typedef int32_t Elf64_Sword;

    typedef uint64_t Elf32_Xword;

    typedef uint64_t Elf64_Xword;

    typedef int64_t Elf32_Sxword;

    typedef int64_t Elf64_Sxword;

    typedef uint32_t Elf32_Off;

    typedef uint64_t Elf64_Off;

    typedef struct {
	Elf32_Word p_type;	/* Segment type */
	Elf32_Off p_offset;	/* Segment file offset */
	Elf32_Addr p_vaddr;	/* Segment virtual address */
	Elf32_Addr p_paddr;	/* Segment physical address */
	Elf32_Word p_filesz;	/* Segment size in file */
	Elf32_Word p_memsz;	/* Segment size in memory */
	Elf32_Word p_flags;	/* Segment flags */
	Elf32_Word p_align;	/* Segment alignment */
    } Elf32_Phdr;

    typedef struct {
	Elf64_Word p_type;	/* Segment type */
	Elf64_Word p_flags;	/* Segment flags */
	Elf64_Off p_offset;	/* Segment file offset */
	Elf64_Addr p_vaddr;	/* Segment virtual address */
	Elf64_Addr p_paddr;	/* Segment physical address */
	Elf64_Xword p_filesz;	/* Segment size in file */
	Elf64_Xword p_memsz;	/* Segment size in memory */
	Elf64_Xword p_align;	/* Segment alignment */
    } Elf64_Phdr;

    typedef uint16_t Elf32_Half;

    typedef uint16_t Elf64_Half;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
