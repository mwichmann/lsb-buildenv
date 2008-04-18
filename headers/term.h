#if (__LSB_VERSION__ >= 13 )
#ifndef _TERM_H_
#define _TERM_H_


#ifdef __cplusplus
extern "C" {
#endif


    struct term;


    typedef struct term TERMINAL;


// Function prototypes

#if __LSB_VERSION__ >= 10
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
#endif				// __LSB_VERSION__ >= 1.0

#if __LSB_VERSION__ >= 12
    extern int setupterm(char *, int, int *);
#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 20
    extern TERMINAL *cur_term;
    extern int del_curterm(TERMINAL *);
    extern int restartterm(char *, int, int *);
    extern TERMINAL *set_curterm(TERMINAL *);
#endif				// __LSB_VERSION__ >= 2.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
