#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_CERT_H_
#define _NSS3_CERT_H_

#include <nss3/certt.h>
#include <nss3/pkcs11t.h>
#include <nss3/seccomon.h>
#include <nss3/secmodt.h>
#include <nss3/secoidt.h>
#include <nspr4/plarena.h>
#include <nspr4/prtime.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern SECCertTimeValidity CERT_CheckCertValidTimes(CERTCertificate *,
							PRTime, PRBool);
    extern void CERT_DestroyCertificate(CERTCertificate *);
    extern CERTCertificate *CERT_DupCertificate(CERTCertificate *);
    extern void CERT_FreeNicknames(CERTCertNicknames *);
    extern CERTCertNicknames *CERT_GetCertNicknames(CERTCertDBHandle *,
						    int, void *);
    extern CERTCertDBHandle *CERT_GetDefaultCertDB(void);
    extern SECStatus CERT_VerifyCertName(CERTCertificate *, const char *);
    extern SECStatus CERT_VerifyCertNow(CERTCertDBHandle *,
					CERTCertificate *, PRBool,
					SECCertUsage, void *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
