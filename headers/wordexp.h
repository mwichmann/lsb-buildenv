#ifndef _WORDEXP_H_
#define _WORDEXP_H_


#ifdef __cplusplus
extern "C"
{
#endif





/* Bits set in the FLAGS argument to `wordexp'.*/


  enum
  {
    WRDE_DOOFFS,
    WRDE_APPEND,
    WRDE_NOCMD,
    WRDE_REUSE,
    WRDE_SHOWERR,
    WRDE_UNDEF,
    __WRDE_FLAGS
  }
   ;


/* Structure describing a word-expansion run.*/


  typedef struct
  {
    int we_wordc;
    char **we_wordv;
    int we_offs;
  }
  wordexp_t;


/* Possible nonzero return values from `wordexp'.*/


  enum
  {
    WRDE_NOSYS,
    WRDE_NOSPACE,
    WRDE_BADCHAR,
    WRDE_BADVAL,
    WRDE_CMDSUB,
    WRDE_SYNTAX
  }
   ;


  extern int wordexp (char *, wordexp_t *, int);
  extern void wordfree (wordexp_t *);
#ifdef __cplusplus
}
#endif
#endif
