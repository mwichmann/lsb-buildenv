#ifndef _TERM_H_
#define _TERM_H_


#ifdef __cplusplus
extern "C"
{
#endif




  int (*putcproc) (int);


  extern int putp (char *);
  extern int tigetflag (char *);
  extern int tigetnum (char *);
  extern char *tigetstr (char *);
  extern char *tparm (char *, ...);
  extern int setupterm (void);
  extern char *tgetstr (char *, char **);
  extern char *tgoto (char *, int, int);
  extern int tgetent (char *, const char *);
  extern int tgetflag (char *);
  extern int tgetnum (char *);
  extern int tputs (const char *, int, int (*putcproc) (int));
#ifdef __cplusplus
}
#endif
#endif
