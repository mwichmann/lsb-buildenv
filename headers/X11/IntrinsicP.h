#ifndef _X11_INTRINSICP_H_
#define _X11_INTRINSICP_H_

#include <X11/Xlib.h>




extern void XtConfigureWidget (Widget, int, int, unsigned int, unsigned int,
			       unsigned int);
extern void XtCreateWindow (Widget, unsigned int, Visual *, XtValueMask,
			    XSetWindowAttributes *);
extern void XtMoveWidget (Widget, int, int);
extern void XtProcessLock (void);
extern void XtProcessUnlock (void);
extern void XtResizeWidget (Widget, unsigned int, unsigned int, unsigned int);
extern void XtResizeWindow (Widget);
extern void _XtInherit (void);
#endif
