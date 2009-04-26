#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_COMPOSITEP_H_
#define _X11_COMPOSITEP_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#include <X11/Composite.h>
#include <X11/IntrinsicP.h>
#include <X11/TranslateI.h>
#include <X11/CoreP.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XtInheritChangeManaged	((XtWidgetProc) _XtInherit)
#define _XtCompositeP_h	1
#define XtInheritGeometryManager	((XtGeometryHandler) _XtInherit)
#define XtInheritDeleteChild	((XtWidgetProc) _XtInherit)
#define XtInheritInsertChild	((XtWidgetProc) _XtInherit)
#define XtCompositeExtensionVersion	2L


    typedef struct _CompositePart CompositePart;

    typedef struct _CompositeClassPart CompositeClassPart;

    typedef struct _CompositePart *CompositePtr;

    typedef struct _CompositeRec CompositeRec;

    typedef struct _CompositeClassPart *CompositePartPtr;

    typedef struct {
	XtPointer next_extension;
	XrmQuark record_type;
	long int version;
	Cardinal record_size;
	Boolean accepts_objects;
	Boolean allows_change_managed_set;
    } CompositeClassExtensionRec;

    typedef CompositeClassExtensionRec *CompositeClassExtension;

    struct _CompositeClassPart {
	XtGeometryHandler geometry_manager;
	XtWidgetProc change_managed;
	XtWidgetProc insert_child;
	XtWidgetProc delete_child;
	XtPointer extension;
    };

    struct _CompositePart {
	WidgetList children;
	Cardinal num_children;
	Cardinal num_slots;
	XtOrderProc insert_position;
    };

    struct _CompositeRec {
	CorePart core;
	CompositePart composite;
    };


/* Additional instance fields for widgets of (sub)class 'Composite'*/


/* Additional class fields for widgets of (sub)class 'Composite'*/


    typedef struct _CompositeClassRec CompositeClassRec;

    struct _CompositeClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
    };


/* Function prototypes */

    extern CompositeClassRec compositeClassRec;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
