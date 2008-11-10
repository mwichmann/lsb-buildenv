#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_CERTT_H_
#define _NSS3_CERTT_H_

#include <nss3/pkcs11t.h>
#include <nss3/seccomon.h>
#include <nss3/secmodt.h>
#include <nss3/secoidt.h>
#include <nspr4/plarena.h>
#include <nspr4/prclist.h>
#include <nspr4/prlock.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define NS_CERT_TYPE_CA	 \
	( NS_CERT_TYPE_SSL_CA | NS_CERT_TYPE_EMAIL_CA | \
	NS_CERT_TYPE_OBJECT_SIGNING_CA | EXT_KEY_USAGE_STATUS_RESPONDER )
#define NS_CERT_TYPE_APP	 \
	( NS_CERT_TYPE_SSL_CLIENT | NS_CERT_TYPE_SSL_SERVER | \
	NS_CERT_TYPE_EMAIL | NS_CERT_TYPE_OBJECT_SIGNING )
#define SEC_GET_TRUST_FLAGS(trust,type)	 \
	(((type)==trustSSL)?((trust)->sslFlags): \
	(((type)==trustEmail)?((trust)->emailFlags): \
	(((type)==trustObjectSigning)?((trust)->objectSigningFlags):0)))
#define KU_ALL	 \
	(KU_DIGITAL_SIGNATURE | KU_NON_REPUDIATION | KU_KEY_ENCIPHERMENT | \
	KU_DATA_ENCIPHERMENT | KU_KEY_AGREEMENT | KU_KEY_CERT_SIGN | \
	KU_CRL_SIGN)
#define CERT_LIST_END(n,l)	(((void *)n) == ((void *)&l->list))
#define CERT_LIST_NEXT(n)	((CERTCertListNode *)n->links.next)
#define CERT_LIST_HEAD(l)	((CERTCertListNode *)PR_LIST_HEAD(&l->list))
#define certificateUsageSSLClient	(0x0001)
#define certificateUsageSSLServer	(0x0002)
#define certificateUsageSSLServerWithStepUp	(0x0004)
#define certificateUsageSSLCA	(0x0008)
#define certificateUsageEmailSigner	(0x0010)
#define certificateUsageEmailRecipient	(0x0020)
#define certificateUsageObjectSigner	(0x0040)
#define certificateUsageUserCertImport	(0x0080)
#define NS_CERT_TYPE_OBJECT_SIGNING_CA	(0x01)
#define certificateUsageVerifyCA	(0x0100)
#define KU_CRL_SIGN	(0x02)
#define NS_CERT_TYPE_EMAIL_CA	(0x02)
#define RF_CERTIFICATE_HOLD	(0x02)
#define certificateUsageProtectedObjectSigner	(0x0200)
#define KU_KEY_CERT_SIGN	(0x04)
#define NS_CERT_TYPE_SSL_CA	(0x04)
#define RF_CESSATION_OF_OPERATION	(0x04)
#define certificateUsageStatusResponder	(0x0400)
#define KU_KEY_AGREEMENT	(0x08)
#define NS_CERT_TYPE_RESERVED	(0x08)
#define RF_SUPERSEDED	(0x08)
#define certificateUsageAnyCA	(0x0800)
#define KU_DATA_ENCIPHERMENT	(0x10)
#define NS_CERT_TYPE_OBJECT_SIGNING	(0x10)
#define RF_AFFILIATION_CHANGED	(0x10)
#define KU_KEY_ENCIPHERMENT	(0x20)
#define NS_CERT_TYPE_EMAIL	(0x20)
#define RF_CA_COMPROMISE	(0x20)
#define KU_NON_REPUDIATION	(0x40)
#define NS_CERT_TYPE_SSL_SERVER	(0x40)
#define RF_KEY_COMPROMISE	(0x40)
#define EXT_KEY_USAGE_STATUS_RESPONDER	(0x4000)
#define KU_KEY_AGREEMENT_OR_ENCIPHERMENT	(0x4000)
#define KU_DIGITAL_SIGNATURE	(0x80)
#define NS_CERT_TYPE_SSL_CLIENT	(0x80)
#define RF_UNUSED	(0x80)
#define EXT_KEY_USAGE_TIME_STAMP	(0x8000)
#define KU_NS_GOVT_APPROVED	(0x8000)
#define CERT_UNLIMITED_PATH_CONSTRAINT	-2
#define SEC_CERTIFICATE_REQUEST_VERSION	0
#define SEC_CERTIFICATE_VERSION_1	0
#define SEC_CRL_VERSION_1	0
#define SEC_CERTIFICATE_VERSION_2	1
#define SEC_CERT_CLASS_CA	1
#define SEC_CERT_NICKNAMES_ALL	1
#define SEC_CRL_VERSION_2	1
#define SEC_CERTIFICATE_VERSION_3	2
#define SEC_CERT_CLASS_SERVER	2
#define SEC_CERT_NICKNAMES_USER	2
#define CERT_MAX_CERT_CHAIN	20
#define SEC_CERT_CLASS_USER	3
#define SEC_CERT_NICKNAMES_SERVER	3
#define SEC_CERT_CLASS_EMAIL	4
#define SEC_CERT_NICKNAMES_CA	4
#define certificateUsageHighest	certificateUsageAnyCA
#define CERT_LIST_EMPTY(l)	CERT_LIST_END(CERT_LIST_HEAD(l), l)


    typedef struct CERTAVAStr CERTAVA;

    typedef struct CERTAttributeStr CERTAttribute;

    typedef struct CERTAuthInfoAccessStr CERTAuthInfoAccess;

    typedef struct CERTAuthKeyIDStr CERTAuthKeyID;

    typedef struct CERTBasicConstraintsStr CERTBasicConstraints;

    typedef struct NSSTrustDomainStr CERTCertDBHandle;

    typedef struct CERTCertExtensionStr CERTCertExtension;

    typedef struct CERTCertListStr CERTCertList;

    typedef struct CERTCertListNodeStr CERTCertListNode;

    typedef struct CERTCertNicknamesStr CERTCertNicknames;

    typedef struct CERTCertTrustStr CERTCertTrust;

    typedef struct CERTSignedDataStr CERTSignedData;

    typedef struct CERTCertificateListStr CERTCertificateList;

    typedef struct CERTNameStr CERTName;

    typedef struct CERTCrlStr CERTCrl;

    typedef struct CERTCrlDistributionPointsStr CERTCrlDistributionPoints;

    typedef struct CERTCrlEntryStr CERTCrlEntry;

    typedef struct CERTCrlHeadNodeStr CERTCrlHeadNode;

    typedef struct CERTCrlNodeStr CERTCrlNode;

    typedef struct CERTDistNamesStr CERTDistNames;

    typedef struct OtherNameStr OtherName;

    typedef struct CERTGeneralNameListStr CERTGeneralNameList;

    typedef struct CERTIssuerAndSNStr CERTIssuerAndSN;

    typedef struct CERTSubjectPublicKeyInfoStr CERTSubjectPublicKeyInfo;

    typedef struct CERTGeneralNameStr CERTGeneralName;

    typedef struct CERTNameConstraintsStr CERTNameConstraints;

    typedef struct CERTOKDomainNameStr CERTOKDomainName;

    typedef struct CERTPrivKeyUsagePeriodStr CERTPrivKeyUsagePeriod;

    typedef struct CERTRDNStr CERTRDN;

    typedef struct CERTSignedCrlStr CERTSignedCrl;

    typedef struct CERTValidityStr CERTValidity;

    typedef struct CERTStatusConfigStr CERTStatusConfig;

    typedef struct CERTSubjectListStr CERTSubjectList;

    typedef struct CERTSubjectNodeStr CERTSubjectNode;

    typedef struct CERTCertificateRequestStr CERTCertificateRequest;

    typedef struct CERTCertificateStr CERTCertificate;

    typedef struct CERTVerifyLogStr CERTVerifyLog;

    typedef struct CRLDistributionPointStr CRLDistributionPoint;

    typedef enum SECCertUsageEnum {
	certUsageSSLClient,
	certUsageSSLServer = 1,
	certUsageSSLServerWithStepUp = 2,
	certUsageSSLCA = 3,
	certUsageEmailSigner = 4,
	certUsageEmailRecipient = 5,
	certUsageObjectSigner = 6,
	certUsageUserCertImport = 7,
	certUsageVerifyCA = 8,
	certUsageProtectedObjectSigner = 9,
	certUsageStatusResponder = 10,
	certUsageAnyCA = 11
    } SECCertUsage;

    typedef PRInt64 SECCertificateUsage;

    typedef enum SECCertTimeValidityEnum {
	secCertTimeValid,
	secCertTimeExpired = 1,
	secCertTimeNotValidYet = 2,
	secCertTimeUndetermined = 3
    } SECCertTimeValidity;

    typedef enum CERTCompareValidityStatusEnum {
	certValidityUndetermined,
	certValidityChooseB = 1,
	certValidityEqual = 2,
	certValidityChooseA = 3
    } CERTCompareValidityStatus;

    typedef enum CERTGeneralNameTypeEnum {
	certOtherName = 1,
	certRFC822Name = 2,
	certDNSName = 3,
	certX400Address = 4,
	certDirectoryName = 5,
	certEDIPartyName = 6,
	certURI = 7,
	certIPAddress = 8,
	certRegisterID = 9
    } CERTGeneralNameType;

    typedef struct CERTNameConstraintStr CERTNameConstraint;

    typedef enum DistributionPointTypesEnum {
	generalName = 1,
	relativeDistinguishedName = 2
    } DistributionPointTypes;

    typedef SECStatus(*CERTStatusChecker) (CERTCertDBHandle *,
					   CERTCertificate *, PRInt64,
					   void *);

    typedef SECStatus(*CERTStatusDestroy) (CERTStatusConfig *);

    typedef struct {
	SECOidTag oid;
	SECItem qualifierID;
	SECItem qualifierValue;
    } CERTPolicyQualifier;

    typedef struct {
	SECOidTag oid;
	SECItem policyID;
	CERTPolicyQualifier **policyQualifiers;
    } CERTPolicyInfo;

    typedef struct {
	PLArenaPool *arena;
	CERTPolicyInfo **policyInfos;
    } CERTCertificatePolicies;

    typedef struct {
	SECItem organization;
	SECItem **noticeNumbers;
    } CERTNoticeReference;

    typedef struct {
	PLArenaPool *arena;
	CERTNoticeReference noticeReference;
	SECItem derNoticeReference;
	SECItem displayText;
    } CERTUserNotice;

    typedef struct {
	PLArenaPool *arena;
	SECItem **oids;
    } CERTOidSequence;

    struct CERTDistNamesStr {
	PLArenaPool *arena;
	int nnames;
	SECItem *names;
	void *head;
    };

    struct CERTVerifyLogNodeStr {
	CERTCertificate *cert;
	long int error;
	unsigned int depth;
	void *arg;
	struct CERTVerifyLogNodeStr *next;
	struct CERTVerifyLogNodeStr *prev;
    };


    struct CERTAVAStr {
	SECItem type;
	SECItem value;
    };


    struct CERTAttributeStr {
	SECItem attrType;
	SECItem **attrValue;
    };


    struct CERTAuthInfoAccessStr {
	SECItem method;
	SECItem derLocation;
	CERTGeneralName *location;
    };


    struct CERTAuthKeyIDStr {
	SECItem keyID;
	CERTGeneralName *authCertIssuer;
	SECItem authCertSerialNumber;
	SECItem **DERAuthCertIssuer;
    };


    struct CERTBasicConstraintsStr {
	PRBool isCA;
	int pathLenConstraint;
    };




    struct CERTCertExtensionStr {
	SECItem id;
	SECItem critical;
	SECItem value;
    };


    struct CERTCertListStr {
	PRCList list;
	PLArenaPool *arena;
    };


    struct CERTCertListNodeStr {
	PRCList links;
	CERTCertificate *cert;
	void *appData;
    };


    struct CERTCertNicknamesStr {
	PLArenaPool *arena;
	void *head;
	int numnicknames;
	char **nicknames;
	int what;
	int totallen;
    };


    struct CERTCertTrustStr {
	unsigned int sslFlags;
	unsigned int emailFlags;
	unsigned int objectSigningFlags;
    };


    struct CERTSignedDataStr {
	SECItem data;
	SECAlgorithmID signatureAlgorithm;
	SECItem signature;
    };


    struct CERTCertificateListStr {
	SECItem *certs;
	int len;
	PLArenaPool *arena;
    };


    struct CERTNameStr {
	PLArenaPool *arena;
	CERTRDN **rdns;
    };


    struct CERTCrlStr {
	PLArenaPool *arena;
	SECItem version;
	SECAlgorithmID signatureAlg;
	SECItem derName;
	CERTName name;
	SECItem lastUpdate;
	SECItem nextUpdate;
	CERTCrlEntry **entries;
	CERTCertExtension **extensions;
    };


    struct CERTCrlDistributionPointsStr {
	CRLDistributionPoint **distPoints;
    };


    struct CERTCrlEntryStr {
	SECItem serialNumber;
	SECItem revocationDate;
	CERTCertExtension **extensions;
    };


    struct CERTCrlHeadNodeStr {
	PLArenaPool *arena;
	CERTCertDBHandle *dbhandle;
	CERTCrlNode *first;
	CERTCrlNode *last;
    };


    struct CERTCrlNodeStr {
	CERTCrlNode *next;
	int type;
	CERTSignedCrl *crl;
    };


    struct OtherNameStr {
	SECItem name;
	SECItem oid;
    };


    struct CERTGeneralNameListStr {
	PLArenaPool *arena;
	CERTGeneralName *name;
	int refCount;
	int len;
	PRLock *lock;
    };


    struct CERTIssuerAndSNStr {
	SECItem derIssuer;
	CERTName issuer;
	SECItem serialNumber;
    };


    struct CERTSubjectPublicKeyInfoStr {
	PLArenaPool *arena;
	SECAlgorithmID algorithm;
	SECItem subjectPublicKey;
    };


    struct CERTGeneralNameStr {
	CERTGeneralNameType type;
	union {
	    CERTName directoryName;
	    OtherName OthName;
	    SECItem other;
	} name;
	SECItem derDirectoryName;
	PRCList l;
    };


    struct CERTNameConstraintsStr {
	CERTNameConstraint *permited;
	CERTNameConstraint *excluded;
	SECItem **DERPermited;
	SECItem **DERExcluded;
    };


    struct CERTOKDomainNameStr {
	CERTOKDomainName *next;
	char name[1];
    };


    struct CERTPrivKeyUsagePeriodStr {
	SECItem notBefore;
	SECItem notAfter;
	PLArenaPool *arena;
    };


    struct CERTRDNStr {
	CERTAVA **avas;
    };


    struct CERTSignedCrlStr {
	PLArenaPool *arena;
	CERTCrl crl;
	void *reserved1;
	PRBool reserved2;
	PRBool isperm;
	PRBool istemp;
	int referenceCount;
	CERTCertDBHandle *dbhandle;
	CERTSignedData signatureWrap;
	char *url;
	SECItem *derCrl;
	PK11SlotInfo *slot;
	CK_OBJECT_HANDLE pkcs11ID;
	void *opaque;
    };


    struct CERTValidityStr {
	PLArenaPool *arena;
	SECItem notBefore;
	SECItem notAfter;
    };


    struct CERTStatusConfigStr {
	CERTStatusChecker statusChecker;
	CERTStatusDestroy statusDestroy;
	void *statusContext;
    };


    struct CERTSubjectListStr {
	PLArenaPool *arena;
	int ncerts;
	char *emailAddr;
	CERTSubjectNode *head;
	CERTSubjectNode *tail;
	void *entry;
    };


    struct CERTSubjectNodeStr {
	struct CERTSubjectNodeStr *next;
	struct CERTSubjectNodeStr *prev;
	SECItem certKey;
	SECItem keyID;
    };


    struct CERTCertificateRequestStr {
	PLArenaPool *arena;
	SECItem version;
	CERTName subject;
	CERTSubjectPublicKeyInfo subjectPublicKeyInfo;
	CERTAttribute **attributes;
    };


    struct CERTCertificateStr {
	PLArenaPool *arena;
	char *subjectName;
	char *issuerName;
	CERTSignedData signatureWrap;
	SECItem derCert;
	SECItem derIssuer;
	SECItem derSubject;
	SECItem derPublicKey;
	SECItem certKey;
	SECItem version;
	SECItem serialNumber;
	SECAlgorithmID signature;
	CERTName issuer;
	CERTValidity validity;
	CERTName subject;
	CERTSubjectPublicKeyInfo subjectPublicKeyInfo;
	SECItem issuerID;
	SECItem subjectID;
	CERTCertExtension **extensions;
	char *emailAddr;
	CERTCertDBHandle *dbhandle;
	SECItem subjectKeyID;
	PRBool keyIDGenerated;
	unsigned int keyUsage;
	unsigned int rawKeyUsage;
	PRBool keyUsagePresent;
	PRUint32 nsCertType;
	PRBool keepSession;
	PRBool timeOK;
	CERTOKDomainName *domainOK;
	PRBool isperm;
	PRBool istemp;
	char *nickname;
	char *dbnickname;
	struct NSSCertificateStr *nssCertificate;
	CERTCertTrust *trust;
	int referenceCount;
	CERTSubjectList *subjectList;
	CERTAuthKeyID *authKeyID;
	PRBool isRoot;
	union {
	    void *apointer;
	    struct {
		unsigned int hasUnsupportedCriticalExt;
	    } bits;
	} options;
	int series;
	PK11SlotInfo *slot;
	CK_OBJECT_HANDLE pkcs11ID;
	PRBool ownSlot;
    };


    struct CERTVerifyLogStr {
	PLArenaPool *arena;
	unsigned int count;
	struct CERTVerifyLogNodeStr *head;
	struct CERTVerifyLogNodeStr *tail;
    };


    struct CRLDistributionPointStr {
	DistributionPointTypes distPointType;
	union {
	    CERTGeneralName *fullName;
	    CERTRDN relativeName;
	} distPoint;
	SECItem reasons;
	CERTGeneralName *crlIssuer;
	SECItem derDistPoint;
	SECItem derRelativeName;
	SECItem **derCrlIssuer;
	SECItem **derFullName;
	SECItem bitsmap;
    };


    struct CERTNameConstraintStr {
	CERTGeneralName name;
	SECItem DERName;
	SECItem min;
	SECItem max;
	PRCList l;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
