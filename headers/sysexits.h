#if (__LSB_VERSION__ >= 50 )
#ifndef _SYSEXITS_H_
#define _SYSEXITS_H_


#ifdef __cplusplus
extern "C" {
#endif


#define EX_OK	0		/* successful termination  */
#define EX_USAGE	64	/* command line usage error  */
#define EX__BASE	64	/* base value for error messages  */
#define EX_DATAERR	65	/* data format error  */
#define EX_NOINPUT	66	/* cannot open input  */
#define EX_NOUSER	67	/* addressee unknown  */
#define EX_NOHOST	68	/* host name unknown  */
#define EX_UNAVAILABLE	69	/* service unavailable  */
#define EX_SOFTWARE	70	/* internal software error  */
#define EX_OSERR	71	/* system error (e.g., cannot fork)  */
#define EX_OSFILE	72	/* critical OS file missing  */
#define EX_CANTCREAT	73	/* cannot create (user) output file  */
#define EX_IOERR	74	/* input/output error  */
#define EX_TEMPFAIL	75	/* temp failure; user is invited to retry  */
#define EX_PROTOCOL	76	/* remote error in protocol  */
#define EX_NOPERM	77	/* permission denied  */
#define EX_CONFIG	78	/* configuration error  */


#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */