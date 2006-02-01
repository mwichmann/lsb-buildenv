#ifndef _TERM_H_
#define _TERM_H_


#ifdef __cplusplus
extern "C" {
#endif




    struct term;




    typedef struct term TERMINAL;





    extern int putp(const char *);
    extern int tigetflag(const char *);
    extern int tigetnum(const char *);
    extern char *tigetstr(const char *);
    extern char *tparm(const char *, ...);
    extern TERMINAL *set_curterm(TERMINAL *);
    extern int del_curterm(TERMINAL *);
    extern int restartterm(char *, int, int *);
    extern int setupterm(char *, int, int *);
    extern char *tgetstr(char *, char **);
    extern char *tgoto(const char *, int, int);
    extern int tgetent(char *, const char *);
    extern int tgetflag(char *);
    extern int tgetnum(char *);
    extern int tputs(const char *, int, int (*)(int)
	);
    extern TERMINAL *cur_term;
#ifdef __cplusplus
}
#endif
#endif
