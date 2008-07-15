#if (__LSB_VERSION__ >= 13 )
#ifndef _TERM_H_
#define _TERM_H_


#ifdef __cplusplus
extern "C" {
#endif


    struct term;


    typedef struct term TERMINAL;


/* Function prototypes */

    extern int putp(const char *);
    extern int tgetent(char *, const char *);
    extern int tgetflag(char *);
    extern int tgetnum(char *);
    extern char *tgetstr(char *, char **);
    extern char *tgoto(const char *, int, int);
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
