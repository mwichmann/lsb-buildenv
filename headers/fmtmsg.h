#ifndef _FMTMSG_H_
#define _FMTMSG_H_





/* Values to control `fmtmsg' function.*/
#define MM_HARD	1
#define MM_NRECOV	128
#define MM_UTIL	16
#define MM_SOFT	2
#define MM_OPSYS	32
#define MM_FIRM	4
#define MM_RECOVER	64
#define MM_APPL	8



/* Values to be for SEVERITY parameter of `fmtmsg'.*/
#define MM_NOSEV	0
#define MM_HALT	1
#define MM_ERROR	2



/* Macros which can be used as null values for the arguments of `fmtmsg'.*/
#define MM_NULLLBL	((char *) 0)



/* Possible return values of `fmtmsg'.*/



extern int fmtmsg (void);
#endif
