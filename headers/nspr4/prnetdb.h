#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRNETDB_H_
#define _NSPR4_PRNETDB_H_

#include <nspr4/prio.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prnetdb_h___
#if __LSB_VERSION__ >= 50
#define PR_NetAddrFamily(addr)	((addr)->raw.family)
#define PR_NetAddrInetPort(addr)	\
     ((addr)->raw.family == PR_AF_INET6 ? (addr)->ipv6.port : (addr)->inet.port)
#endif				/* __LSB_VERSION__ >= 5.0 */



    typedef struct PRHostEnt PRHostEnt;

    typedef struct PRAddrInfo PRAddrInfo;

#if __LSB_VERSION__ >= 50
    typedef enum PRNetAddrValue {
	PR_IpAddrNull,
	PR_IpAddrAny,
	PR_IpAddrLoopback,
	PR_IpAddrV4Mapped
    } PRNetAddrValue;

#endif				/* __LSB_VERSION__ >= 5.0 */

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
#if __LSB_VERSION__ >= 50
    extern void PR_ConvertIPv4AddrToIPv6(PRUint32 v4addr,
					 PRIPv6Addr * v6addr);
    extern const char *PR_GetCanonNameFromAddrInfo(const PRAddrInfo *
						   addrInfo);
    extern PRStatus PR_InitializeNetAddr(PRNetAddrValue val, PRUint16 port,
					 PRNetAddr * addr);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
