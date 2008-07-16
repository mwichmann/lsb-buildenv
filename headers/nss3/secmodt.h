#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_SECMODT_H_
#define _NSS3_SECMODT_H_

#include <nss3/nssrwlkt.h>
#include <nss3/pkcs11t.h>
#include <nss3/seccomon.h>
#include <nss3/secoidt.h>
#include <nspr4/plarena.h>
#include <nspr4/prlock.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct SECMODModuleStr SECMODModule;

    typedef struct SECMODModuleListStr SECMODModuleList;

    typedef NSSRWLock SECMODListLock;

    typedef struct PK11SlotInfoStr PK11SlotInfo;

    typedef struct PK11PreSlotInfoStr PK11PreSlotInfo;

    typedef struct PK11SymKeyStr PK11SymKey;

    typedef struct PK11ContextStr PK11Context;

    typedef struct PK11SlotListStr PK11SlotList;

    typedef struct PK11SlotListElementStr PK11SlotListElement;

    typedef unsigned long int SECMODModuleID;

    typedef struct PK11DefaultArrayEntryStr PK11DefaultArrayEntry;

    typedef struct PK11GenericObjectStr PK11GenericObject;

    typedef void (*PK11FreeDataFunc) (void *);

    typedef enum {
	PK11CertListUnique,
	PK11CertListUser = 1,
	PK11CertListRootUnique = 2,
	PK11CertListCA = 3,
	PK11CertListCAUnique = 4,
	PK11CertListUserUnique = 5,
	PK11CertListAll = 6
    } PK11CertListType;

    typedef PRUint32 PK11AttrFlags;

    typedef enum {
	PK11_OriginNULL,
	PK11_OriginDerive = 1,
	PK11_OriginGenerated = 2,
	PK11_OriginFortezzaHack = 3,
	PK11_OriginUnwrap = 4
    } PK11Origin;

    typedef enum {
	PK11_DIS_NONE,
	PK11_DIS_USER_SELECTED = 1,
	PK11_DIS_COULD_NOT_INIT_TOKEN = 2,
	PK11_DIS_TOKEN_VERIFY_FAILED = 3,
	PK11_DIS_TOKEN_NOT_PRESENT = 4
    } PK11DisableReasons;

    typedef enum {
	PK11_TypeGeneric,
	PK11_TypePrivKey = 1,
	PK11_TypePubKey = 2,
	PK11_TypeCert = 3,
	PK11_TypeSymKey = 4
    } PK11ObjectType;

    typedef char *(*PK11PasswordFunc) (PK11SlotInfo *, PRBool, void *);

    typedef struct SECKEYAttributeStr SECKEYAttribute;

    typedef struct SECKEYPrivateKeyInfoStr SECKEYPrivateKeyInfo;

    typedef struct SECKEYEncryptedPrivateKeyInfoStr
	SECKEYEncryptedPrivateKeyInfo;

    typedef enum {
	PK11TokenNotRemovable,
	PK11TokenPresent = 1,
	PK11TokenChanged = 2,
	PK11TokenRemoved = 3
    } PK11TokenStatus;

    typedef enum {
	PK11TokenRemovedOrChangedEvent,
	PK11TokenPresentEvent = 1
    } PK11TokenEvent;

    typedef struct PK11MergeLogStr PK11MergeLog;

    typedef struct PK11MergeLogNodeStr PK11MergeLogNode;


    struct SECMODModuleStr {
	PLArenaPool *arena;
	PRBool internal;
	PRBool loaded;
	PRBool isFIPS;
	char *dllName;
	char *commonName;
	void *library;
	void *functionList;
	PRLock *refLock;
	int refCount;
	PK11SlotInfo **slots;
	int slotCount;
	PK11PreSlotInfo *slotInfo;
	int slotInfoCount;
	SECMODModuleID moduleID;
	PRBool isThreadSafe;
	unsigned long int ssl[1];
	char *libraryParams;
	void *moduleDBFunc;
	SECMODModule *parent;
	PRBool isCritical;
	PRBool isModuleDB;
	PRBool moduleDBOnly;
	int trustOrder;
	int cipherOrder;
	unsigned long int evControlMask;
	CK_VERSION cryptokiVersion;
    };


    struct SECMODModuleListStr {
	SECMODModuleList *next;
	SECMODModule *module;
    };


















    struct SECKEYAttributeStr {
	SECItem attrType;
	SECItem **attrValue;
    };


    struct SECKEYPrivateKeyInfoStr {
	PLArenaPool *arena;
	SECItem version;
	SECAlgorithmID algorithm;
	SECItem privateKey;
	SECKEYAttribute **attributes;
    };


    struct SECKEYEncryptedPrivateKeyInfoStr {
	PLArenaPool *arena;
	SECAlgorithmID algorithm;
	SECItem encryptedData;
    };


    struct PK11MergeLogStr {
	PK11MergeLogNode *head;
	PK11MergeLogNode *tail;
	PLArenaPool *arena;
	int version;
	unsigned long int reserved1;
	unsigned long int reserved2;
	unsigned long int reserved3;
	void *reserverd4;
	void *reserverd5;
    };


    struct PK11MergeLogNodeStr {
	PK11MergeLogNode *next;
	PK11MergeLogNode *prev;
	PK11GenericObject *object;
	int error;
	CK_RV reserved1;
	unsigned long int reserved2;
	unsigned long int reserved3;
	void *reserved4;
	void *reserved5;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
