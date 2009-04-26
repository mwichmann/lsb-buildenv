#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_NSS_H_
#define _NSS3_NSS_H_

#include <nss3/seccomon.h>

#ifdef __cplusplus
extern "C" {
#endif


#define __nss_h_
#define NSS_VERSION	"3.11.4"
#define NSS_INIT_READONLY	0x1
#define NSS_INIT_NOROOTINIT	0x10
#define NSS_INIT_NOPK11FINALIZE	0x100
#define NSS_INIT_NOCERTDB	0x2
#define NSS_INIT_OPTIMIZESPACE	0x20
#define NSS_INIT_RESERVED	0x200
#define NSS_INIT_NOMODDB	0x4
#define NSS_INIT_PK11THREADSAFE	0x40
#define NSS_INIT_FORCEOPEN	0x8
#define NSS_INIT_PK11RELOAD	0x80
#define NSS_VMINOR	11
#define NSS_VMAJOR	3
#define NSS_VPATCH	4
#define NSS_INIT_COOPERATE	NSS_INIT_PK11THREADSAFE | NSS_INIT_PK11RELOAD | NSS_INIT_NOPK11FINALIZE | NSS_INIT_RESERVED
#define SECMOD_DB	"secmod.db"



/* Function prototypes */

    extern SECStatus NSS_Init(const char *configdir);
    extern SECStatus NSS_InitReadWrite(const char *configdir);
    extern SECStatus NSS_NoDB_Init(const char *configdir);
    extern SECStatus NSS_Shutdown(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
