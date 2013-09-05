#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_COMPOSITE_H_
#define _X11_COMPOSITE_H_

#include <X11/Xresource.h>
#include <X11/IntrinsicP.h>
#include <X11/CompositeP.h>
#include <X11/CoreP.h>
#include <lsb/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _XtComposite_h	1


    typedef void (*XtDoChangeProc) (Widget, WidgetList, Cardinal *,
				    WidgetList, Cardinal *, XtPointer);

    typedef struct _CompositeClassRec *CompositeWidgetClass;


/* Function prototypes */

    extern void XtChangeManagedSet(WidgetList, Cardinal, XtDoChangeProc,
				   XtPointer, WidgetList, Cardinal);
    extern void XtManageChild(Widget);
    extern void XtManageChildren(WidgetList, Cardinal);
    extern void XtUnmanageChild(Widget);
    extern void XtUnmanageChildren(WidgetList, Cardinal);
    extern WidgetClass compositeWidgetClass;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
