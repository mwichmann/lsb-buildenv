#ifndef _X11_XLIB_H_
#define _X11_XLIB_H_

#include <X11/X.h>
#include <stddef.h>



struct _XDisplay;

typedef struct XColor;

typedef void *XVaNestedList;

typedef int (*XErrorHandler) ();

typedef int (*XIOErrorHandler) ();

typedef void (*XConnectionWatchProc) ();




typedef char *XPointer;




typedef struct _XExtData
{
  int number;
  struct _XExtData *next;
  int (*free_private) (struct _XExtData * extension);
  XPointer private_data;
}
XExtData;

typedef struct XExtCodes;




typedef struct XPixmapFormatValues;




typedef struct XGCValues;




typedef struct _XGC *GC;




typedef struct Visual;




typedef struct Depth;




typedef struct Screen;




typedef struct ScreenFormat;




typedef struct XSetWindowAttributes;

typedef struct XWindowAttributes;




typedef struct XHostAddress;




struct XImagefuncs;

typedef struct _XImage
{
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
  unsigned long red_mask;
  unsigned long green_mask;
  unsigned long blue_mask;
  XPointer obdata;
  struct funcs f;
}
XImage;




typedef struct XWindowChanges;




typedef struct XSegment;

typedef struct XPoint;

typedef struct XRectangle;

typedef struct XArc;




typedef struct XKeyboardControl;




typedef struct XKeyboardState;




typedef struct XTimeCoord;




typedef struct XModifierKeymap;




typedef struct _XDisplay Display;




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




typedef union _XEvent
{
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
  long pad[1];
}
XEvent;




typedef struct XCharStruct;




typedef struct XFontProp;

typedef struct XFontStruct;

typedef struct XFontSetExtents;




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

typedef void (*XIDProc) ();


int XActivateScreenSaver (Display *);
int XAddConnectionWatch (Display *, XConnectionWatchProc, XPointer);
XExtCodes *XAddExtension (Display *);
int XAddHost (Display *, XHostAddress *);
int XAddHosts (Display *, XHostAddress *, int);
int XAddToExtensionList (struct _XExtData **, XExtData *);
int XAddToSaveSet (Display *, Window);
unsigned long XAllPlanes (void);
int XAllocColor (Display *, Colormap, XColor *);
int XAllocColorCells (Display *, Colormap, int, unsigned long *, unsigned int,
		      unsigned long *, unsigned int);
int XAllocColorPlanes (Display *, Colormap, int, unsigned long *, int, int,
		       int, int, unsigned long *, unsigned long *,
		       unsigned long *);
int XAllocNamedColor (Display *, Colormap, char *, XColor *, XColor *);
int XAllowEvents (Display *, int, Time);
int XAutoRepeatOff (Display *);
int XAutoRepeatOn (Display *);
char *XBaseFontNameListOfFontSet (XFontSet);
int XBell (Display *, int);
int XBitmapBitOrder (Display *);
int XBitmapPad (Display *);
int XBitmapUnit (Display *);
unsigned long XBlackPixel (Display *, int);
unsigned long XBlackPixelOfScreen (Screen *);
int XCellsOfScreen (Screen *);
int XChangeActivePointerGrab (Display *, unsigned int, Cursor, Time);
int XChangeGC (Display *, GC, unsigned long, XGCValues *);
int XChangeKeyboardControl (Display *, unsigned long, XKeyboardControl *);
int XChangeKeyboardMapping (Display *, int, int, KeySym *, int);
int XChangePointerControl (Display *, int, int, int, int, int);
int XChangeProperty (Display *, Window, Atom, Atom, int, int, unsigned char *,
		     int);
int XChangeSaveSet (Display *, Window, int);
int XChangeWindowAttributes (Display *, Window, unsigned long,
			     XSetWindowAttributes *);
int XCheckIfEvent (Display *, XEvent *, int, XPointer);
int XCheckMaskEvent (Display *, long, XEvent *);
int XCheckTypedEvent (Display *, int, XEvent *);
int XCheckTypedWindowEvent (Display *, Window, int, XEvent *);
int XCheckWindowEvent (Display *, Window, long, XEvent *);
int XCirculateSubwindows (Display *, Window, int);
int XCirculateSubwindowsDown (Display *, Window);
int XCirculateSubwindowsUp (Display *, Window);
int XClearArea (Display *, Window, int, int, unsigned int, unsigned int, int);
int XClearWindow (Display *, Window);
int XCloseDisplay (Display *);
int XCloseIM (XIM);
int XCloseOM (XOM);
int XConfigureWindow (Display *, Window, unsigned int, XWindowChanges *);
int XConnectionNumber (Display *);
int XContextDependentDrawing (XFontSet);
int XContextualDrawing (XFontSet);
int XConvertSelection (Display *, Atom, Atom, Atom, Window, Time);
int XCopyArea (Display *, Drawable, Drawable, GC, int, int, unsigned int,
	       unsigned int, int, int);
Colormap XCopyColormapAndFree (Display *, Colormap);
int XCopyGC (Display *, GC, unsigned long, GC);
int XCopyPlane (Display *, Drawable, Drawable, GC, int, int, unsigned int,
		unsigned int, int, int, unsigned long);
Pixmap XCreateBitmapFromData (Display *, Drawable, char *, unsigned int,
			      unsigned int);
Colormap XCreateColormap (Display *, Window, Visual *, int);
Cursor XCreateFontCursor (Display *, unsigned int);
XFontSet XCreateFontSet (Display *, char *, char ***, int *, char **);
GC XCreateGC (Display *, Drawable, unsigned long, XGCValues *);
Cursor XCreateGlyphCursor (Display *, Font, Font, unsigned int, unsigned int,
			   XColor *, XColor *);
XIC XCreateIC (XIM, ...);
XImage *XCreateImage (Display *, Visual *, unsigned int, int, int, char *,
		      unsigned int, unsigned int, int, int);
XOC XCreateOC (XOM, ...);
Pixmap XCreatePixmap (Display *, Drawable, unsigned int, unsigned int,
		      unsigned int);
Cursor XCreatePixmapCursor (Display *, Pixmap, Pixmap, XColor *, XColor *,
			    unsigned int, unsigned int);
Pixmap XCreatePixmapFromBitmapData (Display *, Drawable, char *, unsigned int,
				    unsigned int, unsigned long,
				    unsigned long, unsigned int);
Window XCreateSimpleWindow (Display *, Window, int, int, unsigned int,
			    unsigned int, unsigned int, unsigned long,
			    unsigned long);
Window XCreateWindow (Display *, Window, int, int, unsigned int, unsigned int,
		      unsigned int, int, unsigned int, Visual *,
		      unsigned long, XSetWindowAttributes *);
Colormap XDefaultColormap (Display *, int);
Colormap XDefaultColormapOfScreen (Screen *);
int XDefaultDepth (Display *, int);
int XDefaultDepthOfScreen (Screen *);
GC XDefaultGC (Display *, int);
GC XDefaultGCOfScreen (Screen *);
Window XDefaultRootWindow (Display *);
int XDefaultScreen (Display *);
Screen *XDefaultScreenOfDisplay (Display *);
Visual *XDefaultVisual (Display *, int);
Visual *XDefaultVisualOfScreen (Screen *);
int XDefineCursor (Display *, Window, Cursor);
XModifierKeymap *XDeleteModifiermapEntry (XModifierKeymap *, unsigned int,
					  int);
int XDeleteProperty (Display *, Window, Atom);
void XDestroyIC (XIC);
void XDestroyOC (XOC);
int XDestroySubwindows (Display *, Window);
int XDestroyWindow (Display *, Window);
int XDirectionalDependentDrawing (XFontSet);
int XDisableAccessControl (Display *);
int XDisplayCells (Display *, int);
int XDisplayHeight (Display *, int);
int XDisplayHeightMM (Display *, int);
int XDisplayKeycodes (Display *, int *, int *);
unsigned long XDisplayMotionBufferSize (Display *);
char *XDisplayName (char *);
Display *XDisplayOfIM (XIM);
Display *XDisplayOfOM (XOM);
Display *XDisplayOfScreen (Screen *);
int XDisplayPlanes (Display *, int);
char *XDisplayString (Display *);
int XDisplayWidth (Display *, int);
int XDisplayWidthMM (Display *, int);
int XDoesBackingStore (Screen *);
int XDoesSaveUnders (Screen *);
int XDrawArc (Display *, Drawable, GC, int, int, unsigned int, unsigned int,
	      int, int);
int XDrawArcs (Display *, Drawable, GC, XArc *, int);
int XDrawImageString (Display *, Drawable, GC, int, int, char *, int);
int XDrawImageString16 (Display *, Drawable, GC, int, int, XChar2b *, int);
int XDrawLine (Display *, Drawable, GC, int, int, int, int);
int XDrawLines (Display *, Drawable, GC, XPoint *, int, int);
int XDrawPoint (Display *, Drawable, GC, int, int);
int XDrawPoints (Display *, Drawable, GC, XPoint *, int, int);
int XDrawRectangle (Display *, Drawable, GC, int, int, unsigned int,
		    unsigned int);
int XDrawRectangles (Display *, Drawable, GC, XRectangle *, int);
int XDrawSegments (Display *, Drawable, GC, XSegment *, int);
int XDrawString (Display *, Drawable, GC, int, int, char *, int);
int XDrawString16 (Display *, Drawable, GC, int, int, XChar2b *, int);
int XDrawText (Display *, Drawable, GC, int, int, XTextItem *, int);
int XDrawText16 (Display *, Drawable, GC, int, int, XTextItem16 *, int);
XExtData **XEHeadOfExtensionList (XEDataObject);
int XEnableAccessControl (Display *);
long XEventMaskOfScreen (Screen *);
int XEventsQueued (Display *, int);
long XExtendedMaxRequestSize (Display *);
XFontSetExtents *XExtentsOfFontSet (XFontSet);
char *XFetchBuffer (Display *, int *, int);
char *XFetchBytes (Display *, int *);
int XFetchName (Display *, Window, char **);
int XFillArc (Display *, Drawable, GC, int, int, unsigned int, unsigned int,
	      int, int);
int XFillArcs (Display *, Drawable, GC, XArc *, int);
int XFillPolygon (Display *, Drawable, GC, XPoint *, int, int, int);
int XFillRectangle (Display *, Drawable, GC, int, int, unsigned int,
		    unsigned int);
int XFillRectangles (Display *, Drawable, GC, XRectangle *, int);
int XFilterEvent (XEvent *, Window);
XExtData *XFindOnExtensionList (XExtData * *, int);
int XFlush (Display *);
void XFlushGC (Display *, GC);
int XFontsOfFontSet (XFontSet, XFontStruct * **, char ***);
int XForceScreenSaver (Display *, int);
int XFree (void *);
int XFreeColormap (Display *, Colormap);
int XFreeColors (Display *, Colormap, unsigned long *, int, unsigned long);
int XFreeCursor (Display *, Cursor);
int XFreeExtensionList (char **);
int XFreeFont (Display *, XFontStruct *);
int XFreeFontInfo (char **, XFontStruct *, int);
int XFreeFontNames (char **);
int XFreeFontPath (char **);
void XFreeFontSet (Display *, XFontSet);
int XFreeGC (Display *, GC);
int XFreeModifiermap (XModifierKeymap *);
int XFreePixmap (Display *, Pixmap);
void XFreeStringList (char **);
GContext XGContextFromGC (GC);
int XGeometry (Display *, int, char *, char *, unsigned int, unsigned int,
	       unsigned int, int, int, int *, int *, int *, int *);
char *XGetAtomName (Display *, Atom);
int XGetAtomNames (Display *, Atom *, int, char **);
int XGetCommand (Display *, Window, char ***, int *);
char *XGetDefault (Display *, char *, char *);
int XGetErrorDatabaseText (Display *, char *, char *, char *, char *, int);
int XGetErrorText (Display *, int, char *, int);
char **XGetFontPath (Display *, int *);
int XGetFontProperty (XFontStruct *, Atom, unsigned long *);
int XGetGCValues (Display *, GC, unsigned long, XGCValues *);
int XGetGeometry (Display *, Drawable, Window *, int *, int *, unsigned int *,
		  unsigned int *, unsigned int *, unsigned int *);
char *XGetICValues (XIC, ...);
char *XGetIMValues (XIM, ...);
int XGetIconName (Display *, Window, char **);
XImage *XGetImage (Display *, Drawable, int, int, unsigned int, unsigned int,
		   unsigned long, int);
int XGetInputFocus (Display *, Window *, int *);
int XGetKeyboardControl (Display *, XKeyboardState *);
KeySym *XGetKeyboardMapping (Display *, unsigned int, int, int *);
XModifierKeymap *XGetModifierMapping (Display *);
XTimeCoord *XGetMotionEvents (Display *, Window, Time, Time, int *);
char *XGetOCValues (XOC, ...);
char *XGetOMValues (XOM, ...);
int XGetPointerControl (Display *, int *, int *, int *);
int XGetPointerMapping (Display *, unsigned char *, int);
int XGetScreenSaver (Display *, int *, int *, int *, int *);
Window XGetSelectionOwner (Display *, Atom);
XImage *XGetSubImage (Display *, Drawable, int, int, unsigned int,
		      unsigned int, unsigned long, int, XImage *, int, int);
int XGetTransientForHint (Display *, Window, Window *);
int XGetWMColormapWindows (Display *, Window, Window * *, int *);
int XGetWMProtocols (Display *, Window, Atom * *, int *);
int XGetWindowAttributes (Display *, Window, XWindowAttributes *);
int XGetWindowProperty (Display *, Window, Atom, long, long, int, Atom,
			Atom *, int *, unsigned long *, unsigned long *,
			unsigned char **);
int XGrabButton (Display *, unsigned int, unsigned int, Window, int,
		 unsigned int, int, int, Window, Cursor);
int XGrabKey (Display *, int, unsigned int, Window, int, int, int);
int XGrabKeyboard (Display *, Window, int, int, int, Time);
int XGrabPointer (Display *, Window, int, unsigned int, int, int, Window,
		  Cursor, Time);
int XGrabServer (Display *);
int XHeightMMOfScreen (Screen *);
int XHeightOfScreen (Screen *);
XIM XIMOfIC (XIC);
int XIconifyWindow (Display *, Window, int);
int XIfEvent (Display *, XEvent *, int, XPointer);
int XImageByteOrder (Display *);
XExtCodes *XInitExtension (Display *, char *);
int XInitImage (XImage *);
int XInitThreads (void);
XModifierKeymap *XInsertModifiermapEntry (XModifierKeymap *, unsigned int,
					  int);
int XInstallColormap (Display *, Colormap);
Atom XInternAtom (Display *, char *, int);
int XInternAtoms (Display *, char **, int, int, Atom *);
int XInternalConnectionNumbers (Display *, int **, int *);
KeySym XKeycodeToKeysym (Display *, unsigned int, int);
KeyCode XKeysymToKeycode (Display *, KeySym);
char *XKeysymToString (KeySym);
int XKillClient (Display *, XID);
unsigned long XLastKnownRequestProcessed (Display *);
int *XListDepths (Display *, int, int *);
char **XListExtensions (Display *, int *);
char **XListFonts (Display *, char *, int, int *);
char **XListFontsWithInfo (Display *, char *, int, int *, XFontStruct * *);
XHostAddress *XListHosts (Display *, int *, int *);
Colormap *XListInstalledColormaps (Display *, Window, int *);
XPixmapFormatValues *XListPixmapFormats (Display *, int *);
Atom *XListProperties (Display *, Window, int *);
Font XLoadFont (Display *, char *);
XFontStruct *XLoadQueryFont (Display *, char *);
char *XLocaleOfFontSet (XFontSet);
char *XLocaleOfIM (XIM);
char *XLocaleOfOM (XOM);
void XLockDisplay (Display *);
int XLookupColor (Display *, Colormap, char *, XColor *, XColor *);
KeySym XLookupKeysym (XKeyEvent *, int);
int XLowerWindow (Display *, Window);
int XMapRaised (Display *, Window);
int XMapSubwindows (Display *, Window);
int XMapWindow (Display *, Window);
int XMaskEvent (Display *, long, XEvent *);
int XMaxCmapsOfScreen (Screen *);
long XMaxRequestSize (Display *);
int XMinCmapsOfScreen (Screen *);
int XMoveResizeWindow (Display *, Window, int, int, unsigned int,
		       unsigned int);
int XMoveWindow (Display *, Window, int, int);
XModifierKeymap *XNewModifiermap (int);
int XNextEvent (Display *, XEvent *);
unsigned long XNextRequest (Display *);
int XNoOp (Display *);
XOM XOMOfOC (XOC);
Display *XOpenDisplay (char *);
XIM XOpenIM (Display *, struct _XrmHashBucketRec *, char *, char *);
XOM XOpenOM (Display *, struct _XrmHashBucketRec *, char *, char *);
int XParseColor (Display *, Colormap, char *, XColor *);
int XParseGeometry (char *, int *, int *, unsigned int *, unsigned int *);
int XPeekEvent (Display *, XEvent *);
int XPeekIfEvent (Display *, XEvent *, int, XPointer);
int XPending (Display *);
int XPlanesOfScreen (Screen *);
void XProcessInternalConnection (Display *, int);
int XProtocolRevision (Display *);
int XProtocolVersion (Display *);
int XPutBackEvent (Display *, XEvent *);
int XPutImage (Display *, Drawable, GC, XImage *, int, int, int, int,
	       unsigned int, unsigned int);
int XQLength (Display *);
int XQueryBestCursor (Display *, Drawable, unsigned int, unsigned int,
		      unsigned int *, unsigned int *);
int XQueryBestSize (Display *, int, Drawable, unsigned int, unsigned int,
		    unsigned int *, unsigned int *);
int XQueryBestStipple (Display *, Drawable, unsigned int, unsigned int,
		       unsigned int *, unsigned int *);
int XQueryBestTile (Display *, Drawable, unsigned int, unsigned int,
		    unsigned int *, unsigned int *);
int XQueryColor (Display *, Colormap, XColor *);
int XQueryColors (Display *, Colormap, XColor *, int);
int XQueryExtension (Display *, char *, int *, int *, int *);
XFontStruct *XQueryFont (Display *, XID);
int XQueryKeymap (Display *, char);
int XQueryPointer (Display *, Window, Window *, Window *, int *, int *, int *,
		   int *, unsigned int *);
int XQueryTextExtents (Display *, XID, char *, int, int *, int *, int *,
		       XCharStruct *);
int XQueryTextExtents16 (Display *, XID, XChar2b *, int, int *, int *, int *,
			 XCharStruct *);
int XQueryTree (Display *, Window, Window *, Window *, Window * *,
		unsigned int *);
int XRaiseWindow (Display *, Window);
int XReadBitmapFile (Display *, Drawable, char *, unsigned int *,
		     unsigned int *, Pixmap *, int *, int *);
int XReadBitmapFileData (char *, unsigned int *, unsigned int *,
			 unsigned char **, int *, int *);
int XRebindKeysym (Display *, KeySym, KeySym *, int, unsigned char *, int);
int XRecolorCursor (Display *, Cursor, XColor *, XColor *);
int XReconfigureWMWindow (Display *, Window, int, unsigned int,
			  XWindowChanges *);
int XRefreshKeyboardMapping (XMappingEvent *);
int XRegisterIMInstantiateCallback (Display *, struct _XrmHashBucketRec *,
				    char *, char *, XIDProc, XPointer);
void XRemoveConnectionWatch (Display *, XConnectionWatchProc, XPointer);
int XRemoveFromSaveSet (Display *, Window);
int XRemoveHost (Display *, XHostAddress *);
int XRemoveHosts (Display *, XHostAddress *, int);
int XReparentWindow (Display *, Window, Window, int, int);
int XResetScreenSaver (Display *);
int XResizeWindow (Display *, Window, unsigned int, unsigned int);
char *XResourceManagerString (Display *);
int XRestackWindows (Display *, Window *, int);
Window XRootWindow (Display *, int);
Window XRootWindowOfScreen (Screen *);
int XRotateBuffers (Display *, int);
int XRotateWindowProperties (Display *, Window, Atom *, int, int);
int XScreenCount (Display *);
int XScreenNumberOfScreen (Screen *);
Screen *XScreenOfDisplay (Display *, int);
char *XScreenResourceString (Screen *);
int XSelectInput (Display *, Window, long);
int XSendEvent (Display *, Window, int, long, XEvent *);
char *XServerVendor (Display *);
int XSetAccessControl (Display *, int);
int XSetArcMode (Display *, GC, int);
void XSetAuthorization (char *, int, char *, int);
int XSetBackground (Display *, GC, unsigned long);
int XSetClipMask (Display *, GC, Pixmap);
int XSetClipOrigin (Display *, GC, int, int);
int XSetClipRectangles (Display *, GC, int, int, XRectangle *, int, int);
int XSetCloseDownMode (Display *, int);
int XSetCommand (Display *, Window, char **, int);
int XSetDashes (Display *, GC, int, char *, int);
XErrorHandler XSetErrorHandler (XErrorHandler);
int XSetFillRule (Display *, GC, int);
int XSetFillStyle (Display *, GC, int);
int XSetFont (Display *, GC, Font);
int XSetFontPath (Display *, char **, int);
int XSetForeground (Display *, GC, unsigned long);
int XSetFunction (Display *, GC, int);
int XSetGraphicsExposures (Display *, GC, int);
void XSetICFocus (XIC);
char *XSetICValues (XIC, ...);
XIOErrorHandler XSetIOErrorHandler (XIOErrorHandler);
int XSetIconName (Display *, Window, char *);
int XSetInputFocus (Display *, Window, int, Time);
int XSetLineAttributes (Display *, GC, unsigned int, int, int, int);
char *XSetLocaleModifiers (char *);
int XSetModifierMapping (Display *, XModifierKeymap *);
char *XSetOCValues (XOC, ...);
char *XSetOMValues (XOM, ...);
int XSetPlaneMask (Display *, GC, unsigned long);
int XSetPointerMapping (Display *, unsigned char *, int);
int XSetScreenSaver (Display *, int, int, int, int);
int XSetSelectionOwner (Display *, Atom, Window, Time);
int XSetState (Display *, GC, unsigned long, unsigned long, int,
	       unsigned long);
int XSetStipple (Display *, GC, Pixmap);
int XSetSubwindowMode (Display *, GC, int);
int XSetTSOrigin (Display *, GC, int, int);
int XSetTile (Display *, GC, Pixmap);
int XSetTransientForHint (Display *, Window, Window);
int XSetWMColormapWindows (Display *, Window, Window *, int);
int XSetWMProtocols (Display *, Window, Atom *, int);
int XSetWindowBackground (Display *, Window, unsigned long);
int XSetWindowBackgroundPixmap (Display *, Window, Pixmap);
int XSetWindowBorder (Display *, Window, unsigned long);
int XSetWindowBorderPixmap (Display *, Window, Pixmap);
int XSetWindowBorderWidth (Display *, Window, unsigned int);
int XSetWindowColormap (Display *, Window, Colormap);
int XStoreBuffer (Display *, char *, int, int);
int XStoreBytes (Display *, char *, int);
int XStoreColor (Display *, Colormap, XColor *);
int XStoreColors (Display *, Colormap, XColor *, int);
int XStoreName (Display *, Window, char *);
int XStoreNamedColor (Display *, Colormap, char *, unsigned long, int);
KeySym XStringToKeysym (char *);
int XSupportsLocale (void);
int XSync (Display *, int);
int XTextExtents (XFontStruct *, char *, int, int *, int *, int *,
		  XCharStruct *);
int XTextExtents16 (XFontStruct *, XChar2b *, int, int *, int *, int *,
		    XCharStruct *);
int XTextWidth (XFontStruct *, char *, int);
int XTextWidth16 (XFontStruct *, XChar2b *, int);
int XTranslateCoordinates (Display *, Window, Window, int, int, int *, int *,
			   Window *);
int XUndefineCursor (Display *, Window);
int XUngrabButton (Display *, unsigned int, unsigned int, Window);
int XUngrabKey (Display *, int, unsigned int, Window);
int XUngrabKeyboard (Display *, Time);
int XUngrabPointer (Display *, Time);
int XUngrabServer (Display *);
int XUninstallColormap (Display *, Colormap);
int XUnloadFont (Display *, Font);
void XUnlockDisplay (Display *);
int XUnmapSubwindows (Display *, Window);
int XUnmapWindow (Display *, Window);
int XUnregisterIMInstantiateCallback (Display *, struct _XrmHashBucketRec *,
				      char *, char *, XIDProc, XPointer);
void XUnsetICFocus (XIC);
XVaNestedList XVaCreateNestedList (int, ...);
int XVendorRelease (Display *);
VisualID XVisualIDFromVisual (Visual *);
int XWarpPointer (Display *, Window, Window, int, int, unsigned int,
		  unsigned int, int, int);
unsigned long XWhitePixel (Display *, int);
unsigned long XWhitePixelOfScreen (Screen *);
int XWidthMMOfScreen (Screen *);
int XWidthOfScreen (Screen *);
int XWindowEvent (Display *, Window, long, XEvent *);
int XWithdrawWindow (Display *, Window, int);
int XWriteBitmapFile (Display *, char *, Pixmap, unsigned int, unsigned int,
		      int, int);
void XmbDrawImageString (Display *, Drawable, XFontSet, GC, int, int, char *,
			 int);
void XmbDrawString (Display *, Drawable, XFontSet, GC, int, int, char *, int);
void XmbDrawText (Display *, Drawable, GC, int, int, XmbTextItem *, int);
int XmbLookupString (XIC, XKeyPressedEvent *, char *, int, KeySym *, int *);
char *XmbResetIC (XIC);
int XmbTextEscapement (XFontSet, char *, int);
int XmbTextExtents (XFontSet, char *, int, XRectangle *, XRectangle *);
int XmbTextPerCharExtents (XFontSet, char *, int, XRectangle *, XRectangle *,
			   int, int *, XRectangle *, XRectangle *);
void XrmInitialize (void);
void XwcDrawImageString (Display *, Drawable, XFontSet, GC, int, int,
			 wchar_t *, int);
void XwcDrawString (Display *, Drawable, XFontSet, GC, int, int, wchar_t *,
		    int);
void XwcDrawText (Display *, Drawable, GC, int, int, XwcTextItem *, int);
int XwcLookupString (XIC, XKeyPressedEvent *, wchar_t *, int, KeySym *,
		     int *);
wchar_t *XwcResetIC (XIC);
int XwcTextEscapement (XFontSet, wchar_t *, int);
int XwcTextExtents (XFontSet, wchar_t *, int, XRectangle *, XRectangle *);
int XwcTextPerCharExtents (XFontSet, wchar_t *, int, XRectangle *,
			   XRectangle *, int, int *, XRectangle *,
			   XRectangle *);
#endif
