#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_RECTOBJP_H_
#define _X11_RECTOBJP_H_

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xresource.h>
#include <X11/IntrinsicP.h>
#include <X11/RectObj.h>
#include <X11/ObjectP.h>
#include <lsb/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


/* RectObjPart*/
    typedef struct _RectObjPart RectObjPart;

    struct _RectObjPart {
	Position x;
	Position y;
	Dimension width;
	Dimension height;
	Dimension border_width;
	Boolean managed;
	Boolean sensitive;
	Boolean ancestor_sensitive;
    };


/* RectObjRec*/
    typedef struct _RectObjRec RectObjRec;

    struct _RectObjRec {
	ObjectPart object;
	RectObjPart rectangle;
    };


/* RectObjClassPart*/
    typedef struct _RectObjClassPart RectObjClassPart;

    struct _RectObjClassPart {
	WidgetClass superclass;
	String class_name;
	Cardinal widget_size;
	XtProc class_initialize;
	XtWidgetClassProc class_part_initialize;
	XtEnum class_inited;
	XtInitProc initialize;
	XtArgsProc initialize_hook;
	XtProc rect1;
	XtPointer rect2;
	Cardinal rect3;
	XtResourceList resources;
	Cardinal num_resources;
	XrmClass xrm_class;
	Boolean rect4;
	XtEnum rect5;
	Boolean rect6;
	Boolean rect7;
	XtWidgetProc destroy;
	XtWidgetProc resize;
	XtExposeProc expose;
	XtSetValuesFunc set_values;
	XtArgsFunc set_values_hook;
	XtAlmostProc set_values_almost;
	XtArgsProc get_values_hook;
	XtProc rect9;
	XtVersionType version;
	XtPointer callback_private;
	String rect10;
	XtGeometryHandler query_geometry;
	XtProc rect11;
	XtPointer extension;
    };


/* RectObjClassRec*/
    typedef struct _RectObjClassRec RectObjClassRec;

    struct _RectObjClassRec {
	RectObjClassPart rect_class;
    };


/* Function prototypes */

    extern RectObjClassRec rectObjClassRec;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
