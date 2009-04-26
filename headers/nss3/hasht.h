#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_HASHT_H_
#define _NSS3_HASHT_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _HASHT_H_
#define MD2_LENGTH	16
#define MD5_LENGTH	16
#define SHA1_LENGTH	20
#define SHA256_LENGTH	32
#define SHA384_LENGTH	48
#define SHA512_LENGTH	64
#define HASH_LENGTH_MAX	SHA512_LENGTH


    typedef struct SECHashObjectStr SECHashObject;

    typedef struct HASHContextStr HASHContext;

    typedef enum {
	HASH_AlgNULL,
	HASH_AlgMD2 = 1,
	HASH_AlgMD5 = 2,
	HASH_AlgSHA1 = 3,
	HASH_AlgSHA256 = 4,
	HASH_AlgSHA384 = 5,
	HASH_AlgSHA512 = 6,
	HASH_AlgTOTAL = 7
    } HASH_HashType;

    struct SECHashObjectStr {
	unsigned int length;
	void *(*create) (void);
	void *(*clone) (void *);
	void (*destroy) (void *, PRBool);
	void (*begin) (void *);
	void (*update) (void *, const unsigned char *, unsigned int);
	void (*end) (void *, unsigned char *, unsigned int *,
		     unsigned int);
	unsigned int blocklength;
	HASH_HashType type;
    };

    struct HASHContextStr {
	const struct SECHashObjectStr *hashobj;
	void *hash_context;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
