#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_XUTIL_H_
#define _X11_XUTIL_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define IsModifierKey(keysym)	((((KeySym)(keysym)>=XK_Shift_L)&&((KeySym)(keysym)<=XK_Hype
#define IsPrivateKeypadKey(keysym)	(((KeySym)(keysym)>=0x11000000)&&((KeySym)(keysym)<=0x1100FF
#define IsFunctionKey(keysym)	(((KeySym)(keysym)>=XK_F1)&&((KeySym)(keysym)<=XK_F35))
#define IsCursorKey(keysym)	(((KeySym)(keysym)>=XK_Home)&&((KeySym)(keysym)<XK_Select))
#define IsPFKey(keysym)	(((KeySym)(keysym)>=XK_KP_F1)&&((KeySym)(keysym)<=XK_KP_F4))
#define IsKeypadKey(keysym)	(((KeySym)(keysym)>=XK_KP_Space)&&((KeySym)(keysym)<=XK_KP_E
#define IsMiscFunctionKey(keysym)	(((KeySym)(keysym)>=XK_Select)&&((KeySym)(keysym)<=XK_Break)
#define XAddPixel(ximage,value)	((*((ximage)->f.add_pixel))((ximage), (value)))
#define XDestroyImage(ximage)	((*((ximage)->f.destroy_image))((ximage)))
#define XGetPixel(ximage,x,y)	((*((ximage)->f.get_pixel))((ximage), (x), (y)))
#define XPutPixel(ximage,x,y,pixel)	((*((ximage)->f.put_pixel))((ximage), (x), (y), (pixel)))
#define XSubImage(ximage,x,y,width,height)	((*((ximage)->f.sub_image))((ximage), (x), (y), (width), (height)))
#define XStringToContext(string)	((XContext)XrmStringToQuark(string))
#define XUniqueContext()	((XContext)XrmUniqueQuark())
#define ReleaseByFreeingColormap	((XID)1L)
#define InputHint	(1L<<0)
#define USPosition	(1L<<0)
#define StateHint	(1L<<1)
#define USSize	(1L<<1)
#define IconPixmapHint	(1L<<2)
#define PPosition	(1L<<2)
#define IconWindowHint	(1L<<3)
#define PSize	(1L<<3)
#define IconPositionHint	(1L<<4)
#define PMinSize	(1L<<4)
#define IconMaskHint	(1L<<5)
#define PMaxSize	(1L<<5)
#define PResizeInc	(1L<<6)
#define WindowGroupHint	(1L<<6)
#define PAspect	(1L<<7)
#define PBaseSize	(1L<<8)
#define XUrgencyHint	(1L<<8)
#define PWinGravity	(1L<<9)
#define AllHints	(InputHint|StateHint|IconPixmapHint|IconWindowHint|IconPositionHint|IconMaskHint|WindowGroupHint)
#define PAllHints	(PPosition|PSize|PMinSize|PMaxSize|PResizeInc|PAspect)
#define XNoMemory	-1
#define XLocaleNotSupported	-2
#define XConverterNotFound	-3
#define BitmapSuccess	0
#define DontCareState	0
#define RectangleOut	0
#define WithdrawnState	0
#define XCSUCCESS	0
#define VisualNoMask	0x0
#define NoValue	0x0000
#define XValue	0x0001
#define YValue	0x0002
#define WidthValue	0x0004
#define HeightValue	0x0008
#define AllValues	0x000F
#define XNegative	0x0010
#define YNegative	0x0020
#define VisualIDMask	0x1
#define VisualRedMaskMask	0x10
#define VisualBitsPerRGBMask	0x100
#define VisualAllMask	0x1FF
#define VisualScreenMask	0x2
#define VisualGreenMaskMask	0x20
#define VisualDepthMask	0x4
#define VisualBlueMaskMask	0x40
#define VisualClassMask	0x8
#define VisualColormapSizeMask	0x80
#define BitmapOpenFailed	1
#define NormalState	1
#define RectangleIn	1
#define XCNOMEM	1
#define BitmapFileInvalid	2
#define RectanglePart	2
#define XCNOENT	2
#define ZoomState	2
#define BitmapNoMemory	3
#define IconicState	3
#define InactiveState	4
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
    typedef struct XSizeHints;

    typedef struct XWMHints;

    typedef struct XTextProperty;

    typedef struct XIconSize;

    typedef struct XClassHint;

    typedef struct _XComposeStatus XComposeStatus;

    typedef struct _XRegion *Region;

    typedef struct XVisualInfo;

    typedef struct XStandardColormap;

    typedef int XContext;

    typedef enum
	XICCEncodingStyle;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XComposeStatus {
	XPointer compose_ptr;
	int chars_matched;
    };

    enum;

    enum {
	XStringStyle,
	XCompoundTextStyle,
	XTextStyle,
	XStdICCTextStyle,
	XUTF8StringStyle
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern int XAddPixel(XImage *, long int);
    extern XClassHint *XAllocClassHint(void);
    extern XIconSize *XAllocIconSize(void);
    extern XSizeHints *XAllocSizeHints(void);
    extern XStandardColormap *XAllocStandardColormap(void);
    extern XWMHints *XAllocWMHints(void);
    extern int XClipBox(Region, XRectangle *);
    extern void XConvertCase(KeySym, KeySym *, KeySym *);
    extern Region XCreateRegion(void);
    extern const char *XDefaultString(void);
    extern int XDeleteContext(Display *, XID, XContext);
    extern int XDestroyImage(XImage *);
    extern int XDestroyRegion(Region);
    extern int XEmptyRegion(Region);
    extern int XEqualRegion(Region, Region);
    extern int XFindContext(Display *, XID, XContext, XPointer *);
    extern int XGetClassHint(Display *, Window, XClassHint *);
    extern int XGetIconSizes(Display *, Window, XIconSize * *, int *);
    extern int XGetNormalHints(Display *, Window, XSizeHints *);
    extern unsigned long int XGetPixel(XImage *, int, int);
    extern int XGetRGBColormaps(Display *, Window, XStandardColormap * *,
				int *, Atom);
    extern int XGetSizeHints(Display *, Window, XSizeHints *, Atom);
    extern int XGetStandardColormap(Display *, Window, XStandardColormap *,
				    Atom);
    extern int XGetTextProperty(Display *, Window, XTextProperty *, Atom);
    extern XVisualInfo *XGetVisualInfo(Display *, long int, XVisualInfo *,
				       int *);
    extern int XGetWMClientMachine(Display *, Window, XTextProperty *);
    extern XWMHints *XGetWMHints(Display *, Window);
    extern int XGetWMIconName(Display *, Window, XTextProperty *);
    extern int XGetWMName(Display *, Window, XTextProperty *);
    extern int XGetWMNormalHints(Display *, Window, XSizeHints *,
				 long int *);
    extern int XGetWMSizeHints(Display *, Window, XSizeHints *, long int *,
			       Atom);
    extern int XGetZoomHints(Display *, Window, XSizeHints *);
    extern int XIntersectRegion(Region, Region, Region);
    extern int XLookupString(XKeyEvent *, char *, int, KeySym *,
			     XComposeStatus *);
    extern int XMatchVisualInfo(Display *, int, int, int, XVisualInfo *);
    extern int XOffsetRegion(Region, int, int);
    extern int XPointInRegion(Region, int, int);
    extern Region XPolygonRegion(XPoint *, int, int);
    extern int XPutPixel(XImage *, int, int, unsigned long int);
    extern int XRectInRegion(Region, int, int, unsigned int, unsigned int);
    extern int XSaveContext(Display *, XID, XContext, const char *);
    extern int XSetClassHint(Display *, Window, XClassHint *);
    extern int XSetIconSizes(Display *, Window, XIconSize *, int);
    extern int XSetNormalHints(Display *, Window, XSizeHints *);
    extern void XSetRGBColormaps(Display *, Window, XStandardColormap *,
				 int, Atom);
    extern int XSetRegion(Display *, GC, Region);
    extern int XSetSizeHints(Display *, Window, XSizeHints *, Atom);
    extern void XSetStandardColormap(Display *, Window,
				     XStandardColormap *, Atom);
    extern int XSetStandardProperties(Display *, Window, const char *,
				      const char *, Pixmap, char **, int,
				      XSizeHints *);
    extern void XSetTextProperty(Display *, Window, XTextProperty *, Atom);
    extern void XSetWMClientMachine(Display *, Window, XTextProperty *);
    extern int XSetWMHints(Display *, Window, XWMHints *);
    extern void XSetWMIconName(Display *, Window, XTextProperty *);
    extern void XSetWMName(Display *, Window, XTextProperty *);
    extern void XSetWMNormalHints(Display *, Window, XSizeHints *);
    extern void XSetWMProperties(Display *, Window, XTextProperty *,
				 XTextProperty *, char **, int,
				 XSizeHints *, XWMHints *, XClassHint *);
    extern void XSetWMSizeHints(Display *, Window, XSizeHints *, Atom);
    extern int XSetZoomHints(Display *, Window, XSizeHints *);
    extern int XShrinkRegion(Region, int, int);
    extern int XStringListToTextProperty(char **, int, XTextProperty *);
    extern XImage *XSubImage(XImage *, int, int, unsigned int,
			     unsigned int);
    extern int XSubtractRegion(Region, Region, Region);
    extern int XTextPropertyToStringList(XTextProperty *, char ***, int *);
    extern int XUnionRectWithRegion(XRectangle *, Region, Region);
    extern int XUnionRegion(Region, Region, Region);
    extern int XWMGeometry(Display *, int, const char *, const char *,
			   unsigned int, XSizeHints *, int *, int *, int *,
			   int *, int *);
    extern int XXorRegion(Region, Region, Region);
    extern void XmbSetWMProperties(Display *, Window, const char *,
				   const char *, char **, int,
				   XSizeHints *, XWMHints *, XClassHint *);
    extern int XmbTextListToTextProperty(Display *, char **, int,
					 XICCEncodingStyle,
					 XTextProperty *);
    extern int XmbTextPropertyToTextList(Display *, XTextProperty *,
					 char ***, int *);
    extern void XwcFreeStringList(wchar_t * *);
    extern int XwcTextListToTextProperty(Display *, wchar_t * *, int,
					 XICCEncodingStyle,
					 XTextProperty *);
    extern int XwcTextPropertyToTextList(Display *, XTextProperty *,
					 wchar_t * **, int *);
#if __LSB_VERSION__ >= 12
    extern int Xutf8TextListToTextProperty(Display *, char **, int,
					   XICCEncodingStyle,
					   XTextProperty *);
    extern int Xutf8TextPropertyToTextList(Display *, XTextProperty *,
					   char ***, int *);
#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
