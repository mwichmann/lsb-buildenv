#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_RECTOBJ_H_
#define _X11_RECTOBJ_H_

#include <X11/Xresource.h>
#include <X11/IntrinsicP.h>
#include <X11/Constraint.h>
#include <X11/ObjectP.h>
#include <X11/RectObjP.h>
#include <lsb/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _RectObjRec *RectObj;

    typedef struct _RectObjClassRec *RectObjClass;


/* Function prototypes */

    extern WidgetClass rectObjClass;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
