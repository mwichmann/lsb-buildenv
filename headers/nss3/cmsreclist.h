#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_CMSRECLIST_H_
#define _NSS3_CMSRECLIST_H_

#include <nss3/certt.h>
#include <nss3/keythi.h>
#include <nss3/pkcs11t.h>
#include <nss3/seccomon.h>
#include <nss3/secmodt.h>
#include <nss3/secoidt.h>
#include <nspr4/plarena.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _CMSRECLIST_H


    typedef struct NSSCMSRecipientStr NSSCMSRecipient;

    struct NSSCMSRecipientStr {
	int riIndex;
	int subIndex;
	enum {
	    RLIssuerSN,
	    RLSubjKeyID = 1
	} kind;
	union {
	    CERTIssuerAndSN *issuerAndSN;
	    SECItem *subjectKeyID;
	} id;
	CERTCertificate *cert;
	SECKEYPrivateKey *privkey;
	PK11SlotInfo *slot;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
