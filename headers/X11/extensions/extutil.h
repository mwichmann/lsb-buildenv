#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_EXTENSIONS_EXTUTIL_H_
#define _X11_EXTENSIONS_EXTUTIL_H_

#include <X11/Xlib.h>
#include <X11/Xproto.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XextHasExtension(i)	((i) && ((i)->codes))
#define XEXT_ERROR_STRING_PROTO(proc)	\
        char *proc(Display *dpy, int code, XExtCodes *codes, char *buf, int n)
#define XEXT_CLOSE_DISPLAY_PROTO(proc)	\
        int proc(Display *dpy, XExtCodes *codes)
#define XEXT_FIND_DISPLAY_PROTO(proc)	\
        XExtDisplayInfo *proc(Display *dpy)
#define XextCheckExtension(dpy,i,name,val)	\
  if (!XextHasExtension(i)) { XMissingExtension (dpy, name); return val; }
#define XextSimpleCheckExtension(dpy,i,name)	\
  if (!XextHasExtension(i)) { XMissingExtension (dpy, name); return; }
#define XEXT_GENERATE_ERROR_STRING(proc,extname,nerr,errl)	\
char *proc (Display *dpy, int code, XExtCodes *codes, char *buf, int n) \
{ \
    code -= codes->first_error; \
    if (code >= 0 && code < nerr) { \
        char tmp[256]; \
        sprintf (tmp, "%s.%d", extname, code); \
        XGetErrorDatabaseText (dpy, "XProtoError", tmp, errl[code], buf, n); \
        return buf; \
    } \
    return (char *)0; \
}
#define XEXT_GENERATE_CLOSE_DISPLAY(proc,extinfo)	\
int proc (Display *dpy, XExtCodes *codes) \
{ \
    return XextRemoveDisplay (extinfo, dpy); \
}
#define XEXT_GENERATE_FIND_DISPLAY(proc,extinfo,extname,hooks,nev,data)	\
XExtDisplayInfo *proc (Display *dpy) \
{ \
XExtDisplayInfo *dpyinfo; \
    if (!extinfo) { if (!(extinfo = XextCreateExtension())) return NULL; } \
    if (!(dpyinfo = XextFindDisplay (extinfo, dpy))) \
      dpyinfo = XextAddDisplay (extinfo,dpy,extname,hooks,nev,data); \
    return dpyinfo; \
}


    typedef struct _XExtDisplayInfo XExtDisplayInfo;

    typedef struct _XExtensionInfo XExtensionInfo;

    typedef struct _XExtensionHooks XExtensionHooks;

    struct _XExtDisplayInfo {
	struct _XExtDisplayInfo *next;
	Display *display;
	XExtCodes *codes;
	XPointer data;
    };

    struct _XExtensionInfo {
	XExtDisplayInfo *head;
	XExtDisplayInfo *cur;
	int ndisplays;
    };

    struct _XExtensionHooks {
	int (*create_gc) (Display *, GC, XExtCodes *);
	int (*copy_gc) (Display *, GC, XExtCodes *);
	int (*flush_gc) (Display *, GC, XExtCodes *);
	int (*free_gc) (Display *, GC, XExtCodes *);
	int (*create_font) (Display *, XFontStruct *, XExtCodes *);
	int (*free_font) (Display *, XFontStruct *, XExtCodes *);
	int (*close_display) (Display *, XExtCodes *);
	int (*wire_to_event) (Display *, XEvent *, xEvent *);
	int (*event_to_wire) (Display *, XEvent *, xEvent *);
	int (*error) (Display *, xError *, XExtCodes *, int *);
	char *(*error_string) (Display *, int, XExtCodes *, char *, int);
    };


/* Function prototypes */

    extern XExtDisplayInfo *XextAddDisplay(XExtensionInfo *, Display *,
					   char *, XExtensionHooks *, int,
					   XPointer);
    extern XExtensionInfo *XextCreateExtension(void);
    extern void XextDestroyExtension(XExtensionInfo *);
    extern XExtDisplayInfo *XextFindDisplay(XExtensionInfo *, Display *);
    extern int XextRemoveDisplay(XExtensionInfo *, Display *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
