#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_OBJECT_H_
#define _X11_OBJECT_H_

#include <X11/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern WidgetClass objectClass;
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
