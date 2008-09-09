#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PLARENA_H_
#define _NSPR4_PLARENA_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct PLArenaPool PLArenaPool;

    struct PLArena {
	struct PLArena *next;
	PRUword base;
	PRUword limit;
	PRUword avail;
    };


    struct PLArenaPool {
	struct PLArena first;
	struct PLArena *current;
	PRUint32 arenasize;
	PRUword mask;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
