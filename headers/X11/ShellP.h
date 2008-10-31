#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_SHELLP_H_
#define _X11_SHELLP_H_

#include <X11/Xlib.h>
#include <X11/SM/SMlib.h>
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

#ifdef __cplusplus
extern "C" {
#endif


    struct _OldXSizeHints {
	long int flags;
	int x;
	int y;
	int width;
	int height;
	int min_width;
	int min_height;
	int max_width;
	int max_height;
	int width_inc;
	int height_inc;
	struct {
	    int x;
	    int y;
	} min_aspect;
	struct {
	    int x;
	    int y;
	} max_aspect;
    };


#define _XtShellPositionValid	((Boolean)(1<<0))
#define _XtShellNotReparented	((Boolean)(1<<1))
#define _XtShellPPositionOK	((Boolean)(1<<2))
#define _XtShellGeometryParsed	((Boolean)(1<<3))
#define XtInheritRootGeometryManager	((XtGeometryHandler)_XtInherit)
#define XtShellExtensionVersion	1L


    typedef struct {
	XtPointer extension;
    } ShellClassPart;

    typedef struct {
	XtPointer next_extension;
	XrmQuark record_type;
	long int version;
	Cardinal record_size;
	XtGeometryHandler root_geometry_manager;
    } ShellClassExtensionRec;

    typedef ShellClassExtensionRec *ShellClassExtension;

    typedef struct _ShellClassRec ShellClassRec;

    typedef struct {
	char *geometry;
	XtCreatePopupChildProc create_popup_child_proc;
	XtGrabKind grab_kind;
	Boolean spring_loaded;
	Boolean popped_up;
	Boolean allow_shell_resize;
	Boolean client_specified;
	Boolean save_under;
	Boolean override_redirect;
	XtCallbackList popup_callback;
	XtCallbackList popdown_callback;
	Visual *visual;
    } ShellPart;

    typedef struct {
	CorePart core;
	CompositePart composite;
	ShellPart shell;
    } ShellRec;

    typedef ShellRec *ShellWidget;

    typedef struct {
	XtPointer extension;
    } OverrideShellClassPart;

    typedef struct _OverrideShellClassRec OverrideShellClassRec;

    typedef struct {
	int frabjous;
    } OverrideShellPart;

    typedef struct {
	CorePart core;
	CompositePart composite;
	ShellPart shell;
	OverrideShellPart override;
    } OverrideShellRec;

    typedef OverrideShellRec *OverrideShellWidget;

    typedef struct {
	XtPointer extension;
    } WMShellClassPart;

    typedef struct _WMShellClassRec WMShellClassRec;

    typedef struct {
	char *title;
	int wm_timeout;
	Boolean wait_for_wm;
	Boolean transient;
	Boolean urgency;
	Widget client_leader;
	String window_role;
	struct _OldXSizeHints size_hints;
	XWMHints wm_hints;
	int base_width;
	int base_height;
	int win_gravity;
	Atom title_encoding;
    } WMShellPart;

    typedef struct {
	CorePart core;
	CompositePart composite;
	ShellPart shell;
	WMShellPart wm;
    } WMShellRec;

    typedef WMShellRec *WMShellWidget;

    typedef struct {
	XtPointer extension;
    } TransientShellClassPart;

    typedef struct _TransientShellClassRec TransientShellClassRec;

    typedef struct {
	Widget transient_for;
    } TransientShellPart;

#include <X11/VendorP.h>

    typedef struct {
	CorePart core;
	CompositePart composite;
	ShellPart shell;
	WMShellPart wm;
	VendorShellPart vendor;
	TransientShellPart transient;
    } TransientShellRec;

    typedef TransientShellRec *TransientShellWidget;

    typedef struct {
	XtPointer extension;
    } TopLevelShellClassPart;

    typedef struct _TopLevelShellClassRec TopLevelShellClassRec;

    typedef struct {
	char *icon_name;
	Boolean iconic;
	Atom icon_name_encoding;
    } TopLevelShellPart;

    typedef struct {
	CorePart core;
	CompositePart composite;
	ShellPart shell;
	WMShellPart wm;
	VendorShellPart vendor;
	TopLevelShellPart topLevel;
    } TopLevelShellRec;

    typedef TopLevelShellRec *TopLevelShellWidget;

    typedef struct {
	XtPointer extension;
    } ApplicationShellClassPart;

    typedef struct _ApplicationShellClassRec ApplicationShellClassRec;

    typedef struct {
	char *c_class;
	XrmClass xrm_class;
	int argc;
	char **argv;
    } ApplicationShellPart;

    typedef struct {
	CorePart core;
	CompositePart composite;
	ShellPart shell;
	WMShellPart wm;
	VendorShellPart vendor;
	TopLevelShellPart topLevel;
	ApplicationShellPart application;
    } ApplicationShellRec;

    typedef ApplicationShellRec *ApplicationShellWidget;

    typedef struct {
	XtPointer extension;
    } SessionShellClassPart;

    typedef struct _SessionShellClassRec SessionShellClassRec;

    typedef struct _XtSaveYourselfRec *XtSaveYourself;

    typedef struct {
	SmcConn connection;
	String session_id;
	char **restart_command;
	char **clone_command;
	char **discard_command;
	char **resign_command;
	char **shutdown_command;
	char **environment;
	String current_dir;
	String program_path;
	unsigned char restart_style;
	unsigned char checkpoint_state;
	Boolean join_session;
	XtCallbackList save_callbacks;
	XtCallbackList interact_callbacks;
	XtCallbackList cancel_callbacks;
	XtCallbackList save_complete_callbacks;
	XtCallbackList die_callbacks;
	XtCallbackList error_callbacks;
	XtSaveYourself save;
	XtInputId input_id;
	XtPointer ses20;
	XtPointer ses19;
	XtPointer ses18;
	XtPointer ses17;
	XtPointer ses16;
	XtPointer ses15;
	XtPointer ses14;
	XtPointer ses13;
	XtPointer ses12;
	XtPointer ses11;
	XtPointer ses10;
	XtPointer ses9;
	XtPointer ses8;
	XtPointer ses7;
	XtPointer ses6;
	XtPointer ses5;
	XtPointer ses4;
	XtPointer ses3;
	XtPointer ses2;
	XtPointer ses1;
    } SessionShellPart;

    typedef struct {
	CorePart core;
	CompositePart composite;
	ShellPart shell;
	WMShellPart wm;
	VendorShellPart vendor;
	TopLevelShellPart topLevel;
	ApplicationShellPart application;
	SessionShellPart session;
    } SessionShellRec;

    typedef SessionShellRec *SessionShellWidget;


    struct _ShellClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
	ShellClassPart shell_class;
    };


    struct _OverrideShellClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
	ShellClassPart shell_class;
	OverrideShellClassPart override_shell_class;
    };


    struct _WMShellClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
	ShellClassPart shell_class;
	WMShellClassPart wm_shell_class;
    };


    struct _TransientShellClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
	ShellClassPart shell_class;
	WMShellClassPart wm_shell_class;
	VendorShellClassPart vendor_shell_class;
	TransientShellClassPart transient_shell_class;
    };


    struct _TopLevelShellClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
	ShellClassPart shell_class;
	WMShellClassPart wm_shell_class;
	VendorShellClassPart vendor_shell_class;
	TopLevelShellClassPart top_level_shell_class;
    };


    struct _ApplicationShellClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
	ShellClassPart shell_class;
	WMShellClassPart wm_shell_class;
	VendorShellClassPart vendor_shell_class;
	TopLevelShellClassPart top_level_shell_class;
	ApplicationShellClassPart application_shell_class;
    };


    struct _SessionShellClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
	ShellClassPart shell_class;
	WMShellClassPart wm_shell_class;
	VendorShellClassPart vendor_shell_class;
	TopLevelShellClassPart top_level_shell_class;
	ApplicationShellClassPart application_shell_class;
	SessionShellClassPart session_shell_class;
    };


/* Function prototypes */

    extern OverrideShellClassRec overrideShellClassRec;
    extern SessionShellClassRec sessionShellClassRec;
    extern ShellClassRec shellClassRec;
    extern TopLevelShellClassRec topLevelShellClassRec;
    extern TransientShellClassRec transientShellClassRec;
    extern WMShellClassRec wmShellClassRec;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
