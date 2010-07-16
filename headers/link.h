#if (__LSB_VERSION__ >= 41 )
#ifndef _LINK_H_
#define _LINK_H_

#include <stddef.h>
#include <stdint.h>
#include <elf.h>

#ifdef __cplusplus
extern "C" {
#endif


#if defined __i386__
/* IA32 */
    struct dl_phdr_info {
	Elf32_Addr dlpi_addr;
	const char *dlpi_name;
	const Elf32_Phdr *dlpi_phdr;
	Elf32_Half dlpi_phnum;
	unsigned long long int dlpi_adds;
	unsigned long long int dlpi_subs;
	size_t dlpi_tls_modid;
	void *dlpi_tls_data;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct dl_phdr_info {
	Elf64_Addr dlpi_addr;
	const char *dlpi_name;
	const Elf64_Phdr *dlpi_phdr;
	Elf64_Half dlpi_phnum;
	unsigned long long int dlpi_adds;
	unsigned long long int dlpi_subs;
	size_t dlpi_tls_modid;
	void *dlpi_tls_data;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct dl_phdr_info {
	Elf32_Addr dlpi_addr;
	const char *dlpi_name;
	const Elf32_Phdr *dlpi_phdr;
	Elf32_Half dlpi_phnum;
	unsigned long long int dlpi_adds;
	unsigned long long int dlpi_subs;
	size_t dlpi_tls_modid;
	void *dlpi_tls_data;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct dl_phdr_info {
	Elf64_Addr dlpi_addr;
	const char *dlpi_name;
	const Elf64_Phdr *dlpi_phdr;
	Elf64_Half dlpi_phnum;
	unsigned long long int dlpi_adds;
	unsigned long long int dlpi_subs;
	size_t dlpi_tls_modid;
	void *dlpi_tls_data;
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct dl_phdr_info {
	Elf32_Addr dlpi_addr;
	const char *dlpi_name;
	const Elf32_Phdr *dlpi_phdr;
	Elf32_Half dlpi_phnum;
	unsigned long long int dlpi_adds;
	unsigned long long int dlpi_subs;
	size_t dlpi_tls_modid;
	void *dlpi_tls_data;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct dl_phdr_info {
	Elf64_Addr dlpi_addr;
	const char *dlpi_name;
	const Elf64_Phdr *dlpi_phdr;
	Elf64_Half dlpi_phnum;
	unsigned long long int dlpi_adds;
	unsigned long long int dlpi_subs;
	size_t dlpi_tls_modid;
	void *dlpi_tls_data;
    };

#endif
#if defined __s390x__
/* S390X */
    struct dl_phdr_info {
	Elf64_Addr dlpi_addr;
	const char *dlpi_name;
	const Elf64_Phdr *dlpi_phdr;
	Elf64_Half dlpi_phnum;
	unsigned long long int dlpi_adds;
	unsigned long long int dlpi_subs;
	size_t dlpi_tls_modid;
	void *dlpi_tls_data;
    };

#endif

/* Function prototypes */

    extern int
	dl_iterate_phdr(int (*)(struct dl_phdr_info *, size_t, void *),
			void *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
