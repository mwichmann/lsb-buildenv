#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_PKCS7T_H_
#define _NSS3_PKCS7T_H_

#include <nss3/certt.h>
#include <nss3/pkcs11t.h>
#include <nss3/seccomon.h>
#include <nss3/secmodt.h>
#include <nss3/secoidt.h>
#include <nspr4/plarena.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct SEC_PKCS7RecipientInfoStr SEC_PKCS7RecipientInfo;


    struct SEC_PKCS7RecipientInfoStr {
	SECItem version;
	CERTIssuerAndSN *issuerAndSN;
	SECAlgorithmID keyEncAlg;
	SECItem encKey;
	CERTCertificate *cert;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
