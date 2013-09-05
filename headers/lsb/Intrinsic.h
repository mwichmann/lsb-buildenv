#if (__LSB_VERSION__ >= 11 )
#ifndef _LSB_INTRINSIC_H_
#define _LSB_INTRINSIC_H_

#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef long unsigned int Pixel;

#if __LSB_VERSION__ >= 12
    typedef unsigned int Cardinal;

    typedef void *XtPointer;

    typedef struct _WidgetRec *Widget;

    typedef char *String;

    typedef unsigned int XtGeometryMask;

    typedef short int Position;

    typedef short unsigned int Dimension;

    typedef struct {
	XtGeometryMask request_mode;
	Position x;
	Position y;
	Dimension width;
	Dimension height;
	Dimension border_width;
	Widget sibling;
	int stack_mode;
    } XtWidgetGeometry;

    typedef struct _XtResource *XtResourceList;

    typedef void (*XtActionProc) (Widget, XEvent *, String *, Cardinal *);

    typedef struct _XtActionsRec *XtActionList;

    typedef char Boolean;

    typedef unsigned char XtEnum;

    typedef long unsigned int XtInputId;

    typedef Widget *WidgetList;

    typedef enum {
	XtGeometryYes = 0,
	XtGeometryNo = 1,
	XtGeometryAlmost = 2,
	XtGeometryDone = 3
    } XtGeometryResult;

    typedef long int XtArgVal;

    typedef struct {
	String name;
	XtArgVal value;
    } Arg;

    typedef Arg *ArgList;

    typedef void (*XtCallbackProc) (Widget, XtPointer, XtPointer);

    typedef struct _XtCallbackRec *XtCallbackList;

    typedef long unsigned int EventMask;

    typedef enum {
	XtGrabNone = 0,
	XtGrabNonexclusive = 1,
	XtGrabExclusive = 2
    } XtGrabKind;

    typedef long unsigned int XtValueMask;

    typedef struct _XtEventRec *XtEventTable;

    typedef void (*XtCreatePopupChildProc) (Widget);

    typedef XtActionProc *XtBoundActions;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _WidgetRec;

    struct _XtResource {
	String resource_name;
	String resource_class;
	String resource_type;
	Cardinal resource_size;
	Cardinal resource_offset;
	String default_type;
	XtPointer default_addr;
    };

    struct _XtActionsRec {
	String string;
	XtActionProc proc;
    };

    struct _WidgetClassRec;

    struct _XtCallbackRec {
	XtCallbackProc callback;
	XtPointer closure;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* WidgetClass*/
#if __LSB_VERSION__ >= 12
    typedef struct _WidgetClassRec *WidgetClass;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* XtTranslations*/
#if __LSB_VERSION__ >= 12
    typedef struct _TranslationData *XtTranslations;

#include <X11/TranslateI.h>
#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
