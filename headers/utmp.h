#ifndef _UTMP_H_
#define _UTMP_H_

#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define UT_HOSTSIZE	256
#define UT_LINESIZE	32
#define UT_NAMESIZE	32
#define ut_addr	ut_addr_v6[0]
#define ut_time	ut_tv.tv_sec
#define ut_name	ut_user


  struct exit_status
  {
    short e_termination;	/* Process termination status. */
    short e_exit;		/* Process exit status. */
  }
   ;

#if __i386__
/* IA32 */
  struct lastlog
  {
    time_t ll_time;
    char ll_line[UT_LINESIZE];
    char ll_host[UT_HOSTSIZE];
  }
   ;

#endif
#if __ia64__
/* IA64 */
  struct lastlog
  {
    time_t ll_time;
    char ll_line[UT_LINESIZE];
    char ll_host[UT_HOSTSIZE];
  }
   ;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  struct lastlog
  {
    time_t ll_time;
    char ll_line[UT_LINESIZE];
    char ll_host[UT_HOSTSIZE];
  }
   ;

#endif
#if __powerpc64__
/* PPC64 */
  struct lastlog
  {
    int32_t ll_time;
    char ll_line[UT_LINESIZE];
    char ll_host[UT_HOSTSIZE];
  }
   ;

#endif
#if __s390__ && !__s390x__
/* S390 */
  struct lastlog
  {
    time_t ll_time;
    char ll_line[UT_LINESIZE];
    char ll_host[UT_HOSTSIZE];
  }
   ;

#endif
#if __x86_64__
/* x86-64 */
  struct lastlog
  {
    int32_t ll_time;
    char ll_line[UT_LINESIZE];
    char ll_host[UT_HOSTSIZE];
  }
   ;

#endif
#if __s390x__
/* S390X */
  struct lastlog
  {
    time_t ll_time;
    char ll_line[UT_LINESIZE];
    char ll_host[UT_HOSTSIZE];
  }
   ;

#endif

/* The structure describing an entry in the user accounting database.*/


#if __i386__
/* IA32 */
  struct utmp
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

#endif
#if __ia64__
/* IA64 */
  struct utmp
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

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  struct utmp
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

#endif
#if __powerpc64__
/* PPC64 */
  struct utmp
  {
    short ut_type;		/* Type of login. */
    pid_t ut_pid;		/* Process ID of login process. */
    char ut_line[UT_LINESIZE];	/* Devicename. */
    char ut_id[4];		/* Inittab ID. */
    char ut_user[UT_NAMESIZE];	/* Username. */
    char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
    struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
    int32_t ut_session;		/* Session ID, used for windowing. */
    struct
    {
      int32_t tv_sec;
      int32_t tv_usec;
    }
    ut_tv;			/* Time entry was made. */
    int32_t ut_addr_v6[4];	/* Internet address of remote host. */
    char __unused[20];		/* Reserved for future use. */
  }
   ;

#endif
#if __s390__ && !__s390x__
/* S390 */
  struct utmp
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

#endif
#if __x86_64__
/* x86-64 */
  struct utmp
  {
    short ut_type;		/* Type of login. */
    pid_t ut_pid;		/* Process ID of login process. */
    char ut_line[UT_LINESIZE];	/* Devicename. */
    char ut_id[4];		/* Inittab ID. */
    char ut_user[UT_NAMESIZE];	/* Username. */
    char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
    struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
    int ut_session;		/* Session ID, used for windowing. */
    struct
    {
      int32_t tv_sec;
      int32_t tv_usec;
    }
    ut_tv;			/* Time entry was made. */
    int32_t ut_addr_v6[4];	/* Internet address of remote host. */
    char __unused[20];		/* Reserved for future use. */
  }
   ;

#endif
#if __s390x__
/* S390X */
  struct utmp
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

#endif

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
  extern int getutent_r (struct utmp *, struct utmp **);
  extern int login_tty (int);
  extern void login (const struct utmp *);
  extern int logout (const char *);
  extern void logwtmp (const char *, const char *, const char *);
#ifdef __cplusplus
}
#endif
#endif
