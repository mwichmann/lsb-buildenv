#ifndef _REGEX_H_
#define _REGEX_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif







  typedef struct re_pattern_buffer
  {
    unsigned char *buffer;
    unsigned long allocated;
    unsigned long used;
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
  }
  regex_t;

  typedef int regoff_t;

  typedef struct
  {
    regoff_t rm_so;
    regoff_t rm_eo;
  }
  regmatch_t;


/* Values for the cflags parameter to the regcomp() function*/
#define REG_ICASE	(REG_EXTENDED<<1)
#define REG_NEWLINE	(REG_ICASE<<1)
#define REG_NOSUB	(REG_NEWLINE<<1)
#define REG_NOMATCH	-1
#define REG_EXTENDED	1



/* Values for the eflags parameter to the regexec() function*/
#define REG_NOTEOL	(1<<1)
#define REG_NOTBOL	1



/* regex error codes*/


  typedef enum
  {
    REG_ENOSYS,
    REG_NOERROR,
    REG_NOMATCH,
    REG_BADPAT,
    REG_ECOLLATE,
    REG_ECTYPE,
    REG_EESCAPE,
    REG_ESUBREG,
    REG_EBRACK,
    REG_EPAREN,
    REG_EBRACE,
    REG_BADBR,
    REG_ERANGE,
    REG_ESPACE,
    REG_BADRPT,
    REG_EEND,
    REG_ESIZE,
    REG_ERPAREN
  }
  reg_errcode_t;




  typedef unsigned long reg_syntax_t;


  extern int regcomp (regex_t *, const char *, int);
  extern size_t regerror (int, const regex_t *, char *, size_t);
  extern int regexec (const regex_t *, const char *, size_t, regmatch_t[],
		      int);
  extern void regfree (regex_t *);
#ifdef __cplusplus
}
#endif
#endif
