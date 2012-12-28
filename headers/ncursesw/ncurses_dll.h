#if (__LSB_VERSION__ >= 50 )
#ifndef _NCURSESW_NCURSES_DLL_H_
#define _NCURSESW_NCURSES_DLL_H_


#ifdef __cplusplus
extern "C" {
#endif


#define NCURSES_API
#define NCURSES_IMPEXP
#define NCURSES_STATIC
#define NCURSES_WRAPPED_VAR(type,name)	extern type NCURSES_PUBLIC_VAR(name)(void)
#define NCURSES_PUBLIC_VAR(name)	_nc_ ##name


#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
