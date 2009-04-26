#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_PK11PUB_H_
#define _NSS3_PK11PUB_H_

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


#define _PK11PUB_H_



/* Function prototypes */

    extern CERTCertificate *PK11_FindCertFromNickname(const char *nickname,
						      void *wincx);
    extern SECKEYPrivateKey *PK11_FindKeyByAnyCert(CERTCertificate * cert,
						   void *wincx);
    extern char *PK11_GetSlotName(PK11SlotInfo * slot);
    extern char *PK11_GetTokenName(PK11SlotInfo * slot);
    extern PRBool PK11_IsHW(PK11SlotInfo * slot);
    extern PRBool PK11_IsPresent(PK11SlotInfo * slot);
    extern PRBool PK11_IsReadOnly(PK11SlotInfo * slot);
    extern void PK11_SetPasswordFunc(PK11PasswordFunc func);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
