#ifndef _CTYPE_H_
#define _CTYPE_H_

#include <sys/types.h>




/* These are all the characteristics of characters*/


enum
{
  _ISupper,
  _ISlower,
  _ISalpha,
  _ISdigit,
  _ISxdigit,
  _ISspace,
  _ISprint,
  _ISgraph,
  _ISblank,
  _IScntrl,
  _ISpunct,
  _ISalnum
}
 ;


extern unsigned short *__ctype_b;
extern int32_t *__ctype_tolower;
extern int32_t *__ctype_toupper;
int _tolower (int);
int _toupper (int);
int isalnum (int);
int isalpha (int);
int isascii (int);
int iscntrl (int);
int isdigit (int);
int isgraph (int);
int islower (int);
int isprint (int);
int ispunct (int);
int isspace (int);
int isupper (int);
int isxdigit (int);
int toascii (int);
int tolower (int);
int toupper (int);
#endif
