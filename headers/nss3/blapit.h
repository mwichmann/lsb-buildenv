#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_BLAPIT_H_
#define _NSS3_BLAPIT_H_

#include <nss3/seccomon.h>
#include <nspr4/plarena.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct PQGParamsStr PQGParams;

    typedef struct PQGVerifyStr PQGVerify;


    struct PQGParamsStr {
	PLArenaPool *arena;
	SECItem prime;
	SECItem subPrime;
	SECItem base;
    };


    struct PQGVerifyStr {
	PLArenaPool *arena;
	unsigned int counter;
	SECItem seed;
	SECItem h;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
