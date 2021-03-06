#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_CONFIG_FTSTDLIB_H_
#define _FREETYPE_CONFIG_FTSTDLIB_H_

#include <ctype.h>
#include <limits.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ft_atol	atol
#define ft_exit	exit
#define FT_INT_MAX	INT_MAX
#define ft_isalnum	isalnum
#define ft_isdigit	isdigit
#define ft_islower	islower
#define ft_isupper	isupper
#define ft_isxdigit	isxdigit
#define ft_jmp_buf	jmp_buf
#define ft_longjmp	longjmp
#define ft_memcmp	memcmp
#define ft_memcpy	memcpy
#define ft_memmove	memmove
#define ft_memset	memset
#define ft_ptrdiff_t	ptrdiff_t
#define ft_qsort	qsort
#define ft_setjmp	setjmp
#define ft_sprintf	sprintf
#define ft_strcat	strcat
#define ft_strcmp	strcmp
#define ft_strcpy	strcpy
#define ft_strlen	strlen
#define ft_strncmp	strncmp
#define ft_strncpy	strncpy
#define ft_strrchr	strrchr
#define FT_UINT_MAX	UINT_MAX
#define FT_ULONG_MAX	ULONG_MAX


#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
