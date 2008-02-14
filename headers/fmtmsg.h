#ifndef _FMTMSG_H_
#define _FMTMSG_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Values to control `fmtmsg' function.*/
#define MM_HARD	1		/* Source of the condition is hardware. */
#define MM_NRECOV	128	/* Non-recoverable error. */
#define MM_UTIL	16		/* Condition detected by utility. */
#define MM_SOFT	2		/* Source of the condition is software. */
#define MM_OPSYS	32	/* Condition detected by operating system. */
#define MM_FIRM	4		/* Source of the condition is firmware. */
#define MM_RECOVER	64	/* Recoverable error. */
#define MM_APPL	8		/* Condition detected by application. */



/* Values to be for SEVERITY parameter of `fmtmsg'.*/
#define MM_NOSEV	0	/* No severity level provided for the message. */
#define MM_HALT	1		/* Error causing application to halt. */
#define MM_ERROR	2	/* Application has encountered a non-fatal fault. */



/* Macros which can be used as null values for the arguments of `fmtmsg'.*/
#define MM_NULLLBL	((char *) 0)



/* Possible return values of `fmtmsg'.*/

    extern int fmtmsg(long int, const char *, int, const char *,
		      const char *, const char *);
#ifdef __cplusplus
}
#endif
#endif
