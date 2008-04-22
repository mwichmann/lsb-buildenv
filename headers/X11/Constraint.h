#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_CONSTRAINT_H_
#define _X11_CONSTRAINT_H_

#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/CompositeP.h>
#include <X11/ConstrainP.h>
#include <X11/CoreP.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    typedef struct _ConstraintClassRec *ConstraintWidgetClass;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern WidgetClass constraintWidgetClass;
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
