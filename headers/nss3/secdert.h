#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_SECDERT_H_
#define _NSS3_SECDERT_H_


#ifdef __cplusplus
extern "C" {
#endif


#define _SECDERT_H_


    typedef struct DERTemplateStr DERTemplate;

    struct DERTemplateStr {
	unsigned long int kind;
	unsigned int offset;
	DERTemplate *sub;
	unsigned long int arg;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
