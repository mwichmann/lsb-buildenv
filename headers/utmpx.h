#ifndef _UTMPX_H_
#define _UTMPX_H_


#ifdef __cplusplus
extern "C"
{
#endif


  extern void endutxent (void);
  extern getutxent (void);
  extern getutxid (void);
  extern getutxline (void);
  extern pututxline (void);
  extern void setutxent (void);
#ifdef __cplusplus
}
#endif
#endif
