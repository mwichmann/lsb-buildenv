#if (__LSB_VERSION__ >= 10 )
#ifndef _WORDEXP_H_
#define _WORDEXP_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Bits set in the FLAGS argument to `wordexp'.*/
#if __LSB_VERSION__ >= 11
    enum {
	WRDE_DOOFFS = 1,
	WRDE_APPEND = 2,
	WRDE_NOCMD = 4,
	WRDE_REUSE = 8,
	WRDE_SHOWERR = 16,
	WRDE_UNDEF = 32
    };

#endif				/* __LSB_VERSION__ >= 1.1 */


/* Structure describing a word-expansion run.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	size_t we_wordc;
	char **we_wordv;
	size_t we_offs;
    } wordexp_t;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Possible nonzero return values from `wordexp'.*/
#if __LSB_VERSION__ >= 11
    enum {
	WRDE_NOSYS = -1,
	WRDE_NOSPACE = 1,
	WRDE_BADCHAR = 2,
	WRDE_BADVAL = 3,
	WRDE_CMDSUB = 4,
	WRDE_SYNTAX = 5
    };

#endif				/* __LSB_VERSION__ >= 1.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int wordexp(const char *, wordexp_t *, int);
    extern void wordfree(wordexp_t *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
