#ifndef _TERM_H_
#define _TERM_H_


#ifdef __cplusplus
extern "C"
{
#endif





  extern int putp (const char *);
  extern int tigetflag (char *);
  extern int tigetnum (char *);
  extern char *tigetstr (char *);
  extern char *tparm (char *, ...);
  extern TERMINAL *set_curterm (TERMINAL *);
  extern int del_curterm (TERMINAL *);
  extern int restartterm (char *, int, int *);
  extern int setupterm (char *, int, int *);
  extern char *tgetstr (char *, char **);
  extern char *tgoto (char *, int, int);
  extern int tgetent (char *, const char *);
  extern int tgetflag (char *);
  extern int tgetnum (char *);
  extern int tputs (const char *, int, int (*putcproc) (int));
  extern TERMINAL *cur_term;
#ifdef __cplusplus
}
#endif
#endif
