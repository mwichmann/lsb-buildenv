#ifndef _X11_XUTIL_H_
#define _X11_XUTIL_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C"
{
#endif




  typedef struct XSizeHints;

  typedef struct XWMHints;

  typedef struct XTextProperty;

  typedef struct XIconSize;

  typedef struct XClassHint;

  typedef struct _XComposeStatus
  {
    XPointer compose_ptr;
    int chars_matched;
  }
  XComposeStatus;

  typedef struct _XRegion *Region;

  typedef struct XVisualInfo;

  typedef struct XStandardColormap;

  typedef int XContext;

  typedef enum XICCEncodingStyle;


  extern int XAddPixel (void);
  extern XClassHint *XAllocClassHint (void);
  extern XIconSize *XAllocIconSize (void);
  extern XSizeHints *XAllocSizeHints (void);
  extern XStandardColormap *XAllocStandardColormap (void);
  extern XWMHints *XAllocWMHints (void);
  extern int XClipBox (Region, XRectangle *);
  extern void XConvertCase (KeySym, KeySym *, KeySym *);
  extern Region XCreateRegion (void);
  extern char *XDefaultString (void);
  extern int XDeleteContext (Display *, XID, XContext);
  extern int XDestroyImage (XImage *);
  extern int XDestroyRegion (Region);
  extern int XEmptyRegion (Region);
  extern int XEqualRegion (Region, Region);
  extern int XFindContext (Display *, XID, XContext, XPointer *);
  extern int XGetClassHint (Display *, Window, XClassHint *);
  extern int XGetIconSizes (Display *, Window, XIconSize * *, int *);
  extern int XGetNormalHints (Display *, Window, XSizeHints *);
  extern unsigned long XGetPixel (void);
  extern int XGetRGBColormaps (Display *, Window, XStandardColormap * *,
			       int *, Atom);
  extern int XGetSizeHints (Display *, Window, XSizeHints *, Atom);
  extern int XGetStandardColormap (Display *, Window, XStandardColormap *,
				   Atom);
  extern int XGetTextProperty (Display *, Window, XTextProperty *, Atom);
  extern XVisualInfo *XGetVisualInfo (Display *, long, XVisualInfo *, int *);
  extern int XGetWMClientMachine (Display *, Window, XTextProperty *);
  extern XWMHints *XGetWMHints (Display *, Window);
  extern int XGetWMIconName (Display *, Window, XTextProperty *);
  extern int XGetWMName (Display *, Window, XTextProperty *);
  extern int XGetWMNormalHints (Display *, Window, XSizeHints *, long *);
  extern int XGetWMSizeHints (Display *, Window, XSizeHints *, long *, Atom);
  extern int XGetZoomHints (Display *, Window, XSizeHints *);
  extern int XIntersectRegion (Region, Region, Region);
  extern int XLookupString (XKeyEvent *, char *, int, KeySym *,
			    XComposeStatus *);
  extern int XMatchVisualInfo (Display *, int, int, int, XVisualInfo *);
  extern int XOffsetRegion (Region, int, int);
  extern int XPointInRegion (Region, int, int);
  extern Region XPolygonRegion (XPoint *, int, int);
  extern int XPutPixel (void);
  extern int XRectInRegion (Region, int, int, unsigned int, unsigned int);
  extern int XSaveContext (Display *, XID, XContext, char *);
  extern int XSetClassHint (Display *, Window, XClassHint *);
  extern int XSetIconSizes (Display *, Window, XIconSize *, int);
  extern int XSetNormalHints (Display *, Window, XSizeHints *);
  extern void XSetRGBColormaps (Display *, Window, XStandardColormap *, int,
				Atom);
  extern int XSetRegion (Display *, GC, Region);
  extern int XSetSizeHints (Display *, Window, XSizeHints *, Atom);
  extern void XSetStandardColormap (Display *, Window, XStandardColormap *,
				    Atom);
  extern int XSetStandardProperties (Display *, Window, char *, char *,
				     Pixmap, char **, int, XSizeHints *);
  extern void XSetTextProperty (Display *, Window, XTextProperty *, Atom);
  extern void XSetWMClientMachine (Display *, Window, XTextProperty *);
  extern int XSetWMHints (Display *, Window, XWMHints *);
  extern void XSetWMIconName (Display *, Window, XTextProperty *);
  extern void XSetWMName (Display *, Window, XTextProperty *);
  extern void XSetWMNormalHints (Display *, Window, XSizeHints *);
  extern void XSetWMProperties (Display *, Window, XTextProperty *,
				XTextProperty *, char **, int, XSizeHints *,
				XWMHints *, XClassHint *);
  extern void XSetWMSizeHints (Display *, Window, XSizeHints *, Atom);
  extern int XSetZoomHints (Display *, Window, XSizeHints *);
  extern int XShrinkRegion (Region, int, int);
  extern int XStringListToTextProperty (char **, int, XTextProperty *);
  extern XImage *XSubImage (void);
  extern int XSubtractRegion (Region, Region, Region);
  extern int XTextPropertyToStringList (XTextProperty *, char ***, int *);
  extern int XUnionRectWithRegion (XRectangle *, Region, Region);
  extern int XUnionRegion (Region, Region, Region);
  extern int XWMGeometry (Display *, int, char *, char *, unsigned int,
			  XSizeHints *, int *, int *, int *, int *, int *);
  extern int XXorRegion (Region, Region, Region);
  extern void XmbSetWMProperties (Display *, Window, char *, char *, char **,
				  int, XSizeHints *, XWMHints *,
				  XClassHint *);
  extern int XmbTextListToTextProperty (Display *, char **, int,
					XICCEncodingStyle, XTextProperty *);
  extern int XmbTextPropertyToTextList (Display *, XTextProperty *, char ***,
					int *);
  extern void XwcFreeStringList (wchar_t * *);
  extern int XwcTextListToTextProperty (Display *, wchar_t * *, int,
					XICCEncodingStyle, XTextProperty *);
  extern int XwcTextPropertyToTextList (Display *, XTextProperty *,
					wchar_t * **, int *);
  extern int Xutf8TextPropertyToTextList (Display *, XTextProperty *,
					  char ***, int *);
  extern int Xutf8TextListToTextProperty (Display *, char **, int,
					  XICCEncodingStyle, XTextProperty *);
#ifdef __cplusplus
}
#endif
#endif
