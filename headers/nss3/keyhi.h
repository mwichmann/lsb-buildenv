#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_KEYHI_H_
#define _NSS3_KEYHI_H_

#include <nss3/keythi.h>
#include <nss3/pkcs11t.h>
#include <nss3/secmodt.h>
#include <nspr4/plarena.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _KEYHI_H_



/* Function prototypes */

    extern void SECKEY_DestroyPrivateKey(SECKEYPrivateKey * key);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
