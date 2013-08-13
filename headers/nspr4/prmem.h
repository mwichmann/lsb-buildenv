#if (__LSB_VERSION__ >= 50 )
#ifndef _NSPR4_PRMEM_H_
#define _NSPR4_PRMEM_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define PR_NEW(_struct)	((_struct *) PR_MALLOC(sizeof(_struct)))
#define PR_NEWZAP(_struct)	((_struct*)PR_Calloc(1, sizeof(_struct)))
#define PR_CALLOC(_size)	(PR_Calloc(1, (_size)))
#define PR_MALLOC(_bytes)	(PR_Malloc(_bytes))
#define PR_REALLOC(_ptr, _size)	(PR_Realloc((_ptr), (_size)))
#define PR_FREEIF(_ptr)	if (_ptr) PR_DELETE(_ptr)
#define PR_DELETE(_ptr)	{ PR_Free(_ptr); (_ptr) = NULL; }



/* Function prototypes */

    extern void *PR_Calloc(PRUint32 nelem, PRUint32 elsize);
    extern void PR_Free(void *ptr);
    extern void *PR_Malloc(PRUint32 size);
    extern void *PR_Realloc(void *ptr, PRUint32 size);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
