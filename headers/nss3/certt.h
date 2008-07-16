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
#include <nspr4/prtime.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


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

    typedef enum CERTCRLEntryReasonCodeEnum {
	crlEntryReasonUnspecified,
	crlEntryReasonKeyCompromise = 1,
	crlEntryReasonCaCompromise = 2,
	crlEntryReasonAffiliationChanged = 3,
	crlEntryReasonSuperseded = 4,
	crlEntryReasonCessationOfOperation = 5,
	crlEntryReasoncertificatedHold = 6,
	crlEntryReasonRemoveFromCRL = 8,
	crlEntryReasonPrivilegeWithdrawn = 9,
	crlEntryReasonAaCompromise = 10
    } CERTCRLEntryReasonCode;

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

    typedef struct {
	SECItem issuerDomainPolicy;
	SECItem subjectDomainPolicy;
    } CERTPolicyMap;

    typedef struct {
	PLArenaPool *arena;
	CERTPolicyMap **policyMaps;
    } CERTCertificatePolicyMappings;

    typedef struct {
	SECItem inhibitAnySkipCerts;
    } CERTCertificateInhibitAny;

    typedef struct {
	SECItem explicitPolicySkipCerts;
	SECItem inhibitMappingSkipCerts;
    } CERTCertificatePolicyConstraints;

    typedef enum {
	cert_pi_end,
	cert_pi_nbioContext = 1,
	cert_pi_nbioAbort = 2,
	cert_pi_certList = 3,
	cert_pi_policyOID = 4,
	cert_pi_policyFlags = 5,
	cert_pi_keyusage = 6,
	cert_pi_extendedKeyusage = 7,
	cert_pi_date = 8,
	cert_pi_revocationFlags = 9,
	cert_pi_certStores = 10,
	cert_pi_trustAnchors = 11,
	cert_pi_max = 12
    } CERTValParamInType;

    typedef enum {
	cert_po_end,
	cert_po_nbioContext = 1,
	cert_po_trustAnchor = 2,
	cert_po_certList = 3,
	cert_po_policyOID = 4,
	cert_po_errorLog = 5,
	cert_po_usages = 6,
	cert_po_keyUsage = 7,
	cert_po_extendedKeyusage = 8,
	cert_po_max = 9
    } CERTValParamOutType;

    typedef enum {
	cert_revocation_method_crl,
	cert_revocation_method_ocsp = 1,
	cert_revocation_method_count = 2
    } CERTRevocationMethodIndex;

    typedef struct {
	PRUint32 number_of_defined_methods;
	PRUint64 *cert_rev_flags_per_method;
	PRUint32 number_of_preferred_methods;
	CERTRevocationMethodIndex *preferred_methods;
	PRUint64 cert_rev_method_independent_flags;
    } CERTRevocationTests;

    typedef struct {
	CERTRevocationTests leafTests;
	CERTRevocationTests chainTests;
    } CERTRevocationFlags;

    typedef struct CERTValParamInValueStr CERTValParamInValue;

    typedef struct CERTValParamOutValueStr CERTValParamOutValue;

    typedef struct CERTValInParam_struct CERTValInParam;

    typedef struct CERTValOutParam_struct CERTValOutParam;

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
	char name[];
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


    struct CERTValParamInValueStr {
	union {
	    PRBool b;
	    PRInt32 i;
	    PRUint32 ui;
	    PRInt64 l;
	    PRUint64 ul;
	    PRTime time;
	} scalar;
	union {
	    const void *p;
	    const char *s;
	    const CERTCertificate *cert;
	    const CERTCertList *chain;
	    const CERTRevocationFlags *revocation;
	} pointer;
	union {
	    const PRInt32 *pi;
	    const PRUint32 *pui;
	    const PRInt64 *pl;
	    const PRUint64 *pul;
	    const SECOidTag *oids;
	} array;
	int arraySize;
    };


    struct CERTValParamOutValueStr {
	union {
	    PRBool b;
	    PRInt32 i;
	    PRUint32 ui;
	    PRInt64 l;
	    PRUint64 ul;
	    SECCertificateUsage usages;
	} scalar;
	union {
	    void *p;
	    char *s;
	    CERTVerifyLog *log;
	    CERTCertificate *cert;
	    CERTCertList *chain;
	} pointer;
	union {
	    void *p;
	    SECOidTag *oids;
	} array;
	int arraySize;
    };


    struct CERTValInParam_struct {
	CERTValParamInType type;
	CERTValParamInValue value;
    };


    struct CERTValOutParam_struct {
	CERTValParamOutType type;
	CERTValParamOutValue value;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
