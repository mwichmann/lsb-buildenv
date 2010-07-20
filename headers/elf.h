#if (__LSB_VERSION__ >= 41 )
#ifndef _ELF_H_
#define _ELF_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ELFMAG1	'E'
#define ELFMAG3	'F'
#define ELFMAG2	'L'
#define EI_NIDENT	(16)
#define DT_NULL	0
#define EI_MAG0	0
#define ET_NONE	0
#define SHN_UNDEF	0
#define DT_LOOS	0x6000000d
#define DT_HIOS	0x6ffff000
#define DT_VERDEF	0x6ffffffc
#define DT_VERDEFNUM	0x6ffffffd
#define DT_VERNEED	0x6ffffffe
#define DT_VERNEEDNUM	0x6fffffff
#define DT_LOPROC	0x70000000
#define ELFMAG0	0x7f
#define DT_HIPROC	0x7fffffff
#define ET_LOOS	0xfe00
#define ET_HIOS	0xfeff
#define ET_LOPROC	0xff00
#define ET_HIPROC	0xffff
#define DT_NEEDED	1
#define EI_MAG1	1
#define ET_REL	1
#define DT_STRSZ	10
#define DT_SYMENT	11
#define DT_INIT	12
#define DT_FINI	13
#define DT_SONAME	14
#define DT_RPATH	15
#define DT_SYMBOLIC	16
#define DT_REL	17
#define DT_RELSZ	18
#define DT_RELENT	19
#define DT_PLTRELSZ	2
#define EI_MAG2	2
#define ET_EXEC	2
#define DT_PLTREL	20
#define DT_DEBUG	21
#define DT_TEXTREL	22
#define DT_JMPREL	23
#define DT_BIND_NOW	24
#define DT_INIT_ARRAY	25
#define DT_FINI_ARRAY	26
#define DT_INIT_ARRAYSZ	27
#define DT_FINI_ARRAYSZ	28
#define DT_RUNPATH	29
#define DT_PLTGOT	3
#define EI_MAG3	3
#define ET_DYN	3
#define DT_NUM	34
#define DT_HASH	4
#define ET_CORE	4
#define SELFMAG	4
#define DT_STRTAB	5
#define ET_NUM	5
#define DT_SYMTAB	6
#define DT_RELA	7
#define DT_RELASZ	8
#define DT_RELAENT	9
#define ELFMAG	"\177ELF"


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

    typedef uint16_t Elf32_Section;

    typedef uint16_t Elf64_Section;

    typedef struct {
	Elf32_Word n_namesz;
	Elf32_Word n_descsz;
	Elf32_Word n_type;
    } Elf32_Nhdr;

    typedef struct {
	Elf64_Word n_namesz;
	Elf64_Word n_descsz;
	Elf64_Word n_type;
    } Elf64_Nhdr;

    typedef struct {
	Elf64_Word st_name;
	unsigned char st_info;
	unsigned char st_other;
	Elf64_Section st_shndx;
	Elf64_Addr st_value;
	Elf64_Xword st_size;
    } Elf64_Sym;

    typedef struct {
	Elf32_Word st_name;
	Elf32_Addr st_value;
	Elf32_Word st_size;
	unsigned char st_info;
	Elf32_Section st_shndx;
	unsigned char st_other;
    } Elf32_Sym;

    typedef struct {
	Elf64_Addr r_offset;
	Elf64_Xword r_info;
    } Elf64_Rel;

    typedef struct {
	Elf32_Addr r_offset;
	Elf32_Xword r_info;
    } Elf32_Rel;

    typedef struct {
	Elf64_Addr r_offset;
	Elf64_Xword r_info;
	Elf64_Sxword r_addend;
    } Elf64_Rela;

    typedef struct {
	Elf32_Addr r_offset;
	Elf32_Word r_info;
	Elf32_Sword r_addend;
    } Elf32_Rela;

    typedef struct {
	Elf32_Half vd_version;
	Elf32_Half vd_flags;
	Elf32_Half vd_ndx;
	Elf32_Half vd_cnt;
	Elf32_Word vd_hash;
	Elf32_Word vd_aux;
	Elf32_Word vd_next;
    } Elf32_Verdef;

    typedef struct {
	Elf64_Half vd_version;
	Elf64_Half vd_flags;
	Elf64_Half vd_ndx;
	Elf64_Half vd_cnt;
	Elf64_Word vd_hash;
	Elf64_Word vd_aux;
	Elf64_Word vd_next;
    } Elf64_Verdef;

    typedef struct {
	Elf64_Word vda_name;
	Elf64_Word vda_next;
    } Elf64_Verdaux;

    typedef struct {
	Elf32_Word vda_name;
	Elf32_Word vda_next;
    } Elf32_Verdaux;

    typedef struct {
	Elf32_Half vn_version;
	Elf32_Half vn_cnt;
	Elf32_Word vn_file;
	Elf32_Word vn_aux;
	Elf32_Word vn_next;
    } Elf32_Verneed;

    typedef struct {
	Elf64_Half vn_version;
	Elf64_Half vn_cnt;
	Elf64_Word vn_file;
	Elf64_Word vn_aux;
	Elf64_Word vn_next;
    } Elf64_Verneed;

    typedef struct {
	Elf32_Word vna_hash;
	Elf32_Half vna_flags;
	Elf32_Half vna_other;
	Elf32_Word vna_name;
	Elf32_Word vna_next;
    } Elf32_Vernaux;

    typedef struct {
	Elf64_Word vna_hash;
	Elf64_Half vna_flags;
	Elf64_Half vna_other;
	Elf64_Word vna_name;
	Elf64_Word vna_next;
    } Elf64_Vernaux;

    typedef struct {
	unsigned char e_ident[EI_NIDENT];
	Elf64_Half e_type;
	Elf64_Half e_machine;
	Elf64_Word e_version;
	Elf64_Addr e_entry;
	Elf64_Off e_phoff;
	Elf64_Off e_shoff;
	Elf64_Word e_flags;
	Elf64_Half e_ehsize;
	Elf64_Half e_phentsize;
	Elf64_Half e_phnum;
	Elf64_Half e_shentsize;
	Elf64_Half e_shnum;
	Elf64_Half e_shstrndx;
    } Elf64_Ehdr;

    typedef struct {
	unsigned char e_ident[EI_NIDENT];
	Elf32_Half e_type;
	Elf32_Half e_machine;
	Elf32_Word e_version;
	Elf32_Addr e_entry;
	Elf32_Off e_phoff;
	Elf32_Off e_shoff;
	Elf32_Word e_flags;
	Elf32_Half e_ehsize;
	Elf32_Half e_phentsize;
	Elf32_Half e_phnum;
	Elf32_Half e_shentsize;
	Elf32_Half e_shnum;
	Elf32_Half e_shstrndx;
    } Elf32_Ehdr;

    typedef struct {
	Elf32_Word sh_name;
	Elf32_Word sh_type;
	Elf32_Word sh_flags;
	Elf32_Addr sh_addr;
	Elf32_Off sh_offset;
	Elf32_Word sh_size;
	Elf32_Word sh_link;
	Elf32_Word sh_info;
	Elf32_Word sh_addralign;
	Elf32_Word sh_entsize;
    } Elf32_Shdr;

    typedef struct {
	Elf64_Word sh_name;
	Elf64_Word sh_type;
	Elf64_Xword sh_flags;
	Elf64_Addr sh_addr;
	Elf64_Off sh_offset;
	Elf64_Xword sh_size;
	Elf64_Word sh_link;
	Elf64_Word sh_info;
	Elf64_Xword sh_addralign;
	Elf64_Xword sh_entsize;
    } Elf64_Shdr;

    typedef struct {
	Elf32_Sword d_tag;
	struct {
	    Elf32_Word d_val;
	    Elf32_Addr d_ptr;
	} d_un;
    } Elf32_Dyn;

    typedef struct {
	Elf64_Sxword d_tag;
	struct {
	    Elf64_Xword d_val;
	    Elf64_Addr d_ptr;
	} d_un;
    } Elf64_Dyn;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
