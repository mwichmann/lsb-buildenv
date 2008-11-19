#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRNETDB_H_
#define _NSPR4_PRNETDB_H_

#include <nspr4/prio.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct PRHostEnt PRHostEnt;

    typedef struct PRAddrInfo PRAddrInfo;


    struct PRHostEnt {
	char *h_name;
	char **h_aliases;
	PRInt32 h_addrtype;
	PRInt32 h_length;
	char **h_addr_list;
    };




/* Function prototypes */

    extern void *PR_EnumerateAddrInfo(void *, const PRAddrInfo *, PRUint16,
				      PRNetAddr *);
    extern void PR_FreeAddrInfo(PRAddrInfo *);
    extern PRAddrInfo *PR_GetAddrInfoByName(const char *, PRUint16,
					    PRIntn);
    extern PRStatus PR_NetAddrToString(const PRNetAddr *, char *,
				       PRUint32);
    extern PRStatus PR_StringToNetAddr(const char *, PRNetAddr *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
