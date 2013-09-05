#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_CONSTRAINT_H_
#define _X11_CONSTRAINT_H_

#include <X11/Xresource.h>
#include <X11/IntrinsicP.h>
#include <X11/CompositeP.h>
#include <X11/ConstrainP.h>
#include <X11/CoreP.h>
#include <lsb/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _XtConstraint_h	1


    typedef struct _ConstraintClassRec *ConstraintWidgetClass;


/* Function prototypes */

    extern WidgetClass constraintWidgetClass;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
