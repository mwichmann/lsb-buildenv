#ifndef _UTMP_H_
#define _UTMP_H_

#include <sys/types.h>
#include <sys/time.h>

#define UT_HOSTSIZE	256
#define UT_LINESIZE	32
#define UT_NAMESIZE	32
#define ut_addr	ut_addr_v6[0]
#define ut_time	ut_tv.tv_sec
#define ut_name	ut_user


struct exit_status
{
  short e_termination;		/* Process termination status. */
  short e_exit;			/* Process exit status. */
}
 ;

struct lastlog
{
  timer_t ll_time;
  char ll_line[UT_LINESIZE];
  char ll_host[UT_HOSTSIZE];
}
 ;


/* The structure describing an entry in the user accounting database.*/


struct utmp
{
  short ut_type;		/* Type of login. */
  pid_t ut_pid;			/* Process ID of login process. */
  char ut_line[UT_LINESIZE];	/* Devicename. */
  char ut_id[4];		/* Inittab ID. */
  char ut_user[UT_NAMESIZE];	/* Username. */
  char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
  struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
  long ut_session;		/* Session ID, used for windowing. */
  struct timeval ut_tv;		/* Time entry was made. */
  int32_t ut_addr_v6[4];	/* Internet address of remote host. */
  char __unused[20];		/* Reserved for future use. */
}
 ;


/* Values for the `ut_type' field of a `struct utmp'.*/
#define EMPTY	0
#define RUN_LVL	1
#define BOOT_TIME	2
#define NEW_TIME	3
#define OLD_TIME	4
#define INIT_PROCESS	5
#define LOGIN_PROCESS	6
#define USER_PROCESS	7
#define DEAD_PROCESS	8
#define ACCOUNTING	9



extern void endutent (void);
extern struct utmp *getutent (void);
extern void setutent (void);
extern struct utmp *getutent_r (void);
#endif