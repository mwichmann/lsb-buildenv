#ifndef _X11_COMPOSITE_H_
#define _X11_COMPOSITE_H_

#include <X11/Intrinsic.h>



typedef Cardinal (*XtOrderProc) (Widget child);

typedef void (*XtDoChangeProc) (Widget composite_parent,
				WidgetList unmanage_children,
				Cardinal * num_unmanage_children,
				WidgetList manage_children,
				Cardinal * num_manage_children,
				XtPointer client_data);


void XtChangeManagedSet (WidgetList, Cardinal, XtDoChangeProc, XtPointer,
			 WidgetList, Cardinal);
void XtManageChild (Widget);
void XtManageChildren (WidgetList, Cardinal);
void XtUnmanageChild (Widget);
void XtUnmanageChildren (WidgetList, Cardinal);
extern WidgetClass compositeWidgetClass;
#endif
