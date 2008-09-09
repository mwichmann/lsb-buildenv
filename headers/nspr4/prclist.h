#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRCLIST_H_
#define _NSPR4_PRCLIST_H_


#ifdef __cplusplus
extern "C" {
#endif


    typedef struct PRCListStr PRCList;


    struct PRCListStr {
	PRCList *next;
	PRCList *prev;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
