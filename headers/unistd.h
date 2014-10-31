#if (__LSB_VERSION__ >= 10 )
#ifndef _UNISTD_H_
#define _UNISTD_H_

#include <sys/types.h>
#include <stddef.h>
#include <stdint.h>
#include <lsb/types.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#ifndef SEEK_SET
#define SEEK_SET	0
#endif
#define STDIN_FILENO	0
#ifndef SEEK_CUR
#define SEEK_CUR	1
#endif
#define STDOUT_FILENO	1
#ifndef SEEK_END
#define SEEK_END	2
#endif
#define STDERR_FILENO	2
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Values for the second argument to access.*/
#if __LSB_VERSION__ >= 11
#define F_OK	0
#define X_OK	1
#define W_OK	2
#define R_OK	4
#endif				/* __LSB_VERSION__ >= 1.1 */




#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 50
#define _POSIX2_VERSION	200112L
#define _POSIX_FSYNC	200112L
#define _POSIX_MAPPED_FILES	200112L
#define _POSIX_MEMLOCK	200112L
#define _POSIX_MEMLOCK_RANGE	200112L
#define _POSIX_MEMORY_PROTECTION	200112L
#define _POSIX_SEMAPHORES	200112L
#define _POSIX_SHARED_MEMORY_OBJECTS	200112L
#define _POSIX_THREAD_PROCESS_SHARED	200112L
#define _POSIX_TIMERS	200112L
#define _POSIX_VERSION	200112L
#endif				/* __LSB_VERSION__ < 5.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#define _POSIX_VDISABLE	'\0'
#define _POSIX_CHOWN_RESTRICTED	1
#define _POSIX_NO_TRUNC	1
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#define _POSIX_JOB_CONTROL	1
#define _POSIX_SHELL	1
#if __LSB_VERSION__ < 50
#define _POSIX2_C_BIND	200112L
#define _POSIX_THREADS	200112L
#endif				/* __LSB_VERSION__ < 5.0 */

#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 41
#if __LSB_VERSION__ < 50
#define _POSIX_PRIORITY_SCHEDULING	200112L
#endif				/* __LSB_VERSION__ < 5.0 */

#endif				/* __LSB_VERSION__ >= 4.1 */

#if __LSB_VERSION__ >= 50
#define _POSIX_ASYNC_IO	0
#define _POSIX2_CHAR_TERM	200809L
#define _POSIX2_C_BIND	200809L
#define _POSIX2_LOCALEDEF	200809L
#define _POSIX2_VERSION	200809L
#define _POSIX_ADVISORY_INFO	200809L
#define _POSIX_BARRIERS	200809L
#define _POSIX_CLOCK_SELECTION	200809L
#define _POSIX_FSYNC	200809L
#define _POSIX_IPV6	200809L
#define _POSIX_MAPPED_FILES	200809L
#define _POSIX_MEMLOCK	200809L
#define _POSIX_MEMLOCK_RANGE	200809L
#define _POSIX_MEMORY_PROTECTION	200809L
#define _POSIX_MESSAGE_PASSING	200809L
#define _POSIX_PRIORITIZED_IO	200809L
#define _POSIX_PRIORITY_SCHEDULING	200809L
#define _POSIX_RAW_SOCKETS	200809L
#define _POSIX_READER_WRITER_LOCKS	200809L
#define _POSIX_REALTIME_SIGNALS	200809L
#define _POSIX_SEMAPHORES	200809L
#define _POSIX_SHARED_MEMORY_OBJECTS	200809L
#define _POSIX_SPAWN	200809L
#define _POSIX_SPIN_LOCKS	200809L
#define _POSIX_SYNCHRONIZED_IO	200809L
#define _POSIX_THREADS	200809L
#define _POSIX_THREAD_ATTR_STACKADDR	200809L
#define _POSIX_THREAD_ATTR_STACKSIZE	200809L
#define _POSIX_THREAD_PRIORITY_SCHEDULING	200809L
#define _POSIX_THREAD_PRIO_INHERIT	200809L
#define _POSIX_THREAD_PRIO_PROTECT	200809L
#define _POSIX_THREAD_PROCESS_SHARED	200809L
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT	200809L
#define _POSIX_THREAD_SAFE_FUNCTIONS	200809L
#define _POSIX_TIMEOUTS	200809L
#define _POSIX_TIMERS	200809L
#define _POSIX_VERSION	200809L
#endif				/* __LSB_VERSION__ >= 5.0 */




/* `pathconf' NAME values.*/
#if __LSB_VERSION__ >= 12
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
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#define _PC_REC_INCR_XFER_SIZE	14
#define _PC_REC_MIN_XFER_SIZE	16
#define _PC_REC_XFER_ALIGN	17
#define _PC_ALLOC_SIZE_MIN	18
#define _PC_2_SYMLINKS	20
#endif				/* __LSB_VERSION__ >= 2.0 */




/* `sysconf' NAME values.*/
#if __LSB_VERSION__ >= 11
#define _SC_CLK_TCK	2
#define _SC_OPEN_MAX	4
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
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
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#define _SC_XOPEN_REALTIME_THREADS	131
#define _SC_ADVISORY_INFO	132
#define _SC_BARRIERS	133
#define _SC_CLOCK_SELECTION	137
#define _SC_CPUTIME	138
#define _SC_THREAD_CPUTIME	139
#define _SC_MONOTONIC_CLOCK	149
#define _SC_FSYNC	15
#define _SC_READER_WRITER_LOCKS	153
#define _SC_SPIN_LOCKS	154
#define _SC_REGEXP	155
#define _SC_SHELL	157
#define _SC_SPAWN	159
#define _SC_SPORADIC_SERVER	160
#define _SC_THREAD_SPORADIC_SERVER	161
#define _SC_TIMEOUTS	164
#define _SC_TYPED_MEMORY_OBJECTS	165
#define _SC_2_PBS_ACCOUNTING	169
#define _SC_2_PBS_LOCATE	170
#define _SC_2_PBS_MESSAGE	171
#define _SC_2_PBS_TRACK	172
#define _SC_SYMLOOP_MAX	173
#define _SC_2_PBS_CHECKPOINT	175
#define _SC_V6_ILP32_OFF32	176
#define _SC_V6_ILP32_OFFBIG	177
#define _SC_V6_LP64_OFF64	178
#define _SC_V6_LPBIG_OFFBIG	179
#define _SC_HOST_NAME_MAX	180
#define _SC_TRACE	181
#define _SC_TRACE_EVENT_FILTER	182
#define _SC_TRACE_INHERIT	183
#define _SC_TRACE_LOG	184
#define _SC_PAGE_SIZE	30
#define _SC_IOV_MAX	60
#define _SC_GETGR_R_SIZE_MAX	69
#define _SC_GETPW_R_SIZE_MAX	70
#define _SC_LOGIN_NAME_MAX	71
#define _SC_TTY_NAME_MAX	72
#define _SC_ATEXIT_MAX	87
#define _SC_XOPEN_UNIX	91
#define _SC_2_CHAR_TERM	95
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 32
#define _SC_XOPEN_XPG4	100
#define _SC_CHAR_BIT	101
#define _SC_CHAR_MAX	102
#define _SC_CHAR_MIN	103
#define _SC_INT_MAX	104
#define _SC_INT_MIN	105
#define _SC_LONG_BIT	106
#define _SC_WORD_BIT	107
#define _SC_MB_LEN_MAX	108
#define _SC_NZERO	109
#define _SC_SSIZE_MAX	110
#define _SC_SCHAR_MAX	111
#define _SC_SCHAR_MIN	112
#define _SC_SHRT_MAX	113
#define _SC_SHRT_MIN	114
#define _SC_UCHAR_MAX	115
#define _SC_UINT_MAX	116
#define _SC_ULONG_MAX	117
#define _SC_USHRT_MAX	118
#define _SC_NL_ARGMAX	119
#define _SC_NL_LANGMAX	120
#define _SC_NL_MSGMAX	121
#define _SC_NL_NMAX	122
#define _SC_NL_SETMAX	123
#define _SC_NL_TEXTMAX	124
#define _SC_BASE	134
#define _SC_C_LANG_SUPPORT	135
#define _SC_C_LANG_SUPPORT_R	136
#define _SC_DEVICE_IO	140
#define _SC_DEVICE_SPECIFIC	141
#define _SC_DEVICE_SPECIFIC_R	142
#define _SC_FD_MGMT	143
#define _SC_FIFO	144
#define _SC_PIPE	145
#define _SC_FILE_ATTRIBUTES	146
#define _SC_FILE_LOCKING	147
#define _SC_FILE_SYSTEM	148
#define _SC_MULTI_PROCESS	150
#define _SC_SINGLE_PROCESS	151
#define _SC_NETWORKING	152
#define _SC_REGEX_VERSION	156
#define _SC_SIGNALS	158
#define _SC_SYSTEM_DATABASE	162
#define _SC_SYSTEM_DATABASE_R	163
#define _SC_USER_GROUPS	166
#define _SC_USER_GROUPS_R	167
#define _SC_2_PBS	168
#define _SC_STREAMS	174
#define _SC_LEVEL1_ICACHE_SIZE	185
#define _SC_LEVEL1_ICACHE_ASSOC	186
#define _SC_LEVEL1_ICACHE_LINESIZE	187
#define _SC_LEVEL1_DCACHE_SIZE	188
#define _SC_LEVEL1_DCACHE_ASSOC	189
#define _SC_LEVEL1_DCACHE_LINESIZE	190
#define _SC_LEVEL2_CACHE_SIZE	191
#define _SC_LEVEL2_CACHE_ASSOC	192
#define _SC_LEVEL2_CACHE_LINESIZE	193
#define _SC_LEVEL3_CACHE_SIZE	194
#define _SC_LEVEL3_CACHE_ASSOC	195
#define _SC_LEVEL3_CACHE_LINESIZE	196
#define _SC_LEVEL4_CACHE_SIZE	197
#define _SC_LEVEL4_CACHE_ASSOC	198
#define _SC_LEVEL4_CACHE_LINESIZE	199
#define _SC_IPV6	235
#define _SC_RAW_SOCKETS	236
#define _SC_EQUIV_CLASS_MAX	41
#define _SC_CHARCLASS_NAME_MAX	45
#define _SC_PII	53
#define _SC_PII_XTI	54
#define _SC_PII_SOCKET	55
#define _SC_PII_INTERNET	56
#define _SC_PII_OSI	57
#define _SC_POLL	58
#define _SC_SELECT	59
#define _SC_UIO_MAXIOV	60
#define _SC_PII_INTERNET_STREAM	61
#define _SC_PII_INTERNET_DGRAM	62
#define _SC_PII_OSI_COTS	63
#define _SC_PII_OSI_CLTS	64
#define _SC_PII_OSI_M	65
#define _SC_T_IOV_MAX	66
#define _SC_NPROCESSORS_CONF	83
#define _SC_NPROCESSORS_ONLN	84
#define _SC_PHYS_PAGES	85
#define _SC_AVPHYS_PAGES	86
#define _SC_XOPEN_XCU_VERSION	90
#define _SC_XOPEN_XPG2	98
#define _SC_XOPEN_XPG3	99
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 50
#define _SC_V7_ILP32_OFF32	237
#define _SC_V7_ILP32_OFFBIG	238
#define _SC_V7_LP64_OFF64	239
#define _SC_V7_LPBIG_OFFBIG	240
#define _SC_SS_REPL_MAX	241
#define _SC_TRACE_EVENT_NAME_MAX	242
#define _SC_TRACE_NAME_MAX	243
#define _SC_TRACE_SYS_MAX	244
#define _SC_TRACE_USER_EVENT_MAX	245
#define _SC_XOPEN_STREAMS	246
#define _SC_THREAD_ROBUST_PRIO_INHERIT	247
#define _SC_THREAD_ROBUST_PRIO_PROTECT	248
#endif				/* __LSB_VERSION__ >= 5.0 */




/* `confstr' NAME values.*/
#if __LSB_VERSION__ >= 12
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
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#define _POSIX_REGEXP	1
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 50
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS	1116
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS	1117
#define _CS_POSIX_V6_ILP32_OFF32_LIBS	1118
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS	1119
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS	1120
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS	1121
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS	1122
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS	1123
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS	1124
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS	1125
#define _CS_POSIX_V6_LP64_OFF64_LIBS	1126
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS	1127
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS	1128
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS	1129
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS	1130
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS	1131
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS	1132
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS	1133
#define _CS_POSIX_V7_ILP32_OFF32_LIBS	1134
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS	1135
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS	1136
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS	1137
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS	1138
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS	1139
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS	1140
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS	1141
#define _CS_POSIX_V7_LP64_OFF64_LIBS	1142
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS	1143
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS	1144
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS	1145
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS	1146
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS	1147
#define _CS_V6_ENV	1148
#define _CS_V7_ENV	1149
#endif				/* __LSB_VERSION__ >= 5.0 */




#if __LSB_VERSION__ >= 12
#define _XOPEN_XPG4	1
#if __LSB_VERSION__ < 50
#define _XOPEN_VERSION	500
#endif				/* __LSB_VERSION__ < 5.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 50
#define _XOPEN_VERSION	700
#endif				/* __LSB_VERSION__ >= 5.0 */




/* Flags for lockf()*/
#if __LSB_VERSION__ >= 20
#define F_ULOCK	0
#define F_LOCK	1
#define F_TLOCK	2
#define F_TEST	3
#endif				/* __LSB_VERSION__ >= 2.0 */




/* Function prototypes */

    extern char **__environ;
    extern pid_t __getpgid(pid_t __pid);
    extern char **_environ;
    extern void _exit(int __status);
    extern int access(const char *__name, int __type);
    extern int acct(const char *__name);
    extern unsigned int alarm(unsigned int __seconds);
    extern int brk(void *__addr);
    extern int chdir(const char *__path);
    extern int chown(const char *__file, uid_t __owner, gid_t __group);
    extern int chroot(const char *__path);
    extern int close(int __fd);
    extern size_t confstr(int __name, char *__buf, size_t __len);
    extern char *crypt(const char *__key, const char *__salt);
    extern char *ctermid(char *__s);
    extern char *cuserid(char *__s);
    extern int daemon(int __nochdir, int __noclose);
    extern int dup(int __fd);
    extern int dup2(int __fd, int __fd2);
    extern void encrypt(char *__block, int __edflag);
    extern int execl(const char *__path, const char *__arg, ...);
    extern int execle(const char *__path, const char *__arg, ...);
    extern int execlp(const char *__file, const char *__arg, ...);
    extern int execv(const char *__path, char *const __argv[]);
    extern int execve(const char *__path, char *const __argv[],
		      char *const __envp[]);
    extern int execvp(const char *__file, char *const __argv[]);
    extern int fchdir(int __fd);
    extern int fchown(int __fd, uid_t __owner, gid_t __group);
    extern int fdatasync(int __fildes);
    extern pid_t fork(void);
    extern long int fpathconf(int __fd, int __name);
    extern int fsync(int __fd);
    extern int ftruncate(int __fd, off_t __length);
    extern int ftruncate64(int __fd, off64_t __length);
    extern char *getcwd(char *__buf, size_t __size);
    extern gid_t getegid(void);
    extern uid_t geteuid(void);
    extern gid_t getgid(void);
    extern int getgroups(int __size, gid_t __list[]);
    extern long int gethostid(void);
    extern int gethostname(char *__name, size_t __len);
    extern char *getlogin(void);
    extern int getopt(int ___argc, char *const ___argv[],
		      const char *__shortopts);
    /* This interface is deprecated. Use sysconf(_SC_GET_PAGE_SIZE) instead */
    extern int getpagesize(void)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern pid_t getpgid(pid_t __pid);
    extern pid_t getpgrp(void);
    extern pid_t getpid(void);
    extern pid_t getppid(void);
    extern pid_t getsid(pid_t __pid);
    extern uid_t getuid(void);
    /* This interface is obsolete. Use the getcwd function. */
    extern char *getwd(char *__buf)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern int isatty(int __fd);
    extern int lchown(const char *__file, uid_t __owner, gid_t __group);
    extern int link(const char *__from, const char *__to);
    extern int lockf(int __fd, int __cmd, off_t __len);
    extern int lockf64(int __fd, int __cmd, off64_t __len);
    extern off_t lseek(int __fd, off_t __offset, int __whence);
    extern loff_t lseek64(int __fd, loff_t __offset, int __whence);
    extern int nice(int __inc);
    extern char *optarg;
    extern int opterr;
    extern int optind;
    extern int optopt;
    extern long int pathconf(const char *__path, int __name);
    extern int pause(void);
    extern int pipe(int __pipedes[2]);
    extern ssize_t pread(int __fd, void *__buf, size_t __nbytes,
			 off_t __offset);
    extern ssize_t pwrite(int __fd, const void *__buf, size_t __n,
			  off_t __offset);
    extern ssize_t pwrite64(int __fd, const void *__buf, size_t __n,
			    off64_t __offset);
    extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
    extern ssize_t readlink(const char *__path, char *__buf, size_t __len);
    extern int rmdir(const char *__path);
    extern void *sbrk(intptr_t __delta);
    extern int setegid(gid_t __gid);
    extern int seteuid(uid_t __uid);
    extern int setgid(gid_t __gid);
    extern int sethostname(const char *__name, size_t __len);
    extern void setkey(const char *__key);
    extern int setpgid(pid_t __pid, pid_t __pgid);
    extern int setpgrp(void);
    extern int setregid(gid_t __rgid, gid_t __egid);
    extern int setreuid(uid_t __ruid, uid_t __euid);
    extern pid_t setsid(void);
    extern int setuid(uid_t __uid);
    extern unsigned int sleep(unsigned int __seconds);
    extern void swab(const void *__from, void *__to, ssize_t __n);
    extern int symlink(const char *__from, const char *__to);
    extern void sync(void);
    extern long int sysconf(int __name);
    extern pid_t tcgetpgrp(int __fd);
    extern int tcsetpgrp(int __fd, pid_t __pgrp_id);
    extern int truncate(const char *__file, off_t __length);
    extern int truncate64(const char *__file, off64_t __length);
    extern char *ttyname(int __fd);
    extern int ttyname_r(int __fd, char *__buf, size_t __buflen);
    extern unsigned int ualarm(useconds_t __value, useconds_t __interval);
    extern int unlink(const char *__name);
    extern int usleep(useconds_t __useconds);
    extern pid_t vfork(void);
    extern ssize_t write(int __fd, const void *__buf, size_t __n);
#if __LSB_VERSION__ >= 11
    extern ssize_t pread64(int __fd, void *__buf, size_t __nbytes,
			   off64_t __offset);
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 30
    extern int getlogin_r(char *__name, size_t __name_len);
#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 32
    /* This function is essentially useless. The NIS domain name returned by it is not the same as the domain portion of a fully qualified domain name (for example, in DNS) and can be unspecified. In addition, even if the the value returned is not equal to "(none)", the application should not imply that NIS is in use. */
    extern int getdomainname(char *__name,
			     size_t __len) LSB_DECL_DEPRECATED;
    /* This interface is deprecated. Use sysconf(_SC_OPEN_MAX) instead. */
    extern int getdtablesize(void) LSB_DECL_DEPRECATED;
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
    extern size_t __confstr_chk(int, char *, size_t, size_t);
    extern char *__getcwd_chk(char *, size_t, size_t);
    extern int __getgroups_chk(int, gid_t *, size_t);
    extern int __gethostname_chk(char *, size_t, size_t);
    extern int __getlogin_r_chk(char *, size_t, size_t);
    extern ssize_t __pread64_chk(int, void *, size_t, off64_t, size_t);
    extern ssize_t __pread_chk(int, void *, size_t, off_t, size_t);
    extern ssize_t __read_chk(int, void *, size_t, size_t);
    extern ssize_t __readlink_chk(const char *, char *, size_t, size_t);
    extern int __ttyname_r_chk(int, char *, size_t, size_t);
    extern int faccessat(int __fd, const char *__file, int __type,
			 int __flag);
    extern int fchownat(int __fd, const char *__file, uid_t __owner,
			gid_t __group, int __flag);
    extern int fexecve(int __fd, char *const __argv[],
		       char *const __envp[]);
    extern int linkat(int __fromfd, const char *__from, int __tofd,
		      const char *__to, int __flags);
    extern ssize_t readlinkat(int __fd, const char *__path, char *__buf,
			      size_t __len);
    extern int symlinkat(const char *__from, int __tofd, const char *__to);
    extern int unlinkat(int __fd, const char *__name, int __flag);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
