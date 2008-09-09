#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_SECDIGT_H_
#define _NSS3_SECDIGT_H_

#include <nss3/seccomon.h>
#include <nss3/secoidt.h>
#include <nspr4/plarena.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct SGNDigestInfoStr SGNDigestInfo;


    struct SGNDigestInfoStr {
	PLArenaPool *arena;
	SECAlgorithmID digestAlgorithm;
	SECItem digest;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
