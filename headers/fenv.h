#ifndef _FENV_H_
#define _FENV_H_


#ifdef __cplusplus
extern "C"
{
#endif





  extern int feclearexcept (int);
  extern int fegetenv (void);
  extern int fegetexceptflag (void);
  extern int fegetround (void);
  extern int feholdexcept (void);
  extern int feraiseexcept (void);
  extern int fetestexcept (void);
  extern int feupdateenv (void);
#ifdef __cplusplus
}
#endif
#endif
