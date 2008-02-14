#ifndef _LIMITS_H_
#define _LIMITS_H_


#ifdef __cplusplus
extern "C" {
#endif


#define LLONG_MIN	(-LLONG_MAX-1LL)
#if defined __ia64__
#define LONG_MAX	0x7FFFFFFFFFFFFFFFL
#endif
#if defined __x86_64__
#define LONG_MAX	0x7FFFFFFFFFFFFFFFL
#endif
#if defined __i386__
#define LONG_MAX	0x7FFFFFFFL
#endif
#if defined __ia64__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined __powerpc64__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined __x86_64__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined __s390x__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined __i386__
#define ULONG_MAX	0xFFFFFFFFUL
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define ULONG_MAX	0xFFFFFFFFUL
#endif
#if defined __s390__ && !defined __s390x__
#define ULONG_MAX	0xFFFFFFFFUL
#endif
#define _POSIX_AIO_MAX	1
#define _POSIX_QLIMIT	1
#define _POSIX2_BC_STRING_MAX	1000
#define _POSIX2_CHARCLASS_NAME_MAX	14
#define _POSIX_NAME_MAX	14
#define _POSIX_UIO_MAXIOV	16
#define ULLONG_MAX	18446744073709551615ULL
#define _POSIX2_COLL_WEIGHTS_MAX	2
#define _POSIX_AIO_LISTIO_MAX	2
#define _POSIX_OPEN_MAX	20
#define _POSIX_CLOCKRES_MIN	20000000
#define CHARCLASS_NAME_MAX	2048
#define LINE_MAX	2048
#define _POSIX2_BC_DIM_MAX	2048
#define _POSIX2_LINE_MAX	2048
#if defined __s390__ && !defined __s390x__
#define LONG_MAX	2147483647
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define LONG_MAX	2147483647L
#endif
#define _POSIX_CHILD_MAX	25
#define COLL_WEIGHTS_MAX	255
#define _POSIX2_RE_DUP_MAX	255
#define _POSIX_HOST_NAME_MAX	255
#define _POSIX_MAX_CANON	255
#define _POSIX_MAX_INPUT	255
#define _POSIX_RE_DUP_MAX	255
#define _POSIX_SYMLINK_MAX	255
#define OPEN_MAX	256
#define _POSIX_PATH_MAX	256
#define _POSIX_SEM_NSEMS_MAX	256
#define NGROUPS_MAX	32
#define _POSIX2_EXPR_NEST_MAX	32
#define _POSIX_DELAYTIMER_MAX	32
#define _POSIX_MQ_PRIO_MAX	32
#define _POSIX_SIGQUEUE_MAX	32
#define _POSIX_TIMER_MAX	32
#define _POSIX_SEM_VALUE_MAX	32767
#define _POSIX_SSIZE_MAX	32767
#define PATH_MAX	4096
#define _POSIX_ARG_MAX	4096
#define _POSIX_PIPE_BUF	512
#define _POSIX_TZNAME_MAX	6
#define _POSIX_LINK_MAX	8
#define _POSIX_MQ_OPEN_MAX	8
#define _POSIX_NGROUPS_MAX	8
#define _POSIX_RTSIG_MAX	8
#define _POSIX_STREAM_MAX	8
#define _POSIX_SYMLOOP_MAX	8
#define _POSIX_LOGIN_NAME_MAX	9
#define _POSIX_TTY_NAME_MAX	9
#if defined __powerpc64__
#define LONG_MAX	9223372036854775807L
#endif
#if defined __s390x__
#define LONG_MAX	9223372036854775807L
#endif
#define LLONG_MAX	9223372036854775807LL
#define _POSIX2_BC_BASE_MAX	99
#define _POSIX2_BC_SCALE_MAX	99
#define SSIZE_MAX	LONG_MAX	/* Maximum value of an object of type ssize_t */
#define BC_BASE_MAX	_POSIX2_BC_BASE_MAX
#define BC_DIM_MAX	_POSIX2_BC_DIM_MAX
#define BC_SCALE_MAX	_POSIX2_BC_SCALE_MAX
#define BC_STRING_MAX	_POSIX2_BC_STRING_MAX
#define EXPR_NEST_MAX	_POSIX2_EXPR_NEST_MAX
#define _POSIX_FD_SETSIZE	_POSIX_OPEN_MAX
#define _POSIX_HIWAT	_POSIX_PIPE_BUF



/* Maximum length of any multibyte character in any locale.*/
#define MB_LEN_MAX	16



/* Number of bits in a `char'.*/
#define SCHAR_MIN	(-128)
#if defined __powerpc__ && !defined __powerpc64__
#define CHAR_MIN	0
#endif
#if defined __powerpc64__
#define CHAR_MIN	0
#endif
#if defined __s390__ && !defined __s390x__
#define CHAR_MIN	0
#endif
#if defined __s390x__
#define CHAR_MIN	0
#endif
#if defined __x86_64__
#define CHAR_MAX	127
#endif
#define SCHAR_MAX	127
#if defined __powerpc__ && !defined __powerpc64__
#define CHAR_MAX	255
#endif
#if defined __powerpc64__
#define CHAR_MAX	255
#endif
#if defined __s390__ && !defined __s390x__
#define CHAR_MAX	255
#endif
#if defined __s390x__
#define CHAR_MAX	255
#endif
#define UCHAR_MAX	255
#define CHAR_BIT	8
#if defined __i386__
#define CHAR_MAX	SCHAR_MAX
#endif
#if defined __ia64__
#define CHAR_MAX	SCHAR_MAX
#endif
#if defined __i386__
#define CHAR_MIN	SCHAR_MIN
#endif
#if defined __ia64__
#define CHAR_MIN	SCHAR_MIN
#endif
#if defined __x86_64__
#define CHAR_MIN	SCHAR_MIN
#endif



/* Minimum and maximum values a `signed short int' can hold.*/
#define SHRT_MIN	(-32768)
#define SHRT_MAX	32767
#define USHRT_MAX	65535



/* Minimum and maximum values a `int' can hold.*/
#define INT_MIN	(-INT_MAX-1)
#define INT_MAX	2147483647
#define UINT_MAX	4294967295U



/* Minimum and maximum values a `long int' can hold.*/
#define LONG_MIN	(-LONG_MAX-1L)



/* POSIX Threads values*/
#define PTHREAD_KEYS_MAX	1024
#if defined __i386__
#define PTHREAD_STACK_MIN	16384
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define PTHREAD_STACK_MIN	16384
#endif
#if defined __powerpc64__
#define PTHREAD_STACK_MIN	16384
#endif
#if defined __s390__ && !defined __s390x__
#define PTHREAD_STACK_MIN	16384
#endif
#if defined __x86_64__
#define PTHREAD_STACK_MIN	16384
#endif
#if defined __s390x__
#define PTHREAD_STACK_MIN	16384
#endif
#define PTHREAD_THREADS_MAX	16384
#if defined __ia64__
#define PTHREAD_STACK_MIN	196608
#endif
#define PTHREAD_DESTRUCTOR_ITERATIONS	4


#ifdef __cplusplus
}
#endif
#endif
