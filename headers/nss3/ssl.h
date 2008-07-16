#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_SSL_H_
#define _NSS3_SSL_H_

#include <nss3/certt.h>
#include <nss3/keythi.h>
#include <nss3/pkcs11t.h>
#include <nss3/seccomon.h>
#include <nss3/secmodt.h>
#include <nss3/secoidt.h>
#include <nspr4/plarena.h>
#include <nspr4/prio.h>
#include <nspr4/prtypes.h>
#include <nss3/sslt.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef SECStatus(*SSLAuthCertificate) (void *, PRFileDesc *, PRBool,
					    PRBool);

    typedef SECStatus(*SSLGetClientAuthData) (void *, PRFileDesc *,
					      CERTDistNames *,
					      CERTCertificate * *,
					      SECKEYPrivateKey * *);

    typedef SECStatus(*SSLBadCertHandler) (void *, PRFileDesc *);

    typedef void (*SSLHandshakeCallback) (PRFileDesc *, void *);


/* Function prototypes */

    extern SECStatus NSS_CmpCertChainWCANames(CERTCertificate *,
					      CERTDistNames *);
    extern SSLKEAType NSS_FindCertKEAType(CERTCertificate *);
    extern SECStatus NSS_GetClientAuthData(void *, PRFileDesc *,
					   struct CERTDistNamesStr *,
					   struct CERTCertificateStr **,
					   struct SECKEYPrivateKeyStr **);
    extern SECStatus SSL_AuthCertificate(void *, PRFileDesc *, PRBool,
					 PRBool);
    extern SECStatus SSL_AuthCertificateHook(PRFileDesc *,
					     SSLAuthCertificate, void *);
    extern SECStatus SSL_BadCertHook(PRFileDesc *, SSLBadCertHandler,
				     void *);
    extern SECStatus SSL_CipherPolicyGet(PRInt32, PRInt32 *);
    extern SECStatus SSL_CipherPolicySet(PRInt32, PRInt32);
    extern SECStatus SSL_CipherPrefGet(PRFileDesc *, PRInt32, PRBool *);
    extern SECStatus SSL_CipherPrefGetDefault(PRInt32, PRBool *);
    extern SECStatus SSL_CipherPrefSet(PRFileDesc *, PRInt32, PRBool);
    extern SECStatus SSL_CipherPrefSetDefault(PRInt32, PRBool);
    extern void SSL_ClearSessionCache(void);
    extern SECStatus SSL_ConfigMPServerSIDCache(int, PRUint32, PRUint32,
						const char *);
    extern SECStatus SSL_ConfigSecureServer(PRFileDesc *,
					    CERTCertificate *,
					    SECKEYPrivateKey *,
					    SSLKEAType);
    extern SECStatus SSL_ConfigServerSessionIDCache(int, PRUint32,
						    PRUint32,
						    const char *);
    extern int SSL_DataPending(PRFileDesc *);
    extern SECStatus SSL_ForceHandshake(PRFileDesc *);
    extern SECStatus SSL_GetClientAuthDataHook(PRFileDesc *,
					       SSLGetClientAuthData,
					       void *);
    extern SECItem *SSL_GetSessionID(PRFileDesc *);
    extern SECStatus SSL_HandshakeCallback(PRFileDesc *,
					   SSLHandshakeCallback, void *);
    extern PRFileDesc *SSL_ImportFD(PRFileDesc *, PRFileDesc *);
    extern SECStatus SSL_InheritMPServerSIDCache(const char *);
    extern SECStatus SSL_InvalidateSession(PRFileDesc *);
    extern SECStatus SSL_OptionGet(PRFileDesc *, PRInt32, PRBool *);
    extern SECStatus SSL_OptionGetDefault(PRInt32, PRBool *);
    extern SECStatus SSL_OptionSet(PRFileDesc *, PRInt32, PRBool);
    extern SECStatus SSL_OptionSetDefault(PRInt32, PRBool);
    extern CERTCertificate *SSL_PeerCertificate(PRFileDesc *);
    extern SECStatus SSL_ReHandshake(PRFileDesc *, PRBool);
    extern SECStatus SSL_ResetHandshake(PRFileDesc *, PRBool);
    extern void *SSL_RevealPinArg(PRFileDesc *);
    extern char *SSL_RevealURL(PRFileDesc *);
    extern SECStatus SSL_SecurityStatus(PRFileDesc *, int *, char **,
					int *, int *, char **, char **);
    extern SECStatus SSL_SetPKCS11PinArg(PRFileDesc *, void *);
    extern SECStatus SSL_SetSockPeerID(PRFileDesc *, char *);
    extern SECStatus SSL_SetURL(PRFileDesc *, const char *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
