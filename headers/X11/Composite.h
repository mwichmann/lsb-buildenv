#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_COMPOSITE_H_
#define _X11_COMPOSITE_H_

#include <X11/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef void (*XtDoChangeProc) (Widget, WidgetList, Cardinal *,
				    WidgetList, Cardinal *, XtPointer);

    typedef struct _CompositeClassRec *CompositeWidgetClass;

    typedef Cardinal(*XtOrderProc) (Widget);


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
