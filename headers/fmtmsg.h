#ifndef _FMTMSG_H_
#define _FMTMSG_H_





#define MM_HARD	1
#define MM_NRECOV	128
#define MM_UTIL	16
#define MM_SOFT	2
#define MM_OPSYS	32
#define MM_FIRM	4
#define MM_RECOVER	64
#define MM_APPL	8



#define MM_NOSEV	0
#define MM_HALT	1
#define MM_ERROR	2



#define MM_NULLLBL	((char *) 0)






int fmtmsg (void);
#endif
