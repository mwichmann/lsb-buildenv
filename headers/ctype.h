#ifndef _CTYPE_H_
#define _CTYPE_H_

#include <inttypes.h>




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
extern int _tolower (int);
extern int _toupper (int);
extern int isalnum (int);
extern int isalpha (int);
extern int isascii (int);
extern int iscntrl (int);
extern int isdigit (int);
extern int isgraph (int);
extern int islower (int);
extern int isprint (int);
extern int ispunct (int);
extern int isspace (int);
extern int isupper (int);
extern int isxdigit (int);
extern int toascii (int);
extern int tolower (int);
extern int toupper (int);
#endif
