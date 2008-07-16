#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_SECASN1T_H_
#define _NSS3_SECASN1T_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct sec_ASN1Template_struct SEC_ASN1Template;

    typedef struct sec_DecoderContext_struct SEC_ASN1DecoderContext;

    typedef struct sec_EncoderContext_struct SEC_ASN1EncoderContext;

    typedef enum {
	SEC_ASN1_Identifier,
	SEC_ASN1_Length = 1,
	SEC_ASN1_Contents = 2,
	SEC_ASN1_EndOfContents = 3
    } SEC_ASN1EncodingPart;

    typedef void (*SEC_ASN1NotifyProc) (void *, PRBool, void *, int);

    typedef void (*SEC_ASN1WriteProc) (void *, const char *,
				       unsigned long int, int,
				       SEC_ASN1EncodingPart);


    struct sec_ASN1Template_struct {
	unsigned long int kind;
	unsigned long int offset;
	const void *sub;
	unsigned int size;
    };





#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
