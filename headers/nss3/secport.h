#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_SECPORT_H_
#define _NSS3_SECPORT_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _SECPORT_H_


    typedef PRBool(*PORTCharConversionWSwapFunc) (PRBool, unsigned char *,
						  unsigned int,
						  unsigned char *,
						  unsigned int,
						  unsigned int *, PRBool);

    typedef PRBool(*PORTCharConversionFunc) (PRBool, unsigned char *,
					     unsigned int, unsigned char *,
					     unsigned int, unsigned int *);

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
