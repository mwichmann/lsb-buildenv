/*
 * Copyright 2009-2012 Linux Foundation
 *
 * This file is part of lsbcc.  lsbcc is free software, covered
 * under the terms of the BSD license.
 * 
 * Based in part on tet elfchk code
 *
 */
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

#include "elf_utils.h"

void getSymbolVersionInfo(ElfFile * file);

ElfFile *OpenElfFile(const char *name)
{
    ElfFile *efile;
    struct stat stat;

    if ((efile = (ElfFile *) calloc(1, sizeof(ElfFile))) == NULL) {
	fprintf(stderr, "Unable to alloc efile memory for %s\n", name);
	return NULL;
    }
    efile->addr = MAP_FAILED;
    efile->fd = -1;

    if ((efile->fd = open(name, O_RDONLY, 0666)) < 0) {
	perror("open failed");
	free(efile);
	return NULL;
    }

    if (fstat(efile->fd, &stat) < 0) {
	perror("stat failed");
	CloseElfFile(efile);
	return NULL;
    }
    efile->size = stat.st_size;

    if (efile->size == 0) {
	CloseElfFile(efile);
	return NULL;
    }

    if ((efile->addr =
	 mmap(0, efile->size, PROT_READ, MAP_PRIVATE, efile->fd,
	      0)) == (caddr_t) - 1) {
	perror("mmap failed");
	CloseElfFile(efile);
	return NULL;
    }
    if (memcmp(efile->addr, ELFMAG, SELFMAG)) {
	CloseElfFile(efile);
	return NULL;
    }
    efile->elf_header = (Elf_Ehdr *) efile->addr;

    if (efile->elf_header->e_phoff) {
	efile->paddr =
	    (Elf_Phdr *) ((caddr_t) efile->addr +
			  efile->elf_header->e_phoff);
	efile->numph = efile->elf_header->e_phnum;
    }
    if (efile->elf_header->e_shoff) {
	efile->saddr =
	    (Elf_Shdr *) ((caddr_t) efile->addr +
			  efile->elf_header->e_shoff);
	efile->numsh = efile->elf_header->e_shnum;
    }

    if (efile->elf_header->e_shstrndx != SHN_UNDEF) {
	efile->straddr =
	    efile->addr +
	    efile->saddr[efile->elf_header->e_shstrndx].sh_offset;
    }
    efile->strndx = efile->elf_header->e_shstrndx;

    getSymbolVersionInfo(efile);

    return efile;
}

void CloseElfFile(ElfFile * efile)
{
    if (!efile) {
	return;
    }
    if (efile->addr != MAP_FAILED) {
	munmap(efile->addr, efile->size);
    }
    if (efile->fd != -1) {
	close(efile->fd);
    }
    free(efile);
}

/* this is the imported code */
/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */

void getSymbolVersionInfo(ElfFile * file)
{
    Elf_Shdr *hdr;
    Elf_Verdaux *verdaux;
    Elf_Vernaux *vernaux;
    int numvernaux, numverdaux, i, j;

    for (i = 0; i < file->numsh; i++) {
	hdr = &(file->saddr[i]);

	if (strcmp(ElfGetString(file, hdr->sh_name), ".dynamic") == 0) {
	    file->dynhdr = hdr;
	}
	if (strcmp(ElfGetString(file, hdr->sh_name), ".dynsym") == 0) {
	    file->symhdr = hdr;
	}
	if (strcmp(ElfGetString(file, hdr->sh_name), ".dynstr") == 0) {
	    file->dynshdr = hdr;
	}
	if (strcmp(ElfGetString(file, hdr->sh_name), ".gnu.version") == 0) {
	    file->verhdr = hdr;
	}
	if (strcmp(ElfGetString(file, hdr->sh_name), ".gnu.version_d") ==
	    0) {
	    file->verdhdr = hdr;
	}
	if (strcmp(ElfGetString(file, hdr->sh_name), ".gnu.version_r") ==
	    0) {
	    file->vernhdr = hdr;
	}
    }

    if (file->symhdr == 0) {
	/* Not a dynamically linked executable */
	file->numsyms = 0;
	return;
    }

    file->numsyms = file->symhdr->sh_size / file->symhdr->sh_entsize;

    file->syms =
	(Elf_Sym *) ((caddr_t) file->addr + file->symhdr->sh_offset);
    if (file->verhdr) {
	file->vers =
	    (Elf_Half *) ((caddr_t) file->addr + file->verhdr->sh_offset);
    }
    if (file->verdhdr) {
	file->verd =
	    (Elf_Verdef *) ((caddr_t) file->addr +
			    file->verdhdr->sh_offset);
    }
    if (file->vernhdr) {
	file->vern =
	    (Elf_Verneed *) ((caddr_t) file->addr +
			     file->vernhdr->sh_offset);
    }
    file->dyns =
	(Elf_Dyn *) ((caddr_t) file->addr + file->dynhdr->sh_offset);

    /*
     * Look in dynhdr to get the number of entries in verd,
     * so we can parse it.
     */
    file->numdynents = file->dynhdr->sh_size / file->dynhdr->sh_entsize;
    for (i = 0; i < file->numdynents; i++) {
	if (file->dyns[i].d_tag == DT_VERDEFNUM) {
	    file->numverdefs = file->dyns[i].d_un.d_val;
	}
	if (file->dyns[i].d_tag == DT_VERNEEDNUM) {
	    file->numverneed = file->dyns[i].d_un.d_val;
	}
    }

    /* Get the names of the Versions used */

    if (file->verd) {
	for (i = 0; i < file->numverdefs; i++) {
	    verdaux =
		(Elf_Verdaux *) ((char *) file->verd + file->verd->vd_aux);
	    numverdaux = file->verd->vd_cnt;
	    /* Note, we only want the first (ie best)
	     * version in a list
	     */
	    file->versionnames[file->verd->vd_ndx] =
		ElfGetStringIndex(file,
				  verdaux->vda_name,
				  file->verdhdr->sh_link);
	    for (j = 0; j < numverdaux; j++) {
		verdaux =
		    (Elf_Verdaux *) ((char *) verdaux + verdaux->vda_next);
	    }
	    file->verd =
		(Elf_Verdef *) ((char *) file->verd + file->verd->vd_next);
	}

    }
    if (file->vern) {
	for (i = 0; i < file->numverneed; i++) {
	    vernaux =
		(Elf_Vernaux *) ((char *) file->vern + file->vern->vn_aux);
	    numvernaux = file->vern->vn_cnt;
	    /* Note, we only want the first (ie best) version in a list */
	    if (!file->versionnames[vernaux->vna_other]) {
		file->versionnames[vernaux->vna_other] =
		    ElfGetStringIndex(file,
				      vernaux->vna_name,
				      file->vernhdr->sh_link);
	    }
	    for (j = 0; j < numvernaux; j++) {
		file->versionnames[vernaux->vna_other] =
		    ElfGetStringIndex(file,
				      vernaux->vna_name,
				      file->vernhdr->sh_link);
		vernaux =
		    (Elf_Vernaux *) ((char *) vernaux + vernaux->vna_next);
	    }
	    file->vern =
		(Elf_Verneed *) ((char *) file->vern +
				 file->vern->vn_next);
	}
    }
}

char *ElfGetStringIndex(ElfFile * file, int offset, int index)
{
    if (!offset || !index) {
	return "";
    }

    return (char *) file->addr + file->saddr[index].sh_offset + offset;
}

char *ElfGetString(ElfFile * file, int offset)
{
    return ElfGetStringIndex(file, offset, file->strndx);
}
