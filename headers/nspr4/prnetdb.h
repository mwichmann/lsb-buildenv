#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRNETDB_H_
#define _NSPR4_PRNETDB_H_

#include <nspr4/prio.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct PRHostEnt PRHostEnt;


    struct PRHostEnt {
	char *h_name;
	char **h_aliases;
	PRInt32 h_addrtype;
	PRInt32 h_length;
	char **h_addr_list;
    };


/* Function prototypes */

    extern PRIntn PR_EnumerateHostEnt(PRIntn, const PRHostEnt *, PRUint16,
				      PRNetAddr *);
    extern PRStatus PR_GetHostByAddr(const PRNetAddr *, char *, PRIntn,
				     PRHostEnt *);
    extern PRStatus PR_GetHostByName(const char *, char *, PRIntn,
				     PRHostEnt *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
