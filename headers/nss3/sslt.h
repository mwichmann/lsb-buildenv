#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_SSLT_H_
#define _NSS3_SSLT_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define __sslt_h_


    typedef enum {
	ssl_kea_null,
	ssl_kea_rsa = 1,
	ssl_kea_dh = 2,
	ssl_kea_fortezza = 3,
	ssl_kea_ecdh = 4,
	ssl_kea_size = 5
    } SSLKEAType;

    typedef enum {
	ssl_sign_null,
	ssl_sign_rsa = 1,
	ssl_sign_dsa = 2,
	ssl_sign_ecdsa = 3
    } SSLSignType;

    typedef enum {
	ssl_auth_null,
	ssl_auth_rsa = 1,
	ssl_auth_dsa = 2,
	ssl_auth_kea = 3,
	ssl_auth_ecdsa = 4
    } SSLAuthType;

    typedef enum {
	ssl_calg_null,
	ssl_calg_rc4 = 1,
	ssl_calg_rc2 = 2,
	ssl_calg_des = 3,
	ssl_calg_3des = 4,
	ssl_calg_idea = 5,
	ssl_calg_fortezza = 6,
	ssl_calg_aes = 7,
	ssl_calg_camellia = 8
    } SSLCipherAlgorithm;

    typedef enum {
	ssl_mac_null,
	ssl_mac_md5 = 1,
	ssl_mac_sha = 2,
	ssl_hmac_md5 = 3,
	ssl_hmac_sha = 4
    } SSLMACAlgorithm;

    typedef struct SSLChannelInfoStr SSLChannelInfo;

    typedef struct SSLCipherSuiteInfoStr SSLCipherSuiteInfo;

    struct SSLChannelInfoStr {
	PRUint32 length;
	PRUint16 protocolVersion;
	PRUint16 cipherSuite;
	PRUint32 authKeyBits;
	PRUint32 keaKeyBits;
	PRUint32 creationTime;
	PRUint32 lastAccessTime;
	PRUint32 expirationTime;
	PRUint32 sessionIDLength;
	PRUint8 sessionID[31];
    };

    struct SSLCipherSuiteInfoStr {
	PRUint16 length;
	PRUint16 cipherSuite;
	const char *cipherSuiteName;
	const char *authAlgorithmName;
	SSLAuthType authAlgorithm;
	const char *keaTypeName;
	SSLKEAType keaType;
	const char *symCipherName;
	SSLCipherAlgorithm symCipher;
	PRUint16 symKeyBits;
	PRUint16 symKeySpace;
	PRUint16 effectiveKeyBits;
	const char *macAlgorithmName;
	SSLMACAlgorithm macAlgorithm;
	PRUint16 macBits;
	PRUintn isFIPS:1;
	PRUintn isExportable:1;
	PRUintn nonStandard:1;
	PRUintn reservedBits:29;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
