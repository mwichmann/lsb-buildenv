#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRNETDB_H_
#define _NSPR4_PRNETDB_H_

#include <nspr4/prio.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prnetdb_h___


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

    extern void *PR_EnumerateAddrInfo(void *enumPtr,
				      const PRAddrInfo * addrInfo,
				      PRUint16 port, PRNetAddr * result);
    extern void PR_FreeAddrInfo(PRAddrInfo * addrInfo);
    extern PRAddrInfo *PR_GetAddrInfoByName(const char *hostname,
					    PRUint16 af, PRIntn flags);
    extern PRStatus PR_NetAddrToString(const PRNetAddr * addr,
				       char *string, PRUint32 size);
    extern PRStatus PR_StringToNetAddr(const char *string,
				       PRNetAddr * addr);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
