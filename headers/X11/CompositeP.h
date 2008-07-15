#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_COMPOSITEP_H_
#define _X11_COMPOSITEP_H_

#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XtInheritGeometryManager	((XtGeometryHandler) _XtInherit)
#define XtInheritDeleteChild	((XtWidgetProc) _XtInherit)
#define XtInheritInsertChild	((XtWidgetProc) _XtInherit)
#define XtCompositeExtensionVersion	2L


    typedef struct _CompositeClassPart CompositeClassPart;

    struct _CompositeClassPart {
	XtGeometryHandler geometry_manager;
	XtWidgetProc change_managed;
	XtWidgetProc insert_child;
	XtWidgetProc delete_child;
	XtPointer extension;
    };


/* Additional instance fields for widgets of (sub)class 'Composite'*/


/* Additional class fields for widgets of (sub)class 'Composite'*/


    typedef struct _CompositeClassRec CompositeClassRec;


/* Function prototypes */

    extern CompositeClassRec compositeClassRec;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
