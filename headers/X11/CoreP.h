#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_COREP_H_
#define _X11_COREP_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/TranslateI.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XtInheritSetValuesAlmost	((XtAlmostProc) _XtInherit)
#define XtInheritRealize	((XtRealizeProc) _XtInherit)
#define XtInheritResize	((XtWidgetProc) _XtInherit)
#define XtInheritDisplayAccelerator	((XtStringProc) _XtInherit)
#define _XtCoreP_h	1


    typedef struct _CorePart CorePart;

    typedef struct _WidgetRec WidgetRec;

    typedef struct _WidgetRec CoreRec;

    typedef struct _WidgetClassRec WidgetClassRec;

    typedef struct _WidgetClassRec CoreClassRec;

#if __LSB_VERSION__ >= 12
    typedef struct _CoreClassPart CoreClassPart;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _CoreClassPart {
	WidgetClass superclass;
	String class_name;
	Cardinal widget_size;
	XtProc class_initialize;
	XtWidgetClassProc class_part_initialize;
	XtEnum class_inited;
	XtInitProc initialize;
	XtArgsProc initialize_hook;
	XtRealizeProc realize;
	XtActionList actions;
	Cardinal num_actions;
	XtResourceList resources;
	Cardinal num_resources;
	XrmClass xrm_class;
	Boolean compress_motion;
	XtEnum compress_exposure;
	Boolean compress_enterleave;
	Boolean visible_interest;
	XtWidgetProc destroy;
	XtWidgetProc resize;
	XtExposeProc expose;
	XtSetValuesFunc set_values;
	XtArgsFunc set_values_hook;
	XtAlmostProc set_values_almost;
	XtArgsProc get_values_hook;
	XtAcceptFocusProc accept_focus;
	XtVersionType version;
	XtPointer callback_private;
	String tm_table;
	XtGeometryHandler query_geometry;
	XtStringProc display_accelerator;
	XtPointer extension;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */

    struct _CorePart {
	Widget self;
	WidgetClass widget_class;
	Widget parent;
	XrmName xrm_name;
	Boolean being_destroyed;
	XtCallbackList destroy_callbacks;
	XtPointer constraints;
	Position x;
	Position y;
	Dimension width;
	Dimension height;
	Dimension border_width;
	Boolean managed;
	Boolean sensitive;
	Boolean ancestor_sensitive;
	XtEventTable event_table;
	XtTMRec tm;
	XtTranslations accelerators;
	Pixel border_pixel;
	Pixmap border_pixmap;
	WidgetList popup_list;
	Cardinal num_popups;
	String name;
	Screen *screen;
	Colormap colormap;
	Window window;
	Cardinal depth;
	Pixel background_pixel;
	Pixmap background_pixmap;
	Boolean visible;
	Boolean mapped_when_managed;
    };

    struct _WidgetRec {
	CorePart core;
    };

    struct _WidgetClassRec {
	CoreClassPart core_class;
    };


/* Function prototypes */

    extern int _XtInheritTranslations;
    extern WidgetClassRec widgetClassRec;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
