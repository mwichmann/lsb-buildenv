#ifndef _UTMPX_H_
#define _UTMPX_H_

#include <sys/types.h>
#include <sys/time.h>
#include <utmp.h>

#ifdef __cplusplus
extern "C"
{
#endif










  struct utmpx
  {
    short ut_type;		/* Type of login. */
    pid_t ut_pid;		/* Process ID of login process. */
    char ut_line[UT_LINESIZE];	/* Devicename. */
    char ut_id[4];		/* Inittab ID. */
    char ut_user[UT_NAMESIZE];	/* Username. */
    char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
    struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
    long ut_session;		/* Session ID, used for windowing. */
    struct timeval ut_tv;	/* Time entry was made. */
    int32_t ut_addr_v6[4];	/* Internet address of remote host. */
    char __unused[20];		/* Reserved for future use. */
  }
   ;





  extern void endutxent (void);
  extern struct utmpx *getutxent (void);
  extern struct utmpx *getutxid (const struct utmpx *);
  extern struct utmpx *getutxline (const struct utmpx *);
  extern struct utmpx *pututxline (const struct utmpx *);
  extern void setutxent (void);
#ifdef __cplusplus
}
#endif
#endif
