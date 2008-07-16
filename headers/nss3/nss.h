#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_NSS_H_
#define _NSS3_NSS_H_

#include <nss3/seccomon.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef SECStatus(*NSS_ShutdownFunc) (void *, void *);


/* Function prototypes */

    extern SECStatus NSS_Init(const char *);
    extern SECStatus NSS_InitReadWrite(const char *);
    extern SECStatus NSS_NoDB_Init(const char *);
    extern SECStatus NSS_Shutdown(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
