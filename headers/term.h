#if (__LSB_VERSION__ >= 13 )
#ifndef _TERM_H_
#define _TERM_H_


#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


    struct term;


    typedef struct term TERMINAL;


/* Function prototypes */

    extern int putp(const char *);
    extern int tgetent(char *, const char *) LSB_DECL_DEPRECATED;
    extern int tgetflag(char *) LSB_DECL_DEPRECATED;
    extern int tgetnum(char *) LSB_DECL_DEPRECATED;
    extern char *tgetstr(char *, char **) LSB_DECL_DEPRECATED;
    extern char *tgoto(const char *, int, int) LSB_DECL_DEPRECATED;
    extern int tigetflag(const char *);
    extern int tigetnum(const char *);
    extern char *tigetstr(const char *);
    extern char *tparm(const char *, ...);
    extern int tputs(const char *, int, int (*)(int)
	);
    extern int setupterm(char *, int, int *);
#if __LSB_VERSION__ >= 20
    extern TERMINAL *cur_term;
    extern int del_curterm(TERMINAL *);
    extern int restartterm(char *, int, int *);
    extern TERMINAL *set_curterm(TERMINAL *);
#endif				/* __LSB_VERSION__ >= 2.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
