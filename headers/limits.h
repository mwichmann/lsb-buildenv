#if (__LSB_VERSION__ >= 10 )
#ifndef _LIMITS_H_
#define _LIMITS_H_


#ifdef __cplusplus
extern "C" {
#endif


#define NGROUPS_MAX	32
#if __LSB_VERSION__ >= 11
#if defined __i386__
#define LONG_MAX	0x7FFFFFFFL
#endif
#if defined __i386__
#define ULONG_MAX	0xFFFFFFFFUL
#endif
#define PATH_MAX	4096
#if __LSB_VERSION__ < 40
#define OPEN_MAX	256
#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
#define ULONG_MAX	0xFFFFFFFFUL
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define LONG_MAX	2147483647L
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define LONG_MAX	0x7FFFFFFFFFFFFFFFL
#endif
#if defined __ia64__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined __s390x__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined __s390__ && !defined __s390x__
#define ULONG_MAX	0xFFFFFFFFUL
#endif
#if defined __s390__ && !defined __s390x__
#define LONG_MAX	2147483647
#endif
#if defined __s390x__
#define LONG_MAX	9223372036854775807L
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#define LLONG_MIN	(-LLONG_MAX-1LL)
#if defined __x86_64__
#define LONG_MAX	0x7FFFFFFFFFFFFFFFL
#endif
#if defined __powerpc64__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined __x86_64__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#define ULLONG_MAX	18446744073709551615ULL
#if defined __powerpc64__
#define LONG_MAX	9223372036854775807L
#endif
#define LLONG_MAX	9223372036854775807LL
#define SSIZE_MAX	LONG_MAX	/* Maximum value of an object of type ssize_t */
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 32
#define _POSIX_AIO_MAX	1
#define _POSIX_QLIMIT	1
#define _POSIX2_BC_STRING_MAX	1000
#define _POSIX2_CHARCLASS_NAME_MAX	14
#define _POSIX_NAME_MAX	14
#define _POSIX_UIO_MAXIOV	16
#define _POSIX2_COLL_WEIGHTS_MAX	2
#define _POSIX_AIO_LISTIO_MAX	2
#define _POSIX_OPEN_MAX	20
#define _POSIX_CLOCKRES_MIN	20000000
#define CHARCLASS_NAME_MAX	2048
#define LINE_MAX	2048
#define _POSIX2_BC_DIM_MAX	2048
#define _POSIX2_LINE_MAX	2048
#define _POSIX_CHILD_MAX	25
#define COLL_WEIGHTS_MAX	255
#define _POSIX2_RE_DUP_MAX	255
#define _POSIX_HOST_NAME_MAX	255
#define _POSIX_MAX_CANON	255
#define _POSIX_MAX_INPUT	255
#define _POSIX_RE_DUP_MAX	255
#define _POSIX_SYMLINK_MAX	255
#define _POSIX_PATH_MAX	256
#define _POSIX_SEM_NSEMS_MAX	256
#define _POSIX2_EXPR_NEST_MAX	32
#define _POSIX_DELAYTIMER_MAX	32
#define _POSIX_MQ_PRIO_MAX	32
#define _POSIX_SIGQUEUE_MAX	32
#define _POSIX_TIMER_MAX	32
#define _POSIX_SEM_VALUE_MAX	32767
#define _POSIX_SSIZE_MAX	32767
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
#define _POSIX2_BC_BASE_MAX	99
#define _POSIX2_BC_SCALE_MAX	99
#define BC_BASE_MAX	_POSIX2_BC_BASE_MAX
#define BC_DIM_MAX	_POSIX2_BC_DIM_MAX
#define BC_SCALE_MAX	_POSIX2_BC_SCALE_MAX
#define BC_STRING_MAX	_POSIX2_BC_STRING_MAX
#define EXPR_NEST_MAX	_POSIX2_EXPR_NEST_MAX
#define _POSIX_FD_SETSIZE	_POSIX_OPEN_MAX
#define _POSIX_HIWAT	_POSIX_PIPE_BUF
#endif				/* __LSB_VERSION__ >= 3.2 */




/* Maximum length of any multibyte character in any locale.*/
#if __LSB_VERSION__ >= 11
#define MB_LEN_MAX	16
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Number of bits in a `char'.*/
#if __LSB_VERSION__ >= 11
#define SCHAR_MIN	(-128)
#define SCHAR_MAX	127
#define UCHAR_MAX	255
#define CHAR_BIT	8
#if defined __i386__
#define CHAR_MAX	SCHAR_MAX
#endif
#if defined __i386__
#define CHAR_MIN	SCHAR_MIN
#endif
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
#define CHAR_MIN	0
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define CHAR_MAX	255
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __s390__ && !defined __s390x__
#define CHAR_MIN	0
#endif
#if defined __s390x__
#define CHAR_MIN	0
#endif
#if defined __s390__ && !defined __s390x__
#define CHAR_MAX	255
#endif
#if defined __s390x__
#define CHAR_MAX	255
#endif
#if defined __ia64__
#define CHAR_MAX	SCHAR_MAX
#endif
#if defined __ia64__
#define CHAR_MIN	SCHAR_MIN
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __powerpc64__
#define CHAR_MIN	0
#endif
#if defined __x86_64__
#define CHAR_MAX	127
#endif
#if defined __powerpc64__
#define CHAR_MAX	255
#endif
#if defined __x86_64__
#define CHAR_MIN	SCHAR_MIN
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */




/* Minimum and maximum values a `signed short int' can hold.*/
#if __LSB_VERSION__ >= 11
#define SHRT_MIN	(-32768)
#define SHRT_MAX	32767
#define USHRT_MAX	65535
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Minimum and maximum values a `int' can hold.*/
#if __LSB_VERSION__ >= 11
#define INT_MIN	(-INT_MAX-1)
#define INT_MAX	2147483647
#define UINT_MAX	4294967295U
#if __LSB_VERSION__ < 31
#define __INT_MAX__	2147483647	/* Exclude, compiler-internal */
#endif				/* __LSB_VERSION__ < 3.1 */

#endif				/* __LSB_VERSION__ >= 1.1 */




/* Minimum and maximum values a `long int' can hold.*/
#if __LSB_VERSION__ >= 11
#define LONG_MIN	(-LONG_MAX-1L)
#endif				/* __LSB_VERSION__ >= 1.1 */




/* POSIX Threads values*/
#if __LSB_VERSION__ >= 30
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
#endif				/* __LSB_VERSION__ >= 3.0 */



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
