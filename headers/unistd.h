#ifndef _UNISTD_H_
#define _UNISTD_H_

#include <stddef.h>
#include <sys/types.h>
#include <sys/time.h>

#define STDIN_FILENO	0
#define SEEK_SET	0
#define STDOUT_FILENO	1
#define SEEK_CUR	1
#define SEEK_END	2
#define STDERR_FILENO	2


typedef long long off64_t;

typedef int *intptr_t;


/* Values for the second argument to access.*/
#define F_OK	0
#define X_OK	1
#define W_OK	2
#define R_OK	4



#define _POSIX_MESSAGE_PASSING	1
#define _POSIX_SHARED_MEMORY_OBJECTS	1
#define _POSIX_MEMLOCK	1
#define _POSIX_PRIORITY_SCHEDULING	1
#define _POSIX_SYNCHRONIZED_IO	1
#define _POSIX_MAPPED_FILES	1
#define _POSIX_MEMLOCK_RANGE	1
#define _POSIX_REALTIME_SIGNALS	1
#define _POSIX_TIMERS	1
#define _POSIX_ASYNCHRONOUS_IO	1
#define _POSIX_MEMORY_PROTECTION	1
#define _POSIX_SEMAPHORES	1
#define _POSIX_FSYNC	1
#define _POSIX2_VERSION	199209L
#define _POSIX2_C_VERSION	199209L
#define _POSIX_VERSION	199506L



/* `pathconf' NAME values.*/
#define _PC_LINK_MAX	0
#define _PC_MAX_CANON	1
#define _PC_ASYNC_IO	10
#define _PC_PRIO_IO	11
#define _PC_FILESIZEBITS	13
#define _PC_MAX_INPUT	2
#define _PC_NAME_MAX	3
#define _PC_PATH_MAX	4
#define _PC_PIPE_BUF	5
#define _PC_CHOWN_RESTRICTED	6
#define _PC_NO_TRUNC	7
#define _PC_VDISABLE	8
#define _PC_SYNC_IO	9



/* `sysconf' NAME values.*/
#define _SC_ARG_MAX	0
#define _SC_CHILD_MAX	1
#define _SC_PRIORITY_SCHEDULING	10
#define _SC_TIMERS	11
#define _SC_ASYNCHRONOUS_IO	12
#define _SC_XBS5_ILP32_OFF32	125
#define _SC_XBS5_ILP32_OFFBIG	126
#define _SC_XBS5_LP64_OFF64	127
#define _SC_XBS5_LPBIG_OFFBIG	128
#define _SC_XOPEN_LEGACY	129
#define _SC_PRIORITIZED_IO	13
#define _SC_XOPEN_REALTIME	130
#define _SC_SYNCHRONIZED_IO	14
#define _SC_MAPPED_FILES	16
#define _SC_MEMLOCK	17
#define _SC_MEMLOCK_RANGE	18
#define _SC_MEMORY_PROTECTION	19
#define _SC_CLK_TCK	2
#define _SC_MESSAGE_PASSING	20
#define _SC_SEMAPHORES	21
#define _SC_SHARED_MEMORY_OBJECTS	22
#define _SC_AIO_LISTIO_MAX	23
#define _SC_AIO_MAX	24
#define _SC_AIO_PRIO_DELTA_MAX	25
#define _SC_DELAYTIMER_MAX	26
#define _SC_MQ_OPEN_MAX	27
#define _SC_MQ_PRIO_MAX	28
#define _SC_VERSION	29
#define _SC_NGROUPS_MAX	3
#define _SC_PAGESIZE	30
#define _SC_RTSIG_MAX	31
#define _SC_SEM_NSEMS_MAX	32
#define _SC_SEM_VALUE_MAX	33
#define _SC_SIGQUEUE_MAX	34
#define _SC_TIMER_MAX	35
#define _SC_BC_BASE_MAX	36
#define _SC_BC_DIM_MAX	37
#define _SC_BC_SCALE_MAX	38
#define _SC_BC_STRING_MAX	39
#define _SC_OPEN_MAX	4
#define _SC_COLL_WEIGHTS_MAX	40
#define _SC_EXPR_NEST_MAX	42
#define _SC_LINE_MAX	43
#define _SC_RE_DUP_MAX	44
#define _SC_2_VERSION	46
#define _SC_2_C_BIND	47
#define _SC_2_C_DEV	48
#define _SC_2_FORT_DEV	49
#define _SC_STREAM_MAX	5
#define _SC_2_FORT_RUN	50
#define _SC_2_SW_DEV	51
#define _SC_2_LOCALEDEF	52
#define _SC_TZNAME_MAX	6
#define _SC_THREADS	67
#define _SC_THREAD_SAFE_FUNCTIONS	68
#define _SC_JOB_CONTROL	7
#define _SC_THREAD_DESTRUCTOR_ITERATIONS	73
#define _SC_THREAD_KEYS_MAX	74
#define _SC_THREAD_STACK_MIN	75
#define _SC_THREAD_THREADS_MAX	76
#define _SC_THREAD_ATTR_STACKADDR	77
#define _SC_THREAD_ATTR_STACKSIZE	78
#define _SC_THREAD_PRIORITY_SCHEDULING	79
#define _SC_SAVED_IDS	8
#define _SC_THREAD_PRIO_INHERIT	80
#define _SC_THREAD_PRIO_PROTECT	81
#define _SC_THREAD_PROCESS_SHARED	82
#define _SC_PASS_MAX	88
#define _SC_XOPEN_VERSION	89
#define _SC_REALTIME_SIGNALS	9
#define _SC_XOPEN_CRYPT	92
#define _SC_XOPEN_ENH_I18N	93
#define _SC_XOPEN_SHM	94
#define _SC_2_C_VERSION	96
#define _SC_2_UPE	97



/* `confstr' NAME values.*/
#define _CS_PATH	0
#define _CS_XBS5_ILP32_OFF32_CFLAGS	1100
#define _CS_XBS5_ILP32_OFF32_LDFLAGS	1101
#define _CS_XBS5_ILP32_OFF32_LIBS	1102
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS	1103
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS	1104
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS	1105
#define _CS_XBS5_ILP32_OFFBIG_LIBS	1106
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS	1107
#define _CS_XBS5_LP64_OFF64_CFLAGS	1108
#define _CS_XBS5_LP64_OFF64_LDFLAGS	1109
#define _CS_XBS5_LP64_OFF64_LIBS	1110
#define _CS_XBS5_LP64_OFF64_LINTFLAGS	1111
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS	1112
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS	1113
#define _CS_XBS5_LPBIG_OFFBIG_LIBS	1114
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS	1115



#define _XOPEN_XPG4	1
#define _XOPEN_REALTIME	1
#define _XOPEN_XCU_VERSION	4
#define _XOPEN_VERSION	500



extern char **__environ;
void _exit (int);
unsigned int alarm (unsigned int);
int chown (char *, uid_t, gid_t);
int chroot (char *);
size_t confstr (void);
int creat (char *, mode_t);
int creat64 (char *, mode_t);
char *ctermid (void);
char *cuserid (void);
int daemon (int, int);
int execl (char *, ...);
int execle (void);
int execlp (char *, char *, ...);
int execv (char *, char *[]);
int execvp (char *, char *[]);
char *getlogin (void);
int getopt (int, char *[], char *);
pid_t getpgrp (void);
int mkstemp (char *);
int nice (int);
extern char *optarg;
extern int opterr;
extern int optind;
extern int optopt;
int rename (char *, char *);
int sethostname (char *, size_t);
int setpgrp (void);
void swab (void *, void *, ssize_t);
int sync (void);
pid_t tcgetpgrp (void);
int tcsetpgrp (void);
char *ttyname (int);
void usleep (unsigned long);
int close (int);
int fsync (int);
off_t lseek (int, off_t, int);
int open (char *, int, ...);
int pause (void);
int read (int, void *, size_t);
int write (int, void *, size_t);
char *crypt (char *, char *);
void encrypt (char, int);
void setkey (char *);
int access (char *, int);
int brk (void *);
int chdir (char *);
int dup (int);
int dup2 (int, int);
int execve (char *, char *[], char *[]);
int fchdir (int);
int fchown (int, uid_t, gid_t);
pid_t fork (void);
gid_t getegid (void);
uid_t geteuid (void);
gid_t getgid (void);
int getgroups (int, gid_t[]);
int gethostname (char *, size_t);
pid_t getpgid (pid_t);
pid_t getpid (void);
uid_t getuid (void);
int lchown (char *, uid_t, gid_t);
int link (char *, char *);
int mkdir (char *, mode_t);
long pathconf (void);
int pipe (int[2]);
int readlink (char *, char *, size_t);
int rmdir (char *);
void *sbrk (ptrdiff_t);
int select (int, fd_set *, fd_set *, fd_set *, struct timeval *);
int setgid (gid_t);
int setpgid (pid_t, pid_t);
int setregid (gid_t, gid_t);
int setreuid (uid_t, uid_t);
pid_t setsid (void);
int setuid (uid_t);
unsigned int sleep (unsigned int);
int symlink (char *, char *);
long sysconf (int);
int unlink (char *);
pid_t vfork (void);
int pread (int, void *, size_t, off_t);
int pwrite (int, void *, size_t, off_t);
extern char **_environ;
long fpathconf (void);
int ftruncate (int, off_t);
char *getcwd (char *, size_t);
size_t getpagesize (void);
pid_t getppid (void);
int isatty (int);
loff_t lseek64 (int, loff_t, int);
int open64 (char *, int, ...);
#endif
