#if (__LSB_VERSION__ >= 12 )
#ifndef _FMTMSG_H_
#define _FMTMSG_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Values to control `fmtmsg' function.*/
#if __LSB_VERSION__ >= 12
#define MM_HARD	1		/* Source of the condition is hardware. */
#define MM_NRECOV	128	/* Non-recoverable error. */
#define MM_UTIL	16		/* Condition detected by utility. */
#define MM_SOFT	2		/* Source of the condition is software. */
#define MM_OPSYS	32	/* Condition detected by operating system. */
#define MM_FIRM	4		/* Source of the condition is firmware. */
#define MM_RECOVER	64	/* Recoverable error. */
#define MM_APPL	8		/* Condition detected by application. */
#endif				// __LSB_VERSION__ >= 1.2




/* Values to be for SEVERITY parameter of `fmtmsg'.*/
#if __LSB_VERSION__ >= 12
#define MM_NOSEV	0	/* No severity level provided for the message. */
#define MM_HALT	1		/* Error causing application to halt. */
#define MM_ERROR	2	/* Application has encountered a non-fatal fault. */
#endif				// __LSB_VERSION__ >= 1.2




/* Macros which can be used as null values for the arguments of `fmtmsg'.*/
#if __LSB_VERSION__ >= 12
#define MM_NULLLBL	((char *) 0)
#endif				// __LSB_VERSION__ >= 1.2




/* Possible return values of `fmtmsg'.*/

// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int fmtmsg(long int, const char *, int, const char *,
		      const char *, const char *);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
