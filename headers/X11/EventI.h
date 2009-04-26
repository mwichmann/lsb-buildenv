#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_EVENTI_H_
#define _X11_EVENTI_H_

#include <X11/Xlib.h>
#include <X11/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _XtGrabRec *XtGrabList;

    typedef struct _XtGrabRec XtGrabRec;

    struct _XtEventRec {
	XtEventTable next;
	EventMask mask;
	XtEventHandler proc;
	XtPointer closure;
	unsigned int select:1;
	unsigned int has_type_specifier:1;
	unsigned int async:1;
    };

    struct _XtGrabRec {
	XtGrabList next;
	Widget widget;
	unsigned int exclusive:1;
	unsigned int spring_loaded:1;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
