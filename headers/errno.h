#ifndef _ERRNO_H_
#define _ERRNO_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define errno	(*__errno_location())



/* errno values*/
#define EPERM	1
#define ECHILD	10
#define ENETDOWN	100
#define ENETUNREACH	101
#define ENETRESET	102
#define ECONNABORTED	103
#define ECONNRESET	104
#define ENOBUFS	105
#define EISCONN	106
#define ENOTCONN	107
#define ESHUTDOWN	108
#define ETOOMANYREFS	109
#define EAGAIN	11
#define ETIMEDOUT	110
#define ECONNREFUSED	111
#define EHOSTDOWN	112
#define EHOSTUNREACH	113
#define EALREADY	114
#define EINPROGRESS	115
#define ESTALE	116
#define EUCLEAN	117
#define ENOTNAM	118
#define ENAVAIL	119
#define ENOMEM	12
#define EISNAM	120
#define EREMOTEIO	121
#define EDQUOT	122
#define ENOMEDIUM	123
#define EMEDIUMTYPE	124
#define ECANCELED	125
#define EACCES	13
#define EFAULT	14
#define ENOTBLK	15
#define EBUSY	16
#define EEXIST	17
#define EXDEV	18
#define ENODEV	19
#define ENOENT	2
#define ENOTDIR	20
#define EISDIR	21
#define EINVAL	22
#define ENFILE	23
#define EMFILE	24
#define ENOTTY	25
#define ETXTBSY	26
#define EFBIG	27
#define ENOSPC	28
#define ESPIPE	29
#define ESRCH	3
#define EROFS	30
#define EMLINK	31
#define EPIPE	32
#define EDOM	33
#define ERANGE	34
#if defined(__i386__)
#define EDEADLK	35
#endif
#if defined(__ia64__)
#define EDEADLK	35
#endif
#if defined(__powerpc__)
#define EDEADLK	35
#endif
#if defined(__s390__)
#define EDEADLK	35
#endif
#if defined(__i386__)
#define ENAMETOOLONG	36
#endif
#if defined(__ia64__)
#define ENAMETOOLONG	36
#endif
#if defined(__powerpc__)
#define ENAMETOOLONG	36
#endif
#if defined(__s390__)
#define ENAMETOOLONG	36
#endif
#if defined(__i386__)
#define ENOLCK	37
#endif
#if defined(__ia64__)
#define ENOLCK	37
#endif
#if defined(__powerpc__)
#define ENOLCK	37
#endif
#if defined(__s390__)
#define ENOLCK	37
#endif
#if defined(__i386__)
#define ENOSYS	38
#endif
#if defined(__ia64__)
#define ENOSYS	38
#endif
#if defined(__powerpc__)
#define ENOSYS	38
#endif
#if defined(__s390__)
#define ENOSYS	38
#endif
#if defined(__i386__)
#define ENOTEMPTY	39
#endif
#if defined(__ia64__)
#define ENOTEMPTY	39
#endif
#if defined(__powerpc__)
#define ENOTEMPTY	39
#endif
#if defined(__s390__)
#define ENOTEMPTY	39
#endif
#define EINTR	4
#if defined(__i386__)
#define ELOOP	40
#endif
#if defined(__ia64__)
#define ELOOP	40
#endif
#if defined(__powerpc__)
#define ELOOP	40
#endif
#if defined(__s390__)
#define ELOOP	40
#endif
#if defined(__i386__)
#define ENOMSG	42
#endif
#if defined(__ia64__)
#define ENOMSG	42
#endif
#if defined(__powerpc__)
#define ENOMSG	42
#endif
#if defined(__s390__)
#define ENOMSG	42
#endif
#if defined(__i386__)
#define EIDRM	43
#endif
#if defined(__ia64__)
#define EIDRM	43
#endif
#if defined(__powerpc__)
#define EIDRM	43
#endif
#if defined(__s390__)
#define EIDRM	43
#endif
#if defined(__i386__)
#define ECHRNG	44
#endif
#if defined(__ia64__)
#define ECHRNG	44
#endif
#if defined(__powerpc__)
#define ECHRNG	44
#endif
#if defined(__s390__)
#define ECHRNG	44
#endif
#if defined(__i386__)
#define EL2NSYNC	45
#endif
#if defined(__ia64__)
#define EL2NSYNC	45
#endif
#if defined(__powerpc__)
#define EL2NSYNC	45
#endif
#if defined(__s390__)
#define EL2NSYNC	45
#endif
#if defined(__i386__)
#define EL3HLT	46
#endif
#if defined(__ia64__)
#define EL3HLT	46
#endif
#if defined(__powerpc__)
#define EL3HLT	46
#endif
#if defined(__s390__)
#define EL3HLT	46
#endif
#if defined(__i386__)
#define EL3RST	47
#endif
#if defined(__ia64__)
#define EL3RST	47
#endif
#if defined(__powerpc__)
#define EL3RST	47
#endif
#if defined(__s390__)
#define EL3RST	47
#endif
#if defined(__i386__)
#define ELNRNG	48
#endif
#if defined(__ia64__)
#define ELNRNG	48
#endif
#if defined(__powerpc__)
#define ELNRNG	48
#endif
#if defined(__s390__)
#define ELNRNG	48
#endif
#if defined(__i386__)
#define EUNATCH	49
#endif
#if defined(__ia64__)
#define EUNATCH	49
#endif
#if defined(__powerpc__)
#define EUNATCH	49
#endif
#if defined(__s390__)
#define EUNATCH	49
#endif
#define EIO	5
#if defined(__i386__)
#define ENOANO	55
#endif
#if defined(__ia64__)
#define ENOANO	55
#endif
#if defined(__powerpc__)
#define ENOANO	55
#endif
#if defined(__s390__)
#define ENOANO	55
#endif
#if defined(__i386__)
#define EBADRQC	56
#endif
#if defined(__ia64__)
#define EBADRQC	56
#endif
#if defined(__powerpc__)
#define EBADRQC	56
#endif
#if defined(__s390__)
#define EBADRQC	56
#endif
#if defined(__i386__)
#define EBADSLT	57
#endif
#if defined(__ia64__)
#define EBADSLT	57
#endif
#if defined(__powerpc__)
#define EBADSLT	57
#endif
#if defined(__s390__)
#define EBADSLT	57
#endif
#if defined(__powerpc__)
#define EDEADLOCK	58
#endif
#if defined(__i386__)
#define EBFONT	59
#endif
#if defined(__ia64__)
#define EBFONT	59
#endif
#if defined(__powerpc__)
#define EBFONT	59
#endif
#if defined(__s390__)
#define EBFONT	59
#endif
#define ENXIO	6
#if defined(__i386__)
#define ENOSTR	60
#endif
#if defined(__ia64__)
#define ENOSTR	60
#endif
#if defined(__powerpc__)
#define ENOSTR	60
#endif
#if defined(__s390__)
#define ENOSTR	60
#endif
#if defined(__i386__)
#define ENODATA	61
#endif
#if defined(__ia64__)
#define ENODATA	61
#endif
#if defined(__powerpc__)
#define ENODATA	61
#endif
#if defined(__s390__)
#define ENODATA	61
#endif
#if defined(__i386__)
#define ETIME	62
#endif
#if defined(__ia64__)
#define ETIME	62
#endif
#if defined(__powerpc__)
#define ETIME	62
#endif
#if defined(__s390__)
#define ETIME	62
#endif
#if defined(__i386__)
#define ENOSR	63
#endif
#if defined(__ia64__)
#define ENOSR	63
#endif
#if defined(__powerpc__)
#define ENOSR	63
#endif
#if defined(__s390__)
#define ENOSR	63
#endif
#if defined(__i386__)
#define ENONET	64
#endif
#if defined(__ia64__)
#define ENONET	64
#endif
#if defined(__powerpc__)
#define ENONET	64
#endif
#if defined(__s390__)
#define ENONET	64
#endif
#if defined(__i386__)
#define ENOPKG	65
#endif
#if defined(__ia64__)
#define ENOPKG	65
#endif
#if defined(__powerpc__)
#define ENOPKG	65
#endif
#if defined(__s390__)
#define ENOPKG	65
#endif
#if defined(__i386__)
#define EREMOTE	66
#endif
#if defined(__ia64__)
#define EREMOTE	66
#endif
#if defined(__powerpc__)
#define EREMOTE	66
#endif
#if defined(__s390__)
#define EREMOTE	66
#endif
#if defined(__i386__)
#define ENOLINK	67
#endif
#if defined(__ia64__)
#define ENOLINK	67
#endif
#if defined(__powerpc__)
#define ENOLINK	67
#endif
#if defined(__s390__)
#define ENOLINK	67
#endif
#if defined(__i386__)
#define EADV	68
#endif
#if defined(__ia64__)
#define EADV	68
#endif
#if defined(__powerpc__)
#define EADV	68
#endif
#if defined(__s390__)
#define EADV	68
#endif
#if defined(__i386__)
#define ESRMNT	69
#endif
#if defined(__ia64__)
#define ESRMNT	69
#endif
#if defined(__powerpc__)
#define ESRMNT	69
#endif
#if defined(__s390__)
#define ESRMNT	69
#endif
#define E2BIG	7
#if defined(__i386__)
#define ECOMM	70
#endif
#if defined(__ia64__)
#define ECOMM	70
#endif
#if defined(__powerpc__)
#define ECOMM	70
#endif
#if defined(__s390__)
#define ECOMM	70
#endif
#if defined(__i386__)
#define EPROTO	71
#endif
#if defined(__ia64__)
#define EPROTO	71
#endif
#if defined(__powerpc__)
#define EPROTO	71
#endif
#if defined(__s390__)
#define EPROTO	71
#endif
#if defined(__i386__)
#define EMULTIHOP	72
#endif
#if defined(__ia64__)
#define EMULTIHOP	72
#endif
#if defined(__powerpc__)
#define EMULTIHOP	72
#endif
#if defined(__s390__)
#define EMULTIHOP	72
#endif
#if defined(__i386__)
#define EDOTDOT	73
#endif
#if defined(__ia64__)
#define EDOTDOT	73
#endif
#if defined(__powerpc__)
#define EDOTDOT	73
#endif
#if defined(__s390__)
#define EDOTDOT	73
#endif
#if defined(__i386__)
#define EBADMSG	74
#endif
#if defined(__ia64__)
#define EBADMSG	74
#endif
#if defined(__powerpc__)
#define EBADMSG	74
#endif
#if defined(__s390__)
#define EBADMSG	74
#endif
#if defined(__i386__)
#define EOVERFLOW	75
#endif
#if defined(__ia64__)
#define EOVERFLOW	75
#endif
#if defined(__powerpc__)
#define EOVERFLOW	75
#endif
#if defined(__s390__)
#define EOVERFLOW	75
#endif
#if defined(__i386__)
#define ENOTUNIQ	76
#endif
#if defined(__ia64__)
#define ENOTUNIQ	76
#endif
#if defined(__powerpc__)
#define ENOTUNIQ	76
#endif
#if defined(__s390__)
#define ENOTUNIQ	76
#endif
#if defined(__i386__)
#define EBADFD	77
#endif
#if defined(__ia64__)
#define EBADFD	77
#endif
#if defined(__powerpc__)
#define EBADFD	77
#endif
#if defined(__s390__)
#define EBADFD	77
#endif
#if defined(__i386__)
#define EREMCHG	78
#endif
#if defined(__ia64__)
#define EREMCHG	78
#endif
#if defined(__powerpc__)
#define EREMCHG	78
#endif
#if defined(__s390__)
#define EREMCHG	78
#endif
#if defined(__i386__)
#define ELIBACC	79
#endif
#if defined(__ia64__)
#define ELIBACC	79
#endif
#if defined(__powerpc__)
#define ELIBACC	79
#endif
#if defined(__s390__)
#define ELIBACC	79
#endif
#define ENOEXEC	8
#if defined(__i386__)
#define ELIBBAD	80
#endif
#if defined(__ia64__)
#define ELIBBAD	80
#endif
#if defined(__powerpc__)
#define ELIBBAD	80
#endif
#if defined(__s390__)
#define ELIBBAD	80
#endif
#if defined(__i386__)
#define ELIBSCN	81
#endif
#if defined(__ia64__)
#define ELIBSCN	81
#endif
#if defined(__powerpc__)
#define ELIBSCN	81
#endif
#if defined(__s390__)
#define ELIBSCN	81
#endif
#if defined(__i386__)
#define ELIBMAX	82
#endif
#if defined(__ia64__)
#define ELIBMAX	82
#endif
#if defined(__powerpc__)
#define ELIBMAX	82
#endif
#if defined(__s390__)
#define ELIBMAX	82
#endif
#if defined(__i386__)
#define ELIBEXEC	83
#endif
#if defined(__ia64__)
#define ELIBEXEC	83
#endif
#if defined(__powerpc__)
#define ELIBEXEC	83
#endif
#if defined(__s390__)
#define ELIBEXEC	83
#endif
#if defined(__i386__)
#define EILSEQ	84
#endif
#if defined(__ia64__)
#define EILSEQ	84
#endif
#if defined(__powerpc__)
#define EILSEQ	84
#endif
#if defined(__s390__)
#define EILSEQ	84
#endif
#if defined(__i386__)
#define ERESTART	85
#endif
#if defined(__ia64__)
#define ERESTART	85
#endif
#if defined(__powerpc__)
#define ERESTART	85
#endif
#if defined(__s390__)
#define ERESTART	85
#endif
#if defined(__i386__)
#define ESTRPIPE	86
#endif
#if defined(__ia64__)
#define ESTRPIPE	86
#endif
#if defined(__powerpc__)
#define ESTRPIPE	86
#endif
#if defined(__s390__)
#define ESTRPIPE	86
#endif
#if defined(__i386__)
#define EUSERS	87
#endif
#if defined(__ia64__)
#define EUSERS	87
#endif
#if defined(__powerpc__)
#define EUSERS	87
#endif
#if defined(__s390__)
#define EUSERS	87
#endif
#if defined(__i386__)
#define ENOTSOCK	88
#endif
#if defined(__ia64__)
#define ENOTSOCK	88
#endif
#if defined(__powerpc__)
#define ENOTSOCK	88
#endif
#if defined(__s390__)
#define ENOTSOCK	88
#endif
#if defined(__i386__)
#define EDESTADDRREQ	89
#endif
#if defined(__ia64__)
#define EDESTADDRREQ	89
#endif
#if defined(__powerpc__)
#define EDESTADDRREQ	89
#endif
#if defined(__s390__)
#define EDESTADDRREQ	89
#endif
#define EBADF	9
#if defined(__i386__)
#define EMSGSIZE	90
#endif
#if defined(__ia64__)
#define EMSGSIZE	90
#endif
#if defined(__powerpc__)
#define EMSGSIZE	90
#endif
#if defined(__s390__)
#define EMSGSIZE	90
#endif
#if defined(__i386__)
#define EPROTOTYPE	91
#endif
#if defined(__ia64__)
#define EPROTOTYPE	91
#endif
#if defined(__powerpc__)
#define EPROTOTYPE	91
#endif
#if defined(__s390__)
#define EPROTOTYPE	91
#endif
#if defined(__i386__)
#define ENOPROTOOPT	92
#endif
#if defined(__ia64__)
#define ENOPROTOOPT	92
#endif
#if defined(__powerpc__)
#define ENOPROTOOPT	92
#endif
#if defined(__s390__)
#define ENOPROTOOPT	92
#endif
#if defined(__i386__)
#define EPROTONOSUPPORT	93
#endif
#if defined(__ia64__)
#define EPROTONOSUPPORT	93
#endif
#if defined(__powerpc__)
#define EPROTONOSUPPORT	93
#endif
#if defined(__s390__)
#define EPROTONOSUPPORT	93
#endif
#if defined(__i386__)
#define ESOCKTNOSUPPORT	94
#endif
#if defined(__ia64__)
#define ESOCKTNOSUPPORT	94
#endif
#if defined(__powerpc__)
#define ESOCKTNOSUPPORT	94
#endif
#if defined(__s390__)
#define ESOCKTNOSUPPORT	94
#endif
#if defined(__i386__)
#define EOPNOTSUPP	95
#endif
#if defined(__ia64__)
#define EOPNOTSUPP	95
#endif
#if defined(__powerpc__)
#define EOPNOTSUPP	95
#endif
#if defined(__s390__)
#define EOPNOTSUPP	95
#endif
#if defined(__i386__)
#define EPFNOSUPPORT	96
#endif
#if defined(__ia64__)
#define EPFNOSUPPORT	96
#endif
#if defined(__powerpc__)
#define EPFNOSUPPORT	96
#endif
#if defined(__s390__)
#define EPFNOSUPPORT	96
#endif
#if defined(__i386__)
#define EAFNOSUPPORT	97
#endif
#if defined(__ia64__)
#define EAFNOSUPPORT	97
#endif
#if defined(__powerpc__)
#define EAFNOSUPPORT	97
#endif
#if defined(__s390__)
#define EAFNOSUPPORT	97
#endif
#if defined(__i386__)
#define EADDRINUSE	98
#endif
#if defined(__ia64__)
#define EADDRINUSE	98
#endif
#if defined(__powerpc__)
#define EADDRINUSE	98
#endif
#if defined(__s390__)
#define EADDRINUSE	98
#endif
#if defined(__i386__)
#define EADDRNOTAVAIL	99
#endif
#if defined(__ia64__)
#define EADDRNOTAVAIL	99
#endif
#if defined(__powerpc__)
#define EADDRNOTAVAIL	99
#endif
#if defined(__s390__)
#define EADDRNOTAVAIL	99
#endif
#define EWOULDBLOCK	EAGAIN
#define EDEADLOCK	EDEADLK
#define ENOTSUP	EOPNOTSUPP



  extern int *__errno_location (void);
#ifdef __cplusplus
}
#endif
#endif
