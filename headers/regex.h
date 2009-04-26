#if (__LSB_VERSION__ >= 10 )
#ifndef _REGEX_H_
#define _REGEX_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define RE_DUP_MAX	(0x7fff)
#endif				/* __LSB_VERSION__ >= 3.2 */




#if __LSB_VERSION__ >= 12
    typedef unsigned long int reg_syntax_t;

#endif				/* __LSB_VERSION__ >= 1.2 */


    typedef int regoff_t;

    typedef struct {
	regoff_t rm_so;
	regoff_t rm_eo;
    } regmatch_t;

#if __LSB_VERSION__ >= 12
    typedef struct re_pattern_buffer regex_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct re_pattern_buffer {
	unsigned char *buffer;
	unsigned long int allocated;
	unsigned long int used;
	reg_syntax_t syntax;
	char *fastmap;
	char *translate;
	size_t re_nsub;
	unsigned int can_be_null:1;
	unsigned int regs_allocated:2;
	unsigned int fastmap_accurate:1;
	unsigned int no_sub:1;
	unsigned int not_bol:1;
	unsigned int not_eol:1;
	unsigned int newline_anchor:1;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Values for the cflags parameter to the regcomp() function*/
#if __LSB_VERSION__ >= 11
#define REG_ICASE	(REG_EXTENDED<<1)
#define REG_NEWLINE	(REG_ICASE<<1)
#define REG_NOSUB	(REG_NEWLINE<<1)
#define REG_EXTENDED	1
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Values for the eflags parameter to the regexec() function*/
#if __LSB_VERSION__ >= 11
#define REG_NOTEOL	(1<<1)
#define REG_NOTBOL	1
#endif				/* __LSB_VERSION__ >= 1.1 */




/* regex error codes*/
#if __LSB_VERSION__ >= 21
    typedef enum {
	REG_ENOSYS = -1,
	REG_NOERROR = 0,
	REG_NOMATCH = 1,
	REG_BADPAT = 2,
	REG_ECOLLATE = 3,
	REG_ECTYPE = 4,
	REG_EESCAPE = 5,
	REG_ESUBREG = 6,
	REG_EBRACK = 7,
	REG_EPAREN = 8,
	REG_EBRACE = 9,
	REG_BADBR = 10,
	REG_ERANGE = 11,
	REG_ESPACE = 12,
	REG_BADRPT = 13,
	REG_EEND = 14,
	REG_ESIZE = 15,
	REG_ERPAREN = 16
    } reg_errcode_t;

#endif				/* __LSB_VERSION__ >= 2.1 */


/* Function prototypes */

    extern int regcomp(regex_t * __preg, const char *__pattern,
		       int __cflags);
    extern size_t regerror(int __errcode, const regex_t * __preg,
			   char *__errbuf, size_t __errbuf_size);
    extern int regexec(const regex_t * __preg, const char *__string,
		       size_t __nmatch, regmatch_t __pmatch[],
		       int __eflags);
    extern void regfree(regex_t * __preg);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
