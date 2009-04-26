#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_ECL_EXP_H_
#define _NSS3_ECL_EXP_H_


#ifdef __cplusplus
extern "C" {
#endif


#define __ecl_exp_h_
#define ECCurve_SECG_CHAR2_163R2	ECCurve_NIST_B163
#define ECCurve_SECG_CHAR2_233R1	ECCurve_NIST_B233
#define ECCurve_WTLS_11	ECCurve_NIST_B233
#define ECCurve_SECG_CHAR2_283R1	ECCurve_NIST_B283
#define ECCurve_SECG_CHAR2_409R1	ECCurve_NIST_B409
#define ECCurve_SECG_CHAR2_571R1	ECCurve_NIST_B571
#define ECCurve_SECG_CHAR2_163K1	ECCurve_NIST_K163
#define ECCurve_WTLS_3	ECCurve_NIST_K163
#define ECCurve_SECG_CHAR2_233K1	ECCurve_NIST_K233
#define ECCurve_WTLS_10	ECCurve_NIST_K233
#define ECCurve_SECG_CHAR2_283K1	ECCurve_NIST_K283
#define ECCurve_SECG_CHAR2_409K1	ECCurve_NIST_K409
#define ECCurve_SECG_CHAR2_571K1	ECCurve_NIST_K571
#define ECCurve_SECG_PRIME_192R1	ECCurve_NIST_P192
#define ECCurve_X9_62_PRIME_192V1	ECCurve_NIST_P192
#define ECCurve_SECG_PRIME_224R1	ECCurve_NIST_P224
#define ECCurve_WTLS_12	ECCurve_NIST_P224
#define ECCurve_SECG_PRIME_256R1	ECCurve_NIST_P256
#define ECCurve_X9_62_PRIME_256V1	ECCurve_NIST_P256
#define ECCurve_SECG_PRIME_384R1	ECCurve_NIST_P384
#define ECCurve_SECG_PRIME_521R1	ECCurve_NIST_P521
#define ECCurve_WTLS_4	ECCurve_SECG_CHAR2_113R1
#define ECCurve_WTLS_6	ECCurve_SECG_PRIME_112R1
#define ECCurve_WTLS_7	ECCurve_SECG_PRIME_160R1
#define ECCurve_WTLS_5	ECCurve_X9_62_CHAR2_PNB163V1


    typedef struct ECCurveParamsStr ECCurveParams;

    enum ECField {
	ECField_GFp = 0,
	ECField_GF2m = 1
    };

    enum ECCurveName {
	ECCurve_noName = 0,
	ECCurve_NIST_P192 = 1,
	ECCurve_NIST_P224 = 2,
	ECCurve_NIST_P256 = 3,
	ECCurve_NIST_P384 = 4,
	ECCurve_NIST_P521 = 5,
	ECCurve_NIST_K163 = 6,
	ECCurve_NIST_B163 = 7,
	ECCurve_NIST_K233 = 8,
	ECCurve_NIST_B233 = 9,
	ECCurve_NIST_K283 = 10,
	ECCurve_NIST_B283 = 11,
	ECCurve_NIST_K409 = 12,
	ECCurve_NIST_B409 = 13,
	ECCurve_NIST_K571 = 14,
	ECCurve_NIST_B571 = 15,
	ECCurve_X9_62_PRIME_192V2 = 16,
	ECCurve_X9_62_PRIME_192V3 = 17,
	ECCurve_X9_62_PRIME_239V1 = 18,
	ECCurve_X9_62_PRIME_239V2 = 19,
	ECCurve_X9_62_PRIME_239V3 = 20,
	ECCurve_X9_62_CHAR2_PNB163V1 = 21,
	ECCurve_X9_62_CHAR2_PNB163V2 = 22,
	ECCurve_X9_62_CHAR2_PNB163V3 = 23,
	ECCurve_X9_62_CHAR2_PNB176V1 = 24,
	ECCurve_X9_62_CHAR2_TNB191V1 = 25,
	ECCurve_X9_62_CHAR2_TNB191V2 = 26,
	ECCurve_X9_62_CHAR2_TNB191V3 = 27,
	ECCurve_X9_62_CHAR2_PNB208W1 = 28,
	ECCurve_X9_62_CHAR2_TNB239V1 = 29,
	ECCurve_X9_62_CHAR2_TNB239V2 = 30,
	ECCurve_X9_62_CHAR2_TNB239V3 = 31,
	ECCurve_X9_62_CHAR2_PNB272W1 = 32,
	ECCurve_X9_62_CHAR2_PNB304W1 = 33,
	ECCurve_X9_62_CHAR2_TNB359V1 = 34,
	ECCurve_X9_62_CHAR2_PNB368W1 = 35,
	ECCurve_X9_62_CHAR2_TNB431R1 = 36,
	ECCurve_SECG_PRIME_112R1 = 37,
	ECCurve_SECG_PRIME_112R2 = 38,
	ECCurve_SECG_PRIME_128R1 = 39,
	ECCurve_SECG_PRIME_128R2 = 40,
	ECCurve_SECG_PRIME_160K1 = 41,
	ECCurve_SECG_PRIME_160R1 = 42,
	ECCurve_SECG_PRIME_160R2 = 43,
	ECCurve_SECG_PRIME_192K1 = 44,
	ECCurve_SECG_PRIME_224K1 = 45,
	ECCurve_SECG_PRIME_256K1 = 46,
	ECCurve_SECG_CHAR2_113R1 = 47,
	ECCurve_SECG_CHAR2_113R2 = 48,
	ECCurve_SECG_CHAR2_131R1 = 49,
	ECCurve_SECG_CHAR2_131R2 = 50,
	ECCurve_SECG_CHAR2_163R1 = 51,
	ECCurve_SECG_CHAR2_193R1 = 52,
	ECCurve_SECG_CHAR2_193R2 = 53,
	ECCurve_SECG_CHAR2_239K1 = 54,
	ECCurve_WTLS_1 = 55,
	ECCurve_WTLS_8 = 56,
	ECCurve_WTLS_9 = 57,
	ECCurve_pastLastCurve = 58
    };

    struct ECCurveParamsStr {
	char *text;
	enum ECField field;
	unsigned int size;
	char *irr;
	char *curvea;
	char *curveb;
	char *genx;
	char *geny;
	char *order;
	int cofactor;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
