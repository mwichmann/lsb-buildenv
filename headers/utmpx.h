#if (__LSB_VERSION__ >= 12 )
#ifndef _UTMPX_H_
#define _UTMPX_H_

#include <sys/types.h>
#include <utmp.h>
#include <stdint.h>
#include <lsb/time.h>

#ifdef __cplusplus
extern "C" {
#endif




#if __LSB_VERSION__ >= 20
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct utmpx {
	short ut_type;		/* Type of login. */
	pid_t ut_pid;		/* Process ID of login process. */
	char ut_line[UT_LINESIZE];	/* Devicename. */
	char ut_id[4];		/* Inittab ID. */
	char ut_user[UT_NAMESIZE];	/* Username. */
	char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
	struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
	long int ut_session;	/* Session ID, used for windowing. */
	struct timeval ut_tv;	/* Time entry was made. */
	int32_t ut_addr_v6[4];	/* Internet address of remote host. */
	char __unused[20];	/* Reserved for future use. */
    };

#endif
#if defined __ia64__
/* IA64 */
    struct utmpx {
	short ut_type;		/* Type of login. */
	pid_t ut_pid;		/* Process ID of login process. */
	char ut_line[UT_LINESIZE];	/* Devicename. */
	char ut_id[4];		/* Inittab ID. */
	char ut_user[UT_NAMESIZE];	/* Username. */
	char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
	struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
	long int ut_session;	/* Session ID, used for windowing. */
	struct timeval ut_tv;	/* Time entry was made. */
	int32_t ut_addr_v6[4];	/* Internet address of remote host. */
	char __unused[20];	/* Reserved for future use. */
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct utmpx {
	short ut_type;		/* Type of login. */
	pid_t ut_pid;		/* Process ID of login process. */
	char ut_line[UT_LINESIZE];	/* Devicename. */
	char ut_id[4];		/* Inittab ID. */
	char ut_user[UT_NAMESIZE];	/* Username. */
	char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
	struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
	int32_t ut_session;	/* Session ID, used for windowing. */
	struct {
	    int32_t tv_sec;	/* Seconds. */
	    int32_t tv_usec;	/* Microseconds. */
	} ut_tv;		/* Time entry was made. */
	int32_t ut_addr_v6[4];	/* Internet address of remote host. */
	char __unused[20];	/* Reserved for future use. */
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct utmpx {
	short ut_type;		/* Type of login. */
	pid_t ut_pid;		/* Process ID of login process. */
	char ut_line[UT_LINESIZE];	/* Devicename. */
	char ut_id[4];		/* Inittab ID. */
	char ut_user[UT_NAMESIZE];	/* Username. */
	char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
	struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
	long int ut_session;	/* Session ID, used for windowing. */
	struct timeval ut_tv;	/* Time entry was made. */
	int32_t ut_addr_v6[4];	/* Internet address of remote host. */
	char __unused[20];	/* Reserved for future use. */
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct utmpx {
	short ut_type;		/* Type of login. */
	pid_t ut_pid;		/* Process ID of login process. */
	char ut_line[UT_LINESIZE];	/* Devicename. */
	char ut_id[4];		/* Inittab ID. */
	char ut_user[UT_NAMESIZE];	/* Username. */
	char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
	struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
	int32_t ut_session;	/* Session ID, used for windowing. */
	struct {
	    int32_t tv_sec;	/* Seconds. */
	    int32_t tv_usec;	/* Microseconds. */
	} ut_tv;		/* Time entry was made. */
	int32_t ut_addr_v6[4];	/* Internet address of remote host. */
	char __unused[20];	/* Reserved for future use. */
    };

#endif
#if defined __i386__
/* IA32 */
    struct utmpx {
	short ut_type;		/* Type of login. */
	pid_t ut_pid;		/* Process ID of login process. */
	char ut_line[UT_LINESIZE];	/* Devicename. */
	char ut_id[4];		/* Inittab ID. */
	char ut_user[UT_NAMESIZE];	/* Username. */
	char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
	struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
	long int ut_session;	/* Session ID, used for windowing. */
	struct timeval ut_tv;	/* Time entry was made. */
	int32_t ut_addr_v6[4];	/* Internet address of remote host. */
	char __unused[20];	/* Reserved for future use. */
    };

#endif
#if defined __s390x__
/* S390X */
    struct utmpx {
	short ut_type;		/* Type of login. */
	pid_t ut_pid;		/* Process ID of login process. */
	char ut_line[UT_LINESIZE];	/* Devicename. */
	char ut_id[4];		/* Inittab ID. */
	char ut_user[UT_NAMESIZE];	/* Username. */
	char ut_host[UT_HOSTSIZE];	/* Hostname for remote login. */
	struct exit_status ut_exit;	/* Exit status of a process marked as DEAD_PROCESS. */
	long int ut_session;	/* Session ID, used for windowing. */
	struct timeval ut_tv;	/* Time entry was made. */
	int32_t ut_addr_v6[4];	/* Internet address of remote host. */
	char __unused[20];	/* Reserved for future use. */
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */



/* Function prototypes */

    extern void endutxent(void);
    extern struct utmpx *getutxent(void);
    extern struct utmpx *getutxid(const struct utmpx *__id);
    extern struct utmpx *getutxline(const struct utmpx *__line);
    extern struct utmpx *pututxline(const struct utmpx *__utmpx);
    extern void setutxent(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
