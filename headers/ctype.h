#ifndef _CTYPE_H_
#define _CTYPE_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif





/* These are all the characteristics of characters*/


    enum {
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
    };


    extern int _tolower(int);
    extern int _toupper(int);
    extern int isalnum(int);
    extern int isalpha(int);
    extern int isascii(int);
    extern int iscntrl(int);
    extern int isdigit(int);
    extern int isgraph(int);
    extern int islower(int);
    extern int isprint(int);
    extern int ispunct(int);
    extern int isspace(int);
    extern int isupper(int);
    extern int isxdigit(int);
    extern int toascii(int);
    extern int tolower(int);
    extern int toupper(int);
    extern int isblank(int);
    extern const unsigned short **__ctype_b_loc(void);
    extern const int32_t **__ctype_toupper_loc(void);
    extern const int32_t **__ctype_tolower_loc(void);
#ifdef __cplusplus
}
#endif
#endif
