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


#define _CERT_H_



/* Function prototypes */

    extern SECCertTimeValidity CERT_CheckCertValidTimes(CERTCertificate *
							cert, PRTime t,
							PRBool
							allowOverride);
    extern void CERT_DestroyCertificate(CERTCertificate * cert);
    extern CERTCertificate *CERT_DupCertificate(CERTCertificate * c);
    extern void CERT_FreeNicknames(CERTCertNicknames * nicknames);
    extern CERTCertNicknames *CERT_GetCertNicknames(CERTCertDBHandle *
						    handle, int what,
						    void *wincx);
    extern CERTCertDBHandle *CERT_GetDefaultCertDB(void);
    extern SECStatus CERT_VerifyCertName(CERTCertificate * cert,
					 const char *hostname);
    extern SECStatus CERT_VerifyCertNow(CERTCertDBHandle * handle,
					CERTCertificate * cert,
					PRBool checkSig,
					SECCertUsage certUsage,
					void *wincx);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
