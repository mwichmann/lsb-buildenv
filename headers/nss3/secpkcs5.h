#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_SECPKCS5_H_
#define _NSS3_SECPKCS5_H_


#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	pbeBitGenIDNull,
	pbeBitGenCipherKey = 1,
	pbeBitGenCipherIV = 2,
	pbeBitGenIntegrityKey = 3
    } PBEBitGenID;

    typedef struct PBEBitGenContextStr PBEBitGenContext;



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
