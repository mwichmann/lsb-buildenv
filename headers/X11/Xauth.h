#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_XAUTH_H_
#define _X11_XAUTH_H_

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define FamilyLocalHost	(252)
#define FamilyKrb5Principal	(253)
#define FamilyNetname	(254)
#define FamilyLocal	(256)
#define FamilyWild	(65535)
#define LOCK_SUCCESS	0
#define LOCK_ERROR	1
#define LOCK_TIMEOUT	2
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
    typedef struct xauth Xauth;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct xauth {
	unsigned short family;
	unsigned short address_length;
	char *address;
	unsigned short number_length;
	char *number;
	unsigned short name_length;
	char *name;
	unsigned short data_length;
	char *data;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern void XauDisposeAuth(Xauth *);
    extern char *XauFileName(void);
    extern Xauth *XauGetBestAuthByAddr(unsigned int, unsigned int,
				       const char *, unsigned int, char *,
				       int, char **, int *);
    extern Xauth *XauReadAuth(FILE *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
