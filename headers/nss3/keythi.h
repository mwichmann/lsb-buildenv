#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_KEYTHI_H_
#define _NSS3_KEYTHI_H_

#include <nss3/pkcs11t.h>
#include <nss3/seccomon.h>
#include <nss3/secmodt.h>
#include <nspr4/plarena.h>
#include <nspr4/prclist.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	nullKey,
	rsaKey = 1,
	dsaKey = 2,
	fortezzaKey = 3,
	dhKey = 4,
	keaKey = 5,
	ecKey = 6
    } KeyType;

    typedef struct SECKEYRSAPublicKeyStr SECKEYRSAPublicKey;

    typedef struct SECKEYPQGParamsStr SECKEYPQGParams;

    typedef struct SECKEYDSAPublicKeyStr SECKEYDSAPublicKey;

    typedef struct SECKEYDHParamsStr SECKEYDHParams;

    typedef struct SECKEYDHPublicKeyStr SECKEYDHPublicKey;

    typedef SECItem SECKEYECParams;

    typedef struct SECKEYECPublicKeyStr SECKEYECPublicKey;

    typedef struct SECKEYFortezzaPublicKeyStr SECKEYFortezzaPublicKey;

    typedef struct SECKEYKEAParamsStr SECKEYKEAParams;

    typedef struct SECKEYKEAPublicKeyStr SECKEYKEAPublicKey;

    typedef struct SECKEYPublicKeyStr SECKEYPublicKey;

    typedef struct SECKEYPrivateKeyStr SECKEYPrivateKey;

    typedef struct {
	PRCList links;
	SECKEYPrivateKey *key;
    } SECKEYPrivateKeyListNode;

    typedef struct {
	PRCList list;
	PLArenaPool *arena;
    } SECKEYPrivateKeyList;

    typedef struct {
	PRCList list;
	PLArenaPool *arena;
    } SECKEYPublicKeyList;

    struct SECKEYPrivateKeyStr {
	PLArenaPool *arena;
	KeyType keyType;
	PK11SlotInfo *pkcs11Slot;
	CK_OBJECT_HANDLE pkcs11ID;
	PRBool pkcs11IsTemp;
	void *wincx;
	PRUint32 staticflags;
    };


    struct SECKEYRSAPublicKeyStr {
	PLArenaPool *arena;
	SECItem modulus;
	SECItem publicExponent;
    };


    struct SECKEYPQGParamsStr {
	PLArenaPool *arena;
	SECItem prime;
	SECItem subPrime;
	SECItem base;
    };


    struct SECKEYDSAPublicKeyStr {
	SECKEYPQGParams params;
	SECItem publicValue;
    };


    struct SECKEYDHParamsStr {
	PLArenaPool *arena;
	SECItem prime;
	SECItem base;
    };


    struct SECKEYDHPublicKeyStr {
	PLArenaPool *arena;
	SECItem prime;
	SECItem base;
	SECItem publicValue;
    };


    struct SECKEYECPublicKeyStr {
	SECKEYECParams DEREncodedParams;
	int size;
	SECItem publicValue;
    };


    struct SECKEYFortezzaPublicKeyStr {
	int KEAversion;
	int DSSversion;
	unsigned char KMID[8];
	SECItem clearance;
	SECItem KEApriviledge;
	SECItem DSSpriviledge;
	SECItem KEAKey;
	SECItem DSSKey;
	SECKEYPQGParams params;
	SECKEYPQGParams keaParams;
    };


    struct SECKEYKEAParamsStr {
	PLArenaPool *arena;
	SECItem hash;
    };


    struct SECKEYKEAPublicKeyStr {
	SECKEYKEAParams params;
	SECItem publicValue;
    };


    struct SECKEYPublicKeyStr {
	PLArenaPool *arena;
	KeyType keyType;
	PK11SlotInfo *pkcs11Slot;
	CK_OBJECT_HANDLE pkcs11ID;
	union {
	    SECKEYRSAPublicKey rsa;
	    SECKEYDSAPublicKey dsa;
	    SECKEYDHPublicKey dh;
	    SECKEYKEAPublicKey kea;
	    SECKEYFortezzaPublicKey fortezza;
	    SECKEYECPublicKey ec;
	} u;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
