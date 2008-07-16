#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_PREENC_H_
#define _NSS3_PREENC_H_


#ifdef __cplusplus
extern "C" {
#endif


    typedef struct PERSAKeyHeaderStr PERSAKeyHeader;

    typedef struct PEFortezzaHeaderStr PEFortezzaHeader;

    typedef struct PEFortezzaGeneratedHeaderStr PEFortezzaGeneratedHeader;

    typedef struct PEFixedKeyHeaderStr PEFixedKeyHeader;

    typedef struct PEHeaderStr PEHeader;


    struct PERSAKeyHeaderStr {
	unsigned char pkcs11Mech[3];
	unsigned char issuerLen[2];
	unsigned char serialLen[2];
	unsigned char ivLen[2];
	unsigned char keyLen[2];
	unsigned char data[1];
    };


    struct PEFortezzaHeaderStr {
	unsigned char key[12];
	unsigned char iv[23];
	unsigned char hash[19];
	unsigned char serial[8];
    };


    struct PEFortezzaGeneratedHeaderStr {
	unsigned char key[12];
	unsigned char iv[23];
	unsigned char hash[19];
	unsigned char Ra[2];
	unsigned char Y[2];
    };


    struct PEFixedKeyHeaderStr {
	unsigned char pkcs11Mech[3];
	unsigned char labelLen[2];
	unsigned char keyIDLen[2];
	unsigned char ivLen[2];
	unsigned char keyLen[2];
	unsigned char data[1];
    };


    struct PEHeaderStr {
	unsigned char magic[2];
	unsigned char len[2];
	unsigned char type[2];
	unsigned char version[2];
	union {
	    PEFortezzaHeader fortezza;
	    PEFortezzaGeneratedHeader g_fortezza;
	    PEFixedKeyHeader fixed;
	    PERSAKeyHeader rsa;
	} u;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
