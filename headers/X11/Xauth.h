#ifndef _X11_XAUTH_H_
#define _X11_XAUTH_H_

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct xauth {
	unsigned short family;
	unsigned short address_length;
	char *address;
	unsigned short number_length;
	char *number;
	unsigned short name_length;
	char *name;
	unsigned short data_length;
	char *data;
    } Xauth;


    extern void XauDisposeAuth(Xauth *);
    extern char *XauFileName(void);
    extern Xauth *XauGetBestAuthByAddr(unsigned int, unsigned int,
				       const char *, unsigned int, char *,
				       int, char **, int *);
    extern Xauth *XauReadAuth(FILE *);
#ifdef __cplusplus
}
#endif
#endif
