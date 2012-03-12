/*
 * Copyright 2009-2012 Linux Foundation
 *
 * Portions
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 * This file is part of lsbcc.  lsbcc is free software, covered
 * under the terms of the BSD license.
 */
#ifndef _ELFUTILS_H
#define _ELFUTILS_H

#include <sys/types.h>
#include <elf.h>

struct versym {
    char *name;
    char *vername;
    int deprecated;
    int modname;
    int size;
    int type;			/* 0 = Data; 1 = Function */
};

#if defined(__ia64__)
typedef struct {
    void *func;
    void *gpoffset;
} fptr;
#else
typedef unsigned long fptr;
#endif

//In memory format
struct classtypeinfo_mem {
    void *basevtable;
    char *name;
    void *basetypeinfo[0];
};

struct si_classtypeinfo_mem {
    void *basevtable;
    char *name;
    void *basetype;
    void *basetypeinfo[0];
};

struct base_type_info_mem {
    struct classtypeinfo_mem *base_type;
    unsigned long offset_flags;
};

typedef enum {
    _base_virtual_mask = 0x1,
    _base_public_mask = 0x2,
    _base_all_mask = 0x3,
    _base_offset_shift = 8
} offset_flags;

struct base_type_info {
    char *base_type;
    unsigned long offset_flags;
};

typedef enum {
    _vmi_non_diamond_repeat_mask = 0x1,
    _vmi_diamond_shaped_mask = 0x2,
    _vmi_all_mask = 0x03
} vmi_flags;

struct vmi_classtypeinfo_mem {
    void *basevtable;
    char *name;
    vmi_flags flags;
    unsigned int base_count;
    struct base_type_info_mem base_info[0];
};

typedef enum {
    _pbase_const_mask = 0x1,
    _pbase_volatile_mask = 0x2,
    _pbase_restrict_mask = 0x4,
    _pbase_incomplete_mask = 0x8,
    _pbase_incomplete_class_mask = 0x10,
    _pbase_all_mask = 0x1f
} pbase_flags;

struct pbasetypeinfo_mem {
    void *basevtable;
    char *name;
    pbase_flags offset_flags;
    struct classtypeinfo_mem *pointee;
    void *basetypeinfo[0];
};

//DB format
struct classtypeinfo {
    char *basevtable;
    char *name;
    char **basetypeinfo;
};

//In memory format
struct cat1vtable_mem {
    unsigned long baseoffset;
    const char *typeinfo;
    fptr virtfuncs[0];
};

struct cat2vtable_mem {
    unsigned long vcalloffset;
    unsigned long baseoffset;
    const char *typeinfo;
    fptr virtfuncs[0];
};

union classvtable_mem {
    struct cat1vtable_mem cat1;
    struct cat2vtable_mem cat2;
};

//DB format
struct classvtable {
    unsigned long vcalloffset;
    unsigned long baseoffset;
    unsigned int category;
    unsigned int numvfuncs;
    const char *typeinfo;
    const char **virtfuncs;
};

// No in memory format for this one
struct classinfo {
    char *name;
    char *vtablename;
    char *rttiname;
    char *basename;
    char *vttname;
    int numvirttab;
    int numbaseinfo;
    int numvmitypes;
    int numvtt;
    int flags;
    struct classtypeinfo *typeinfo;
    struct classvtable *vtable;
    struct base_type_info *btinfo;
};

#if defined(__alpha) || defined(__alpha__) || \
    defined(__ia64__) || defined(__powerpc64__) || defined(__s390x__) || \
    defined(__x86_64__)

#define Elf_Ehdr Elf64_Ehdr
#define Elf_Shdr Elf64_Shdr
#define Elf_Phdr Elf64_Phdr
#define Elf_Dyn  Elf64_Dyn
#define Elf_Sym  Elf64_Sym
#define Elf_Rel  Elf64_Rel
#define Elf_Nhdr  Elf64_Nhdr
#define Elf_Verdef  Elf64_Verdef
#define Elf_Verdaux  Elf64_Verdaux
#define Elf_Off  Elf64_Off
#define Elf_Rela  Elf64_Rela
#define Elf_Vernaux Elf64_Vernaux
#define Elf_Half Elf64_Half
#define Elf_Verneed Elf64_Verneed

#else

#define Elf_Ehdr Elf32_Ehdr
#define Elf_Shdr Elf32_Shdr
#define Elf_Phdr Elf32_Phdr
#define Elf_Dyn  Elf32_Dyn
#define Elf_Sym  Elf32_Sym
#define Elf_Rel  Elf32_Rel
#define Elf_Nhdr  Elf32_Nhdr
#define Elf_Verdef  Elf32_Verdef
#define Elf_Verdaux  Elf32_Verdaux
#define Elf_Off  Elf32_Off
#define Elf_Rela  Elf32_Rela
#define Elf_Vernaux Elf32_Vernaux
#define Elf_Verneed Elf32_Verneed
#define Elf_Half Elf32_Half

#endif

typedef struct {
    int fd;
    caddr_t addr;		/* Start address of the file */
    Elf_Ehdr *elf_header;
    caddr_t araddr;		/* Start address of the file if an archive */
    Elf_Shdr *saddr;		/* Start address of the next section of the file */
    Elf_Phdr *paddr;		/* address of the program header of the file */
    caddr_t straddr;		/* Start address of the string table */
    int strndx;			/* index of the string table */
    int size;
    int numph;
    int numsh;
    Elf_Shdr *dynsymhdr;	/* Dynamic Symbol table header */

    int numsyms;
    Elf_Shdr *symhdr;		/* Symbol table header */
    Elf_Sym *syms;		/* Array of symbol entries */

    Elf_Shdr *dynhdr;		/* Dynamic entries header */
    Elf_Dyn *dyns;		/* Array of dynamic entries */
    int numdynents;

    Elf_Shdr *dynshdr;		/* Dynamic string table header */

    Elf_Shdr *verhdr;		/* Version entries header */
    Elf_Half *vers;		/* Array of version entries */

    Elf_Shdr *verdhdr;		/* Version definition header */
    Elf_Verdef *verd;		/* Array of verdef entries */
    int numverdefs;
    int baseverdef;

    Elf_Shdr *vernhdr;		/* Version dependency header */
    Elf_Verneed *vern;		/* Array of verneed entries */
    int numverneed;

    char *versionnames[32];	/* arbitrary size, but big enough for now */
} ElfFile;

extern char *ElfGetStringIndex(ElfFile * file, int offset, int index);
extern char *ElfGetString(ElfFile * file, int offset);

extern ElfFile *OpenElfFile(const char *name);
void CloseElfFile(ElfFile * efile);

#endif				/* _ELFCHK_H */
