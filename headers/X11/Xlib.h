#ifndef _X11_XLIB_H_
#define _X11_XLIB_H_

#include <X11/X.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct XColor;

    typedef void *XVaNestedList;

    typedef int (*XErrorHandler) (void);

    typedef int (*XIOErrorHandler) (void);

    typedef void (*XConnectionWatchProc) (void);

    struct _XDisplay;




    typedef char *XPointer;


/* Extensions need a way to hang private data on some structures.*/


    typedef struct _XExtData XExtData;

    typedef struct XExtCodes;


    struct _XExtData {
	int number;
	struct _XExtData *next;
	int (*free_private) (struct _XExtData * extension);
	XPointer private_data;
    };


/* Data structure for retrieving info about pixmap formats.*/


    typedef struct XPixmapFormatValues;


/* Data structure for setting graphics context*/


    typedef struct XGCValues;


/*  Graphics context.  The contents of this structure are implementation dependent.  A GC should be treated as opaque by application code.*/


    typedef struct _XGC *GC;


/* Visual structure; contains information about colormapping possible.*/


    typedef struct Visual;


/* Depth structure; contains information for each possible depth.*/


    typedef struct Depth;


/* Information about the screen.  The contents of this structure are implementation dependent.  A Screen should be treated as opaque by application code.*/


    typedef struct Screen;


/*  Format structure; describes ZFormat data the screen will understand.*/


    typedef struct ScreenFormat;


/* Data structure for setting window attributes.*/


    typedef struct XSetWindowAttributes;

    typedef struct XWindowAttributes;


/* Data structure for host setting; getting routines.*/


    typedef struct XHostAddress;


/* Data structure for */


    typedef struct _XImage XImage;


    struct _XImage {
	int width;
	int height;
	int xoffset;
	int format;
	char *data;
	int byte_order;
	int bitmap_unit;
	int bitmap_bit_order;
	int bitmap_pad;
	int depth;
	int bytes_per_line;
	int bits_per_pixel;
	unsigned long int red_mask;
	unsigned long int green_mask;
	unsigned long int blue_mask;
	XPointer obdata;
	struct funcs f;
    };


/* Data structure for XReconfigureWindow*/


    typedef struct XWindowChanges;


/* Data structures for graphics operations.  On most machines, these are congruent with the wire protocol structures, so reformatting the datacan be avoided on these architectures. */


    typedef struct XSegment;

    typedef struct XPoint;

    typedef struct XRectangle;

    typedef struct XArc;


/* Data structure for XChangeKeyboardControl*/


    typedef struct XKeyboardControl;


/* Data structure for XGetKeyboardControl*/


    typedef struct XKeyboardState;


/* Data structure for XGetMotionEvents.*/


    typedef struct XTimeCoord;


/* Data structure for X{Set,Get}ModifierMapping*/


    typedef struct XModifierKeymap;


/* Display datatype maintaining display specific data. The contents of this structure are implementation dependent.A Display should be treated as opaque by application code. */


    typedef struct _XDisplay Display;





/* Definitions of specific events.*/


    typedef struct XKeyEvent;

    typedef XKeyEvent XKeyPressedEvent;

    typedef XKeyEvent XKeyReleasedEvent;

    typedef struct XButtonEvent;

    typedef XButtonEvent XButtonPressedEvent;

    typedef XButtonEvent XButtonReleasedEvent;

    typedef struct XMotionEvent;

    typedef XMotionEvent XPointerMovedEvent;

    typedef struct XCrossingEvent;

    typedef XCrossingEvent XEnterWindowEvent;

    typedef XCrossingEvent XLeaveWindowEvent;

    typedef struct XFocusChangeEvent;

    typedef XFocusChangeEvent XFocusInEvent;

    typedef XFocusChangeEvent XFocusOutEvent;

    typedef struct XKeymapEvent;

    typedef struct XExposeEvent;

    typedef struct XGraphicsExposeEvent;

    typedef struct XNoExposeEvent;

    typedef struct XVisibilityEvent;

    typedef struct XCreateWindowEvent;

    typedef struct XDestroyWindowEvent;

    typedef struct XUnmapEvent;

    typedef struct XMapEvent;

    typedef struct XMapRequestEvent;

    typedef struct XReparentEvent;

    typedef struct XConfigureEvent;

    typedef struct XGravityEvent;

    typedef struct XResizeRequestEvent;

    typedef struct XConfigureRequestEvent;

    typedef struct XCirculateEvent;

    typedef struct XCirculateRequestEvent;

    typedef struct XPropertyEvent;

    typedef struct XSelectionClearEvent;

    typedef struct XSelectionRequestEvent;

    typedef struct XSelectionEvent;

    typedef struct XColormapEvent;

    typedef union XClientMessageEvent;

    typedef struct XMappingEvent;

    typedef struct XErrorEvent;

    typedef struct XAnyEvent;


/* this union is defined so Xlib can always use the same sized event structure internally, to avoid memory fragmentation.*/


    typedef union _XEvent XEvent;

    union _XEvent {
	int type;
	XAnyEvent xany;
	XKeyEvent xkey;
	XButtonEvent xbutton;
	XMotionEvent xmotion;
	XCrossingEvent xcrossing;
	XFocusChangeEvent xfocus;
	XExposeEvent xexpose;
	XGraphicsExposeEvent xgraphicsexpose;
	XNoExposeEvent xnoexpose;
	XVisibilityEvent xvisibility;
	XCreateWindowEvent xcreatewindow;
	XDestroyWindowEvent xdestroywindow;
	XUnmapEvent xunmap;
	XMapEvent xmap;
	XMapRequestEvent xmaprequest;
	XReparentEvent xreparent;
	XConfigureEvent xconfigure;
	XGravityEvent xgravity;
	XResizeRequestEvent xresizerequest;
	XConfigureRequestEvent xconfigurerequest;
	XCirculateEvent xcirculate;
	XCirculateRequestEvent xcirculaterequest;
	XPropertyEvent xproperty;
	XSelectionClearEvent xselectionclear;
	XSelectionRequestEvent xselectionrequest;
	XSelectionEvent xselection;
	XColormapEvent xcolormap;
	XClientMessageEvent xclient;
	XMappingEvent xmapping;
	XErrorEvent xerror;
	XKeymapEvent xkeymap;
	long int pad[1];
    };


/* per character font metric information.*/


    typedef struct XCharStruct;


/* To allow arbitrary information with fonts, there are additional properties returned.*/


    typedef struct XFontProp;

    typedef struct XFontStruct;

    typedef struct XFontSetExtents;


/* PolyText routines take these as arguments.*/


    typedef struct XTextItem;

    typedef struct XChar2b;

    typedef struct XTextItem16;




    typedef union XEDataObject;




    typedef struct _XOM *XOM;

    typedef struct _XOC *XOC;

    typedef struct _XOC *XFontSet;




    typedef struct XmbTextItem;

    typedef struct XwcTextItem;







    typedef struct _XIM *XIM;

    typedef struct _XIC *XIC;

    typedef void (*XIDProc) (void);


    extern int XActivateScreenSaver(Display *);
    extern int XAddConnectionWatch(Display *, XConnectionWatchProc,
				   XPointer);
    extern XExtCodes *XAddExtension(Display *);
    extern int XAddHost(Display *, XHostAddress *);
    extern int XAddHosts(Display *, XHostAddress *, int);
    extern int XAddToExtensionList(struct _XExtData **, XExtData *);
    extern int XAddToSaveSet(Display *, Window);
    extern unsigned long int XAllPlanes(void);
    extern int XAllocColor(Display *, Colormap, XColor *);
    extern int XAllocColorCells(Display *, Colormap, int,
				unsigned long int *, unsigned int,
				unsigned long int *, unsigned int);
    extern int XAllocColorPlanes(Display *, Colormap, int,
				 unsigned long int *, int, int, int, int,
				 unsigned long int *, unsigned long int *,
				 unsigned long int *);
    extern int XAllocNamedColor(Display *, Colormap, const char *,
				XColor *, XColor *);
    extern int XAllowEvents(Display *, int, Time);
    extern int XAutoRepeatOff(Display *);
    extern int XAutoRepeatOn(Display *);
    extern char *XBaseFontNameListOfFontSet(XFontSet);
    extern int XBell(Display *, int);
    extern int XBitmapBitOrder(Display *);
    extern int XBitmapPad(Display *);
    extern int XBitmapUnit(Display *);
    extern unsigned long int XBlackPixel(Display *, int);
    extern unsigned long int XBlackPixelOfScreen(Screen *);
    extern int XCellsOfScreen(Screen *);
    extern int XChangeActivePointerGrab(Display *, unsigned int, Cursor,
					Time);
    extern int XChangeGC(Display *, GC, unsigned long int, XGCValues *);
    extern int XChangeKeyboardControl(Display *, unsigned long int,
				      XKeyboardControl *);
    extern int XChangeKeyboardMapping(Display *, int, int, KeySym *, int);
    extern int XChangePointerControl(Display *, int, int, int, int, int);
    extern int XChangeProperty(Display *, Window, Atom, Atom, int, int,
			       const unsigned char *, int);
    extern int XChangeSaveSet(Display *, Window, int);
    extern int XChangeWindowAttributes(Display *, Window,
				       unsigned long int,
				       XSetWindowAttributes *);
    extern int XCheckIfEvent(Display *, XEvent *, int (*)(void)
			     , XPointer);
    extern int XCheckMaskEvent(Display *, long int, XEvent *);
    extern int XCheckTypedEvent(Display *, int, XEvent *);
    extern int XCheckTypedWindowEvent(Display *, Window, int, XEvent *);
    extern int XCheckWindowEvent(Display *, Window, long int, XEvent *);
    extern int XCirculateSubwindows(Display *, Window, int);
    extern int XCirculateSubwindowsDown(Display *, Window);
    extern int XCirculateSubwindowsUp(Display *, Window);
    extern int XClearArea(Display *, Window, int, int, unsigned int,
			  unsigned int, int);
    extern int XClearWindow(Display *, Window);
    extern int XCloseDisplay(Display *);
    extern int XCloseIM(XIM);
    extern int XCloseOM(XOM);
    extern int XConfigureWindow(Display *, Window, unsigned int,
				XWindowChanges *);
    extern int XConnectionNumber(Display *);
    extern int XContextDependentDrawing(XFontSet);
    extern int XContextualDrawing(XFontSet);
    extern int XConvertSelection(Display *, Atom, Atom, Atom, Window,
				 Time);
    extern int XCopyArea(Display *, Drawable, Drawable, GC, int, int,
			 unsigned int, unsigned int, int, int);
    extern Colormap XCopyColormapAndFree(Display *, Colormap);
    extern int XCopyGC(Display *, GC, unsigned long int, GC);
    extern int XCopyPlane(Display *, Drawable, Drawable, GC, int, int,
			  unsigned int, unsigned int, int, int,
			  unsigned long int);
    extern Pixmap XCreateBitmapFromData(Display *, Drawable, const char *,
					unsigned int, unsigned int);
    extern Colormap XCreateColormap(Display *, Window, Visual *, int);
    extern Cursor XCreateFontCursor(Display *, unsigned int);
    extern XFontSet XCreateFontSet(Display *, const char *, char ***,
				   int *, char **);
    extern GC XCreateGC(Display *, Drawable, unsigned long int,
			XGCValues *);
    extern Cursor XCreateGlyphCursor(Display *, Font, Font, unsigned int,
				     unsigned int, XColor *, XColor *);
    extern XIC XCreateIC(XIM, ...);
    extern XImage *XCreateImage(Display *, Visual *, unsigned int, int,
				int, char *, unsigned int, unsigned int,
				int, int);
    extern XOC XCreateOC(XOM, ...);
    extern Pixmap XCreatePixmap(Display *, Drawable, unsigned int,
				unsigned int, unsigned int);
    extern Cursor XCreatePixmapCursor(Display *, Pixmap, Pixmap, XColor *,
				      XColor *, unsigned int,
				      unsigned int);
    extern Pixmap XCreatePixmapFromBitmapData(Display *, Drawable, char *,
					      unsigned int, unsigned int,
					      unsigned long int,
					      unsigned long int,
					      unsigned int);
    extern Window XCreateSimpleWindow(Display *, Window, int, int,
				      unsigned int, unsigned int,
				      unsigned int, unsigned long int,
				      unsigned long int);
    extern Window XCreateWindow(Display *, Window, int, int, unsigned int,
				unsigned int, unsigned int, int,
				unsigned int, Visual *, unsigned long int,
				XSetWindowAttributes *);
    extern Colormap XDefaultColormap(Display *, int);
    extern Colormap XDefaultColormapOfScreen(Screen *);
    extern int XDefaultDepth(Display *, int);
    extern int XDefaultDepthOfScreen(Screen *);
    extern GC XDefaultGC(Display *, int);
    extern GC XDefaultGCOfScreen(Screen *);
    extern Window XDefaultRootWindow(Display *);
    extern int XDefaultScreen(Display *);
    extern Screen *XDefaultScreenOfDisplay(Display *);
    extern Visual *XDefaultVisual(Display *, int);
    extern Visual *XDefaultVisualOfScreen(Screen *);
    extern int XDefineCursor(Display *, Window, Cursor);
    extern XModifierKeymap *XDeleteModifiermapEntry(XModifierKeymap *,
						    unsigned int, int);
    extern int XDeleteProperty(Display *, Window, Atom);
    extern void XDestroyIC(XIC);
    extern void XDestroyOC(XOC);
    extern int XDestroySubwindows(Display *, Window);
    extern int XDestroyWindow(Display *, Window);
    extern int XDirectionalDependentDrawing(XFontSet);
    extern int XDisableAccessControl(Display *);
    extern int XDisplayCells(Display *, int);
    extern int XDisplayHeight(Display *, int);
    extern int XDisplayHeightMM(Display *, int);
    extern int XDisplayKeycodes(Display *, int *, int *);
    extern unsigned long int XDisplayMotionBufferSize(Display *);
    extern char *XDisplayName(const char *);
    extern Display *XDisplayOfIM(XIM);
    extern Display *XDisplayOfOM(XOM);
    extern Display *XDisplayOfScreen(Screen *);
    extern int XDisplayPlanes(Display *, int);
    extern char *XDisplayString(Display *);
    extern int XDisplayWidth(Display *, int);
    extern int XDisplayWidthMM(Display *, int);
    extern int XDoesBackingStore(Screen *);
    extern int XDoesSaveUnders(Screen *);
    extern int XDrawArc(Display *, Drawable, GC, int, int, unsigned int,
			unsigned int, int, int);
    extern int XDrawArcs(Display *, Drawable, GC, XArc *, int);
    extern int XDrawImageString(Display *, Drawable, GC, int, int,
				const char *, int);
    extern int XDrawImageString16(Display *, Drawable, GC, int, int,
				  XChar2b *, int);
    extern int XDrawLine(Display *, Drawable, GC, int, int, int, int);
    extern int XDrawLines(Display *, Drawable, GC, XPoint *, int, int);
    extern int XDrawPoint(Display *, Drawable, GC, int, int);
    extern int XDrawPoints(Display *, Drawable, GC, XPoint *, int, int);
    extern int XDrawRectangle(Display *, Drawable, GC, int, int,
			      unsigned int, unsigned int);
    extern int XDrawRectangles(Display *, Drawable, GC, XRectangle *, int);
    extern int XDrawSegments(Display *, Drawable, GC, XSegment *, int);
    extern int XDrawString(Display *, Drawable, GC, int, int, const char *,
			   int);
    extern int XDrawString16(Display *, Drawable, GC, int, int, XChar2b *,
			     int);
    extern int XDrawText(Display *, Drawable, GC, int, int, XTextItem *,
			 int);
    extern int XDrawText16(Display *, Drawable, GC, int, int,
			   XTextItem16 *, int);
    extern XExtData **XEHeadOfExtensionList(XEDataObject);
    extern int XESetBeforeFlush(void);
    extern int *XESetCloseDisplay(void);
    extern int XESetCopyGC(void);
    extern int XESetCreateFont(void);
    extern int XESetCreateGC(void);
    extern int XESetError(void);
    extern int XESetErrorString(void);
    extern int XESetEventToWire(void);
    extern int XESetFlushGC(void);
    extern int XESetFreeFont(void);
    extern int XESetFreeGC(void);
    extern int XESetPrintErrorValues(void);
    extern int XESetWireToError(void);
    extern int XESetWireToEvent(void);
    extern int XEnableAccessControl(Display *);
    extern long int XEventMaskOfScreen(Screen *);
    extern int XEventsQueued(Display *, int);
    extern long int XExtendedMaxRequestSize(Display *);
    extern XFontSetExtents *XExtentsOfFontSet(XFontSet);
    extern char *XFetchBuffer(Display *, int *, int);
    extern char *XFetchBytes(Display *, int *);
    extern int XFetchName(Display *, Window, char **);
    extern int XFillArc(Display *, Drawable, GC, int, int, unsigned int,
			unsigned int, int, int);
    extern int XFillArcs(Display *, Drawable, GC, XArc *, int);
    extern int XFillPolygon(Display *, Drawable, GC, XPoint *, int, int,
			    int);
    extern int XFillRectangle(Display *, Drawable, GC, int, int,
			      unsigned int, unsigned int);
    extern int XFillRectangles(Display *, Drawable, GC, XRectangle *, int);
    extern int XFilterEvent(XEvent *, Window);
    extern XExtData *XFindOnExtensionList(XExtData * *, int);
    extern int XFlush(Display *);
    extern void XFlushGC(Display *, GC);
    extern int XFontsOfFontSet(XFontSet, XFontStruct * **, char ***);
    extern int XForceScreenSaver(Display *, int);
    extern int XFree(void *);
    extern int XFreeColormap(Display *, Colormap);
    extern int XFreeColors(Display *, Colormap, unsigned long int *, int,
			   unsigned long int);
    extern int XFreeCursor(Display *, Cursor);
    extern int XFreeExtensionList(char **);
    extern int XFreeFont(Display *, XFontStruct *);
    extern int XFreeFontInfo(char **, XFontStruct *, int);
    extern int XFreeFontNames(char **);
    extern int XFreeFontPath(char **);
    extern void XFreeFontSet(Display *, XFontSet);
    extern int XFreeGC(Display *, GC);
    extern int XFreeModifiermap(XModifierKeymap *);
    extern int XFreePixmap(Display *, Pixmap);
    extern void XFreeStringList(char **);
    extern GContext XGContextFromGC(GC);
    extern int XGeometry(Display *, int, const char *, const char *,
			 unsigned int, unsigned int, unsigned int, int,
			 int, int *, int *, int *, int *);
    extern char *XGetAtomName(Display *, Atom);
    extern int XGetAtomNames(Display *, Atom *, int, char **);
    extern int XGetCommand(Display *, Window, char ***, int *);
    extern char *XGetDefault(Display *, const char *, const char *);
    extern int XGetErrorDatabaseText(Display *, const char *, const char *,
				     const char *, char *, int);
    extern int XGetErrorText(Display *, int, char *, int);
    extern char **XGetFontPath(Display *, int *);
    extern int XGetFontProperty(XFontStruct *, Atom, unsigned long int *);
    extern int XGetGCValues(Display *, GC, unsigned long int, XGCValues *);
    extern int XGetGeometry(Display *, Drawable, Window *, int *, int *,
			    unsigned int *, unsigned int *, unsigned int *,
			    unsigned int *);
    extern char *XGetICValues(XIC, ...);
    extern char *XGetIMValues(XIM, ...);
    extern int XGetIconName(Display *, Window, char **);
    extern XImage *XGetImage(Display *, Drawable, int, int, unsigned int,
			     unsigned int, unsigned long int, int);
    extern int XGetInputFocus(Display *, Window *, int *);
    extern int XGetKeyboardControl(Display *, XKeyboardState *);
    extern KeySym *XGetKeyboardMapping(Display *, unsigned int, int,
				       int *);
    extern XModifierKeymap *XGetModifierMapping(Display *);
    extern XTimeCoord *XGetMotionEvents(Display *, Window, Time, Time,
					int *);
    extern char *XGetOCValues(XOC, ...);
    extern char *XGetOMValues(XOM, ...);
    extern int XGetPointerControl(Display *, int *, int *, int *);
    extern int XGetPointerMapping(Display *, unsigned char *, int);
    extern int XGetScreenSaver(Display *, int *, int *, int *, int *);
    extern Window XGetSelectionOwner(Display *, Atom);
    extern XImage *XGetSubImage(Display *, Drawable, int, int,
				unsigned int, unsigned int,
				unsigned long int, int, XImage *, int,
				int);
    extern int XGetTransientForHint(Display *, Window, Window *);
    extern int XGetWMColormapWindows(Display *, Window, Window * *, int *);
    extern int XGetWMProtocols(Display *, Window, Atom * *, int *);
    extern int XGetWindowAttributes(Display *, Window,
				    XWindowAttributes *);
    extern int XGetWindowProperty(Display *, Window, Atom, long int,
				  long int, int, Atom, Atom *, int *,
				  unsigned long int *, unsigned long int *,
				  unsigned char **);
    extern int XGrabButton(Display *, unsigned int, unsigned int, Window,
			   int, unsigned int, int, int, Window, Cursor);
    extern int XGrabKey(Display *, int, unsigned int, Window, int, int,
			int);
    extern int XGrabKeyboard(Display *, Window, int, int, int, Time);
    extern int XGrabPointer(Display *, Window, int, unsigned int, int, int,
			    Window, Cursor, Time);
    extern int XGrabServer(Display *);
    extern int XHeightMMOfScreen(Screen *);
    extern int XHeightOfScreen(Screen *);
    extern XIM XIMOfIC(XIC);
    extern int XIconifyWindow(Display *, Window, int);
    extern int XIfEvent(Display *, XEvent *, int (*)(void)
			, XPointer);
    extern int XImageByteOrder(Display *);
    extern XExtCodes *XInitExtension(Display *, const char *);
    extern int XInitImage(XImage *);
    extern int XInitThreads(void);
    extern XModifierKeymap *XInsertModifiermapEntry(XModifierKeymap *,
						    unsigned int, int);
    extern int XInstallColormap(Display *, Colormap);
    extern Atom XInternAtom(Display *, const char *, int);
    extern int XInternAtoms(Display *, char **, int, int, Atom *);
    extern int XInternalConnectionNumbers(Display *, int **, int *);
    extern KeySym XKeycodeToKeysym(Display *, unsigned int, int);
    extern KeyCode XKeysymToKeycode(Display *, KeySym);
    extern char *XKeysymToString(KeySym);
    extern int XKillClient(Display *, XID);
    extern unsigned long int XLastKnownRequestProcessed(Display *);
    extern int *XListDepths(Display *, int, int *);
    extern char **XListExtensions(Display *, int *);
    extern char **XListFonts(Display *, const char *, int, int *);
    extern char **XListFontsWithInfo(Display *, const char *, int, int *,
				     XFontStruct * *);
    extern XHostAddress *XListHosts(Display *, int *, int *);
    extern Colormap *XListInstalledColormaps(Display *, Window, int *);
    extern XPixmapFormatValues *XListPixmapFormats(Display *, int *);
    extern Atom *XListProperties(Display *, Window, int *);
    extern Font XLoadFont(Display *, const char *);
    extern XFontStruct *XLoadQueryFont(Display *, const char *);
    extern char *XLocaleOfFontSet(XFontSet);
    extern char *XLocaleOfIM(XIM);
    extern char *XLocaleOfOM(XOM);
    extern void XLockDisplay(Display *);
    extern int XLookupColor(Display *, Colormap, const char *, XColor *,
			    XColor *);
    extern KeySym XLookupKeysym(XKeyEvent *, int);
    extern int XLowerWindow(Display *, Window);
    extern int XMapRaised(Display *, Window);
    extern int XMapSubwindows(Display *, Window);
    extern int XMapWindow(Display *, Window);
    extern int XMaskEvent(Display *, long int, XEvent *);
    extern int XMaxCmapsOfScreen(Screen *);
    extern long int XMaxRequestSize(Display *);
    extern int XMinCmapsOfScreen(Screen *);
    extern int XMoveResizeWindow(Display *, Window, int, int, unsigned int,
				 unsigned int);
    extern int XMoveWindow(Display *, Window, int, int);
    extern XModifierKeymap *XNewModifiermap(int);
    extern int XNextEvent(Display *, XEvent *);
    extern unsigned long int XNextRequest(Display *);
    extern int XNoOp(Display *);
    extern XOM XOMOfOC(XOC);
    extern Display *XOpenDisplay(const char *);
    extern XIM XOpenIM(Display *, struct _XrmHashBucketRec *, char *,
		       char *);
    extern XOM XOpenOM(Display *, struct _XrmHashBucketRec *, const char *,
		       const char *);
    extern int XParseColor(Display *, Colormap, const char *, XColor *);
    extern int XParseGeometry(const char *, int *, int *, unsigned int *,
			      unsigned int *);
    extern int XPeekEvent(Display *, XEvent *);
    extern int XPeekIfEvent(Display *, XEvent *, int (*)(void)
			    , XPointer);
    extern int XPending(Display *);
    extern int XPlanesOfScreen(Screen *);
    extern void XProcessInternalConnection(Display *, int);
    extern int XProtocolRevision(Display *);
    extern int XProtocolVersion(Display *);
    extern int XPutBackEvent(Display *, XEvent *);
    extern int XPutImage(Display *, Drawable, GC, XImage *, int, int, int,
			 int, unsigned int, unsigned int);
    extern int XQLength(Display *);
    extern int XQueryBestCursor(Display *, Drawable, unsigned int,
				unsigned int, unsigned int *,
				unsigned int *);
    extern int XQueryBestSize(Display *, int, Drawable, unsigned int,
			      unsigned int, unsigned int *,
			      unsigned int *);
    extern int XQueryBestStipple(Display *, Drawable, unsigned int,
				 unsigned int, unsigned int *,
				 unsigned int *);
    extern int XQueryBestTile(Display *, Drawable, unsigned int,
			      unsigned int, unsigned int *,
			      unsigned int *);
    extern int XQueryColor(Display *, Colormap, XColor *);
    extern int XQueryColors(Display *, Colormap, XColor *, int);
    extern int XQueryExtension(Display *, const char *, int *, int *,
			       int *);
    extern XFontStruct *XQueryFont(Display *, XID);
    extern int XQueryKeymap(Display *, char);
    extern int XQueryPointer(Display *, Window, Window *, Window *, int *,
			     int *, int *, int *, unsigned int *);
    extern int XQueryTextExtents(Display *, XID, const char *, int, int *,
				 int *, int *, XCharStruct *);
    extern int XQueryTextExtents16(Display *, XID, XChar2b *, int, int *,
				   int *, int *, XCharStruct *);
    extern int XQueryTree(Display *, Window, Window *, Window *,
			  Window * *, unsigned int *);
    extern int XRaiseWindow(Display *, Window);
    extern int XReadBitmapFile(Display *, Drawable, const char *,
			       unsigned int *, unsigned int *, Pixmap *,
			       int *, int *);
    extern int XReadBitmapFileData(const char *, unsigned int *,
				   unsigned int *, unsigned char **, int *,
				   int *);
    extern int XRebindKeysym(Display *, KeySym, KeySym *, int,
			     const unsigned char *, int);
    extern int XRecolorCursor(Display *, Cursor, XColor *, XColor *);
    extern int XReconfigureWMWindow(Display *, Window, int, unsigned int,
				    XWindowChanges *);
    extern int XRefreshKeyboardMapping(XMappingEvent *);
    extern int XRegisterIMInstantiateCallback(Display *,
					      struct _XrmHashBucketRec *,
					      char *, char *, XIDProc,
					      XPointer);
    extern void XRemoveConnectionWatch(Display *, XConnectionWatchProc,
				       XPointer);
    extern int XRemoveFromSaveSet(Display *, Window);
    extern int XRemoveHost(Display *, XHostAddress *);
    extern int XRemoveHosts(Display *, XHostAddress *, int);
    extern int XReparentWindow(Display *, Window, Window, int, int);
    extern int XResetScreenSaver(Display *);
    extern int XResizeWindow(Display *, Window, unsigned int,
			     unsigned int);
    extern char *XResourceManagerString(Display *);
    extern int XRestackWindows(Display *, Window *, int);
    extern Window XRootWindow(Display *, int);
    extern Window XRootWindowOfScreen(Screen *);
    extern int XRotateBuffers(Display *, int);
    extern int XRotateWindowProperties(Display *, Window, Atom *, int,
				       int);
    extern int XScreenCount(Display *);
    extern int XScreenNumberOfScreen(Screen *);
    extern Screen *XScreenOfDisplay(Display *, int);
    extern char *XScreenResourceString(Screen *);
    extern int XSelectInput(Display *, Window, long int);
    extern int XSendEvent(Display *, Window, int, long int, XEvent *);
    extern char *XServerVendor(Display *);
    extern int XSetAccessControl(Display *, int);
    extern int XSetArcMode(Display *, GC, int);
    extern void XSetAuthorization(char *, int, char *, int);
    extern int XSetBackground(Display *, GC, unsigned long int);
    extern int XSetClipMask(Display *, GC, Pixmap);
    extern int XSetClipOrigin(Display *, GC, int, int);
    extern int XSetClipRectangles(Display *, GC, int, int, XRectangle *,
				  int, int);
    extern int XSetCloseDownMode(Display *, int);
    extern int XSetCommand(Display *, Window, char **, int);
    extern int XSetDashes(Display *, GC, int, const char *, int);
    extern XErrorHandler XSetErrorHandler(XErrorHandler);
    extern int XSetFillRule(Display *, GC, int);
    extern int XSetFillStyle(Display *, GC, int);
    extern int XSetFont(Display *, GC, Font);
    extern int XSetFontPath(Display *, char **, int);
    extern int XSetForeground(Display *, GC, unsigned long int);
    extern int XSetFunction(Display *, GC, int);
    extern int XSetGraphicsExposures(Display *, GC, int);
    extern void XSetICFocus(XIC);
    extern char *XSetICValues(XIC, ...);
    extern XIOErrorHandler XSetIOErrorHandler(XIOErrorHandler);
    extern int XSetIconName(Display *, Window, const char *);
    extern int XSetInputFocus(Display *, Window, int, Time);
    extern int XSetLineAttributes(Display *, GC, unsigned int, int, int,
				  int);
    extern char *XSetLocaleModifiers(const char *);
    extern int XSetModifierMapping(Display *, XModifierKeymap *);
    extern char *XSetOCValues(XOC, ...);
    extern char *XSetOMValues(XOM, ...);
    extern int XSetPlaneMask(Display *, GC, unsigned long int);
    extern int XSetPointerMapping(Display *, const unsigned char *, int);
    extern int XSetScreenSaver(Display *, int, int, int, int);
    extern int XSetSelectionOwner(Display *, Atom, Window, Time);
    extern int XSetState(Display *, GC, unsigned long int,
			 unsigned long int, int, unsigned long int);
    extern int XSetStipple(Display *, GC, Pixmap);
    extern int XSetSubwindowMode(Display *, GC, int);
    extern int XSetTSOrigin(Display *, GC, int, int);
    extern int XSetTile(Display *, GC, Pixmap);
    extern int XSetTransientForHint(Display *, Window, Window);
    extern int XSetWMColormapWindows(Display *, Window, Window *, int);
    extern int XSetWMProtocols(Display *, Window, Atom *, int);
    extern int XSetWindowBackground(Display *, Window, unsigned long int);
    extern int XSetWindowBackgroundPixmap(Display *, Window, Pixmap);
    extern int XSetWindowBorder(Display *, Window, unsigned long int);
    extern int XSetWindowBorderPixmap(Display *, Window, Pixmap);
    extern int XSetWindowBorderWidth(Display *, Window, unsigned int);
    extern int XSetWindowColormap(Display *, Window, Colormap);
    extern int XStoreBuffer(Display *, const char *, int, int);
    extern int XStoreBytes(Display *, const char *, int);
    extern int XStoreColor(Display *, Colormap, XColor *);
    extern int XStoreColors(Display *, Colormap, XColor *, int);
    extern int XStoreName(Display *, Window, const char *);
    extern int XStoreNamedColor(Display *, Colormap, const char *,
				unsigned long int, int);
    extern KeySym XStringToKeysym(const char *);
    extern int XSupportsLocale(void);
    extern int XSync(Display *, int);
    extern int XTextExtents(XFontStruct *, const char *, int, int *, int *,
			    int *, XCharStruct *);
    extern int XTextExtents16(XFontStruct *, XChar2b *, int, int *, int *,
			      int *, XCharStruct *);
    extern int XTextWidth(XFontStruct *, const char *, int);
    extern int XTextWidth16(XFontStruct *, XChar2b *, int);
    extern int XTranslateCoordinates(Display *, Window, Window, int, int,
				     int *, int *, Window *);
    extern int XUndefineCursor(Display *, Window);
    extern int XUngrabButton(Display *, unsigned int, unsigned int,
			     Window);
    extern int XUngrabKey(Display *, int, unsigned int, Window);
    extern int XUngrabKeyboard(Display *, Time);
    extern int XUngrabPointer(Display *, Time);
    extern int XUngrabServer(Display *);
    extern int XUninstallColormap(Display *, Colormap);
    extern int XUnloadFont(Display *, Font);
    extern void XUnlockDisplay(Display *);
    extern int XUnmapSubwindows(Display *, Window);
    extern int XUnmapWindow(Display *, Window);
    extern int XUnregisterIMInstantiateCallback(Display *,
						struct _XrmHashBucketRec *,
						char *, char *, XIDProc,
						XPointer);
    extern void XUnsetICFocus(XIC);
    extern XVaNestedList XVaCreateNestedList(int, ...);
    extern int XVendorRelease(Display *);
    extern VisualID XVisualIDFromVisual(Visual *);
    extern int XWarpPointer(Display *, Window, Window, int, int,
			    unsigned int, unsigned int, int, int);
    extern unsigned long int XWhitePixel(Display *, int);
    extern unsigned long int XWhitePixelOfScreen(Screen *);
    extern int XWidthMMOfScreen(Screen *);
    extern int XWidthOfScreen(Screen *);
    extern int XWindowEvent(Display *, Window, long int, XEvent *);
    extern int XWithdrawWindow(Display *, Window, int);
    extern int XWriteBitmapFile(Display *, const char *, Pixmap,
				unsigned int, unsigned int, int, int);
    extern void XmbDrawImageString(Display *, Drawable, XFontSet, GC, int,
				   int, const char *, int);
    extern void XmbDrawString(Display *, Drawable, XFontSet, GC, int, int,
			      const char *, int);
    extern void XmbDrawText(Display *, Drawable, GC, int, int,
			    XmbTextItem *, int);
    extern int XmbLookupString(XIC, XKeyPressedEvent *, char *, int,
			       KeySym *, int *);
    extern char *XmbResetIC(XIC);
    extern int XmbTextEscapement(XFontSet, const char *, int);
    extern int XmbTextExtents(XFontSet, const char *, int, XRectangle *,
			      XRectangle *);
    extern int XmbTextPerCharExtents(XFontSet, const char *, int,
				     XRectangle *, XRectangle *, int,
				     int *, XRectangle *, XRectangle *);
    extern void XrmInitialize(void);
    extern void XwcDrawImageString(Display *, Drawable, XFontSet, GC, int,
				   int, wchar_t *, int);
    extern void XwcDrawString(Display *, Drawable, XFontSet, GC, int, int,
			      wchar_t *, int);
    extern void XwcDrawText(Display *, Drawable, GC, int, int,
			    XwcTextItem *, int);
    extern int XwcLookupString(XIC, XKeyPressedEvent *, wchar_t *, int,
			       KeySym *, int *);
    extern wchar_t *XwcResetIC(XIC);
    extern int XwcTextEscapement(XFontSet, wchar_t *, int);
    extern int XwcTextExtents(XFontSet, wchar_t *, int, XRectangle *,
			      XRectangle *);
    extern int XwcTextPerCharExtents(XFontSet, wchar_t *, int,
				     XRectangle *, XRectangle *, int,
				     int *, XRectangle *, XRectangle *);
#ifdef __cplusplus
}
#endif
#endif
