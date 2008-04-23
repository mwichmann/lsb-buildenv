#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_COMPOSITEP_H_
#define _X11_COMPOSITEP_H_

#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define XtInheritGeometryManager	((XtGeometryHandler) _XtInherit)
#define XtInheritDeleteChild	((XtWidgetProc) _XtInherit)
#define XtInheritInsertChild	((XtWidgetProc) _XtInherit)
#define XtCompositeExtensionVersion	2L
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
    typedef struct _CompositeClassPart CompositeClassPart;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _CompositeClassPart {
	XtGeometryHandler geometry_manager;
	XtWidgetProc change_managed;
	XtWidgetProc insert_child;
	XtWidgetProc delete_child;
	XtPointer extension;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Additional instance fields for widgets of (sub)class 'Composite'*/


/* Additional class fields for widgets of (sub)class 'Composite'*/


#if __LSB_VERSION__ >= 12
    typedef struct _CompositeClassRec CompositeClassRec;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern CompositeClassRec compositeClassRec;
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
