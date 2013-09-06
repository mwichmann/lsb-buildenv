#if (__LSB_VERSION__ >= 12 )
#ifndef _LSB_COMPOSITE_H_
#define _LSB_COMPOSITE_H_

#include <lsb/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


/* Special header to avoid header inclusion loops */
    typedef Cardinal(*XtOrderProc) (Widget);

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
