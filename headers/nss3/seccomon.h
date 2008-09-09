#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_SECCOMON_H_
#define _NSS3_SECCOMON_H_


#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	siBuffer,
	siClearDataBuffer = 1,
	siCipherDataBuffer = 2,
	siDERCertBuffer = 3,
	siEncodedCertBuffer = 4,
	siDERNameBuffer = 5,
	siEncodedNameBuffer = 6,
	siAsciiNameString = 7,
	siAsciiString = 8,
	siDEROID = 9,
	siUnsignedInteger = 10,
	siUTCTime = 11,
	siGeneralizedTime = 12,
	siVisibleString = 13,
	siUTF8String = 14,
	siBMPString = 15
    } SECItemType;

    typedef struct SECItemStr SECItem;

    typedef enum _SECStatus {
	SECWouldBlock = -2,
	SECFailure = -1,
	SECSuccess
    } SECStatus;

    typedef enum _SECComparison {
	SECLessThan = -1,
	SECEqual,
	SECGreaterThan = 1
    } SECComparison;


    struct SECItemStr {
	SECItemType type;
	unsigned char *data;
	unsigned int len;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
