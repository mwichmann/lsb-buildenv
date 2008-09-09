#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_VENDORP_H_
#define _X11_VENDORP_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#include <X11/Composite.h>
#include <X11/IntrinsicP.h>
#include <X11/CompositeP.h>
#include <X11/TranslateI.h>
#include <X11/EventI.h>
#include <X11/CoreP.h>
#include <X11/ShellP.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct {
	XtPointer extension;
    } VendorShellClassPart;

    typedef struct _VendorShellClassRec VendorShellClassRec;

    typedef struct {
	int vendor_specific;
    } VendorShellPart;

    typedef struct {
	CorePart core;
	CompositePart composite;
	ShellPart shell;
	WMShellPart wm;
	VendorShellPart vendor;
    } VendorShellRec;

    typedef VendorShellRec *VendorShellWidget;


    struct _VendorShellClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
	ShellClassPart shell_class;
	WMShellClassPart wm_shell_class;
	VendorShellClassPart vendor_shell_class;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
