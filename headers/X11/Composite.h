#ifndef _X11_COMPOSITE_H_
#define _X11_COMPOSITE_H_

#include <X11/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef Cardinal(*XtOrderProc) (Widget child);

    typedef void (*XtDoChangeProc) (Widget composite_parent,
				    WidgetList unmanage_children,
				    Cardinal * num_unmanage_children,
				    WidgetList manage_children,
				    Cardinal * num_manage_children,
				    XtPointer client_data);


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
#endif
