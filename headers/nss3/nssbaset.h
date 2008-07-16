#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_NSSBASET_H_
#define _NSS3_NSSBASET_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct NSSArenaStr NSSArena;

    typedef struct NSSItemStr NSSItem;

    typedef NSSItem NSSBER;

    typedef NSSBER NSSDER;

    typedef char NSSUTF8;

    typedef char NSSASCII7;




    struct NSSItemStr {
	void *data;
	PRUint32 size;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
