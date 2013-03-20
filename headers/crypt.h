#if (__LSB_VERSION__ >= 10 )
#ifndef _CRYPT_H_
#define _CRYPT_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 50
    struct crypt_data {
	char keysched[128];
	char sb0[32768];
	char sb1[32768];
	char sb2[32768];
	char sb3[32768];
	char crypt_3_buf[14];
	char current_salt[2];
	long int current_saltbits;
	int direction;
	int initialized;
    };

#endif				/* __LSB_VERSION__ >= 5.0 */


/* Function prototypes */

#if __LSB_VERSION__ >= 50
    extern char *crypt_r(const char *key, const char *salt,
			 struct crypt_data *data);
    extern void encrypt_r(const char *block, int edflag,
			  struct crypt_data *data);
    extern void setkey_r(const char *key, struct crypt_data *data);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
