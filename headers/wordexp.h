#ifndef _WORDEXP_H_
#define _WORDEXP_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif





/* Bits set in the FLAGS argument to `wordexp'.*/


    enum {
	WRDE_DOOFFS = 1,
	WRDE_APPEND = 2,
	WRDE_NOCMD = 4,
	WRDE_REUSE = 8,
	WRDE_SHOWERR = 16,
	WRDE_UNDEF = 32
    };


/* Structure describing a word-expansion run.*/


    typedef struct {
	size_t we_wordc;
	char **we_wordv;
	size_t we_offs;
    } wordexp_t;


/* Possible nonzero return values from `wordexp'.*/


    enum {
	WRDE_NOSYS = -1,
	WRDE_NOSPACE = 1,
	WRDE_BADCHAR = 2,
	WRDE_BADVAL = 3,
	WRDE_CMDSUB = 4,
	WRDE_SYNTAX = 5
    };


    extern int wordexp(const char *, wordexp_t *, int);
    extern void wordfree(wordexp_t *);
#ifdef __cplusplus
}
#endif
#endif
