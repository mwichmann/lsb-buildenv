#ifndef _WORDEXP_H_
#define _WORDEXP_H_



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


typedef struct
{
  int we_wordc;
  char **we_wordv;
  int we_offs;
}
wordexp_t;


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


int wordexp (char *, wordexp_t *, int);
void wordfree (wordexp_t *);
#endif
