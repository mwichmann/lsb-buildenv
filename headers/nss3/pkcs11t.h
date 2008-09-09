#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_PKCS11T_H_
#define _NSS3_PKCS11T_H_


#ifdef __cplusplus
extern "C" {
#endif


    typedef unsigned char CK_BYTE;

    typedef CK_BYTE CK_CHAR;

    typedef CK_BYTE CK_UTF8CHAR;

    typedef unsigned long int CK_ULONG;

    typedef CK_ULONG CK_FLAGS;

    typedef void *CK_VOID_PTR;

    typedef struct CK_VERSION CK_VERSION;

    typedef struct CK_INFO CK_INFO;

    typedef CK_ULONG CK_SLOT_ID;

    typedef struct CK_SLOT_INFO CK_SLOT_INFO;

    typedef struct CK_TOKEN_INFO CK_TOKEN_INFO;

    typedef CK_ULONG CK_SESSION_HANDLE;

    typedef CK_ULONG CK_OBJECT_HANDLE;

    typedef CK_ULONG CK_OBJECT_CLASS;

    typedef CK_ULONG CK_KEY_TYPE;

    typedef CK_ULONG CK_ATTRIBUTE_TYPE;

    typedef struct CK_ATTRIBUTE CK_ATTRIBUTE;

    typedef CK_ATTRIBUTE *CK_ATTRIBUTE_PTR;

    typedef CK_ULONG CK_MECHANISM_TYPE;

    typedef struct CK_MECHANISM CK_MECHANISM;

    typedef CK_MECHANISM *CK_MECHANISM_PTR;

    typedef CK_ULONG CK_RV;


    struct CK_VERSION {
	CK_BYTE major;
	CK_BYTE minor;
    };


    struct CK_INFO {
	CK_VERSION cryptokiVersion;
	CK_UTF8CHAR manufacturerID[31];
	CK_FLAGS flags;
	CK_UTF8CHAR libraryDescription[31];
	CK_VERSION libraryVersion;
    };


    struct CK_SLOT_INFO {
	CK_UTF8CHAR slotDescription[63];
	CK_UTF8CHAR manufacturerID[31];
	CK_FLAGS flags;
	CK_VERSION hardwareVersion;
	CK_VERSION firmwareVersion;
    };


    struct CK_TOKEN_INFO {
	CK_UTF8CHAR label[31];
	CK_UTF8CHAR manufacturerID[31];
	CK_UTF8CHAR model[15];
	CK_CHAR serialNumber[15];
	CK_FLAGS flags;
	CK_ULONG ulMaxSessionCount;
	CK_ULONG ulSessionCount;
	CK_ULONG ulMaxRwSessionCount;
	CK_ULONG ulRwSessionCount;
	CK_ULONG ulMaxPinLen;
	CK_ULONG ulMinPinLen;
	CK_ULONG ulTotalPublicMemory;
	CK_ULONG ulFreePublicMemory;
	CK_ULONG ulTotalPrivateMemory;
	CK_ULONG ulFreePrivateMemory;
	CK_VERSION hardwareVersion;
	CK_VERSION firmwareVersion;
	CK_CHAR utcTime[15];
    };


    struct CK_ATTRIBUTE {
	CK_ATTRIBUTE_TYPE type;
	CK_VOID_PTR pValue;
	CK_ULONG ulValueLen;
    };


    struct CK_MECHANISM {
	CK_MECHANISM_TYPE mechanism;
	CK_VOID_PTR pParameter;
	CK_ULONG ulParameterLen;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
