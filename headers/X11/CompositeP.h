#ifndef _X11_COMPOSITEP_H_
#define _X11_COMPOSITEP_H_


#define XtInheritGeometryManager	((XtGeometryHandler) _XtInherit)
#define XtInheritInsertChild	((XtWidgetProc) _XtInherit)
#define XtInheritDeleteChild	((XtWidgetProc) _XtInherit)
#define XtCompositeExtensionVersion	2L



/* Additional instance fields for widgets of (sub)class 'Composite'*/






/* Additional class fields for widgets of (sub)class 'Composite'*/


typedef struct _CompositeClassPart CompositeClassPart;







typedef struct _CompositeClassRec CompositeClassRec;


extern CompositeClassRec compositeClassRec;
#endif
