#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_INTRINSICP_H_
#define _X11_INTRINSICP_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#include <X11/Intrinsic.h>
#include <X11/TranslateI.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XtVersion	(XT_VERSION * 1000 + XT_REVISION)
#define XtVersionDontCheck	0
#define XT_VERSION	11
#define XT_REVISION	6
#define _XtintrinsicP_h	1


#if __LSB_VERSION__ >= 12
    typedef struct {
	long int xrm_name;
	long int xrm_class;
	long int xrm_type;
	Cardinal xrm_size;
	int xrm_offset;
	long int xrm_default_type;
	XtPointer xrm_default_addr;
    } XrmResource;

    typedef XrmResource *XrmResourceList;

    typedef struct _XtTMRec *XtTM;

    typedef struct {
	String name;
	String type;
	XtArgVal value;
	int size;
    } XtTypedArg;

    typedef XtTypedArg *XtTypedArgList;

    typedef void (*XtProc) (void);

    typedef void (*XtWidgetClassProc) (WidgetClass);

    typedef void (*XtInitProc) (Widget, Widget, ArgList, Cardinal *);

    typedef void (*XtArgsProc) (Widget, ArgList, Cardinal *);

    typedef void (*XtRealizeProc) (Widget, XtValueMask *,
				   XSetWindowAttributes *);

    typedef void (*XtWidgetProc) (Widget);

    typedef void (*XtExposeProc) (Widget, XEvent *, Region);

    typedef Boolean(*XtSetValuesFunc) (Widget, Widget, Widget, ArgList,
				       Cardinal *);

    typedef Boolean(*XtArgsFunc) (Widget, ArgList, Cardinal *);

    typedef void (*XtAlmostProc) (Widget, Widget, XtWidgetGeometry *,
				  XtWidgetGeometry *);

    typedef Boolean(*XtAcceptFocusProc) (Widget, Time *);

    typedef long unsigned int XtVersionType;

    typedef XtGeometryResult(*XtGeometryHandler) (Widget,
						  XtWidgetGeometry *,
						  XtWidgetGeometry *);

    typedef void (*XtStringProc) (Widget, String);

    typedef void (*XtAllocateProc) (WidgetClass, Cardinal *, Cardinal *,
				    ArgList, Cardinal *, XtTypedArgList,
				    Cardinal *, struct _WidgetRec * *,
				    void **);

    typedef void (*XtDeallocateProc) (struct _WidgetRec *, void *);

    typedef struct _XtTMRec XtTMRec;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XtTMRec {
	XtTranslations translations;
	XtBoundActions proc_table;
	struct _XtStateRec *current_state;
	long unsigned int lastEventTime;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern void XtConfigureWidget(Widget, Position, Position, Dimension,
				  Dimension, Dimension);
    extern void XtCreateWindow(Widget, unsigned int, Visual *, XtValueMask,
			       XSetWindowAttributes *);
#undef XtIsComposite
    extern Boolean XtIsComposite(Widget);
#undef XtIsConstraint
    extern Boolean XtIsConstraint(Widget);
#undef XtIsRectObj
    extern Boolean XtIsRectObj(Widget);
#undef XtIsShell
    extern Boolean XtIsShell(Widget);
    extern Boolean XtIsTopLevelShell(Widget);
#undef XtIsWMShell
    extern Boolean XtIsWMShell(Widget);
#undef XtIsWidget
    extern Boolean XtIsWidget(Widget);
    extern void XtMoveWidget(Widget, Position, Position);
    extern void XtProcessLock(void);
    extern void XtProcessUnlock(void);
    extern void XtResizeWidget(Widget, Dimension, Dimension, Dimension);
    extern void XtResizeWindow(Widget);
    extern void _XtInherit(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
