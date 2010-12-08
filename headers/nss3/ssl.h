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


#define __ssl_h_
#define SSL_IS_SSL2_CIPHER(which)	(((which) & 0xfff0) == 0xff00)
#define SSL_REQUIRE_NEVER	((PRBool)0)
#define SSL_REQUIRE_ALWAYS	((PRBool)1)
#define SSL_REQUIRE_FIRST_HANDSHAKE	((PRBool)2)
#define SSL_REQUIRE_NO_ERROR	((PRBool)3)
#define SSL_SECURITY_STATUS_NOOPT	-1
#define SSL_NOT_ALLOWED	0
#define SSL_SECURITY_STATUS_OFF	0
#define SSL_ALLOWED	1
#define SSL_SECURITY	1
#define SSL_SECURITY_STATUS_ON_HIGH	1
#define SSL_REQUIRE_CERTIFICATE	10
#define SSL_ENABLE_FDX	11
#define SSL_V2_COMPATIBLE_HELLO	12
#define SSL_ENABLE_TLS	13
#define SSL_ROLLBACK_DETECTION	14
#define SSL_NO_STEP_DOWN	15
#define SSL_BYPASS_PKCS11	16
#define SSL_NO_LOCKS	17
#define SSL_RESTRICTED	2
#define SSL_SECURITY_STATUS_ON_LOW	2
#define SSL_SOCKS	2
#define SSL_REQUEST_CERTIFICATE	3
#define SSL_HANDSHAKE_AS_CLIENT	5
#define SSL_HANDSHAKE_AS_SERVER	6
#define SSL_ENABLE_SSL2	7
#define SSL_ENABLE_SSL3	8
#define SSL_NO_CACHE	9
#define SSL_ENV_VAR_NAME	"SSL_INHERITANCE"


    typedef SECStatus(*SSLAuthCertificate) (void *, PRFileDesc *, PRBool,
					    PRBool);

    typedef SECStatus(*SSLGetClientAuthData) (void *, PRFileDesc *,
					      CERTDistNames *,
					      CERTCertificate * *,
					      SECKEYPrivateKey * *);

    typedef SECStatus(*SSLBadCertHandler) (void *, PRFileDesc *);

    typedef void (*SSLHandshakeCallback) (PRFileDesc *, void *);


/* Function prototypes */

    extern SECStatus NSS_CmpCertChainWCANames(CERTCertificate * cert,
					      CERTDistNames * caNames);
    extern SSLKEAType NSS_FindCertKEAType(CERTCertificate * cert);
    extern SECStatus NSS_GetClientAuthData(void *arg, PRFileDesc * socket,
					   struct CERTDistNamesStr
					   *caNames,
					   struct CERTCertificateStr
					   **pRetCert,
					   struct SECKEYPrivateKeyStr
					   **pRetKey);
    extern SECStatus SSL_AuthCertificate(void *arg, PRFileDesc * fd,
					 PRBool checkSig, PRBool isServer);
    extern SECStatus SSL_AuthCertificateHook(PRFileDesc * fd,
					     SSLAuthCertificate f,
					     void *arg);
    extern SECStatus SSL_BadCertHook(PRFileDesc * fd, SSLBadCertHandler f,
				     void *arg);
    extern SECStatus SSL_CipherPolicyGet(PRInt32 cipher, PRInt32 * policy);
    extern SECStatus SSL_CipherPolicySet(PRInt32 cipher, PRInt32 policy);
    extern SECStatus SSL_CipherPrefGet(PRFileDesc * fd, PRInt32 cipher,
				       PRBool * enabled);
    extern SECStatus SSL_CipherPrefGetDefault(PRInt32 cipher,
					      PRBool * enabled);
    extern SECStatus SSL_CipherPrefSet(PRFileDesc * fd, PRInt32 cipher,
				       PRBool enabled);
    extern SECStatus SSL_CipherPrefSetDefault(PRInt32 cipher,
					      PRBool enabled);
    extern void SSL_ClearSessionCache(void);
    extern SECStatus SSL_ConfigMPServerSIDCache(int maxCacheEntries,
						PRUint32 timeout,
						PRUint32 ssl3_timeout,
						const char *directory);
    extern SECStatus SSL_ConfigSecureServer(PRFileDesc * fd,
					    CERTCertificate * cert,
					    SECKEYPrivateKey * key,
					    SSLKEAType kea);
    extern SECStatus SSL_ConfigServerSessionIDCache(int maxCacheEntries,
						    PRUint32 timeout,
						    PRUint32 ssl3_timeout,
						    const char *directory);
    extern int SSL_DataPending(PRFileDesc * fd);
    extern SECStatus SSL_ForceHandshake(PRFileDesc * fd);
    extern SECStatus SSL_GetClientAuthDataHook(PRFileDesc * fd,
					       SSLGetClientAuthData f,
					       void *a);
    extern SECItem *SSL_GetSessionID(PRFileDesc * fd);
    extern SECStatus SSL_HandshakeCallback(PRFileDesc * fd,
					   SSLHandshakeCallback cb,
					   void *client_data);
    extern PRFileDesc *SSL_ImportFD(PRFileDesc * model, PRFileDesc * fd);
    extern SECStatus SSL_InheritMPServerSIDCache(const char *envString);
    extern SECStatus SSL_InvalidateSession(PRFileDesc * fd);
    extern SECStatus SSL_OptionGet(PRFileDesc * fd, PRInt32 option,
				   PRBool * on);
    extern SECStatus SSL_OptionGetDefault(PRInt32 option, PRBool * on);
    extern SECStatus SSL_OptionSet(PRFileDesc * fd, PRInt32 option,
				   PRBool on);
    extern SECStatus SSL_OptionSetDefault(PRInt32 option, PRBool on);
    extern CERTCertificate *SSL_PeerCertificate(PRFileDesc * fd);
    extern SECStatus SSL_ReHandshake(PRFileDesc * fd, PRBool flushCache);
    extern SECStatus SSL_ResetHandshake(PRFileDesc * fd, PRBool asServer);
    extern void *SSL_RevealPinArg(PRFileDesc * socket);
    extern char *SSL_RevealURL(PRFileDesc * socket);
    extern SECStatus SSL_SecurityStatus(PRFileDesc * fd, int *on,
					char **cipher, int *keySize,
					int *secretKeySize, char **issuer,
					char **subject);
    extern SECStatus SSL_SetPKCS11PinArg(PRFileDesc * fd, void *a);
    extern SECStatus SSL_SetSockPeerID(PRFileDesc * fd,
				       const char *peerID);
    extern SECStatus SSL_SetURL(PRFileDesc * fd, const char *url);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
