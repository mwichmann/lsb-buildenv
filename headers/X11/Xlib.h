#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_XLIB_H_
#define _X11_XLIB_H_

#include <X11/X.h>
#include <stddef.h>
#include <X11/Xmd.h>
#include <X11/Xproto.h>
#include <X11/Xfuncproto.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    typedef char *XPointer;

    typedef struct {
	unsigned long int pixel;
	unsigned short red;
	unsigned short green;
	unsigned short blue;
	char flags;
	char pad;
    } XColor;

    typedef struct _XDisplay Display;

    typedef struct {
	int type;
	Display *display;
	XID resourceid;
	unsigned long int serial;
	unsigned char error_code;
	unsigned char request_code;
	unsigned char minor_code;
    } XErrorEvent;

    typedef struct _XIM *XIM;

    typedef struct _XIC *XIC;

    typedef void *XVaNestedList;

    typedef unsigned long int XIMFeedback;

    typedef struct _XIMText XIMText;

    typedef unsigned long int XIMPreeditState;

    typedef struct _XIMPreeditStateNotifyCallbackStruct
	XIMPreeditStateNotifyCallbackStruct;

    typedef unsigned long int XIMResetState;

    typedef unsigned long int XIMStringConversionFeedback;

    typedef struct _XIMStringConversionText XIMStringConversionText;

    typedef unsigned short XIMStringConversionPosition;

    typedef unsigned short XIMStringConversionType;

    typedef unsigned short XIMStringConversionOperation;

    typedef struct _XIMStringConversionCallbackStruct
	XIMStringConversionCallbackStruct;

    typedef struct _XIMPreeditDrawCallbackStruct
	XIMPreeditDrawCallbackStruct;

    typedef struct _XIMPreeditCaretCallbackStruct
	XIMPreeditCaretCallbackStruct;

    typedef struct _XIMStatusDrawCallbackStruct
	XIMStatusDrawCallbackStruct;

    typedef struct _XIMHotKeyTrigger XIMHotKeyTrigger;

    typedef struct _XIMHotKeyTriggers XIMHotKeyTriggers;

    typedef unsigned long int XIMHotKeyState;

    typedef struct {
	unsigned short count_values;
	char **supported_values;
    } XIMValuesList;

    typedef void (*XIMProc) (XIM, XPointer, XPointer);

    typedef int (*XICProc) (XIC, XPointer, XPointer);

    typedef enum {
	XIMForwardChar = 0,
	XIMBackwardChar = 1,
	XIMForwardWord = 2,
	XIMBackwardWord = 3,
	XIMCaretUp = 4,
	XIMCaretDown = 5,
	XIMNextLine = 6,
	XIMPreviousLine = 7,
	XIMLineStart = 8,
	XIMLineEnd = 9,
	XIMAbsolutePosition = 10,
	XIMDontChange = 11
    } XIMCaretDirection;

    typedef enum {
	XIMIsInvisible = 0,
	XIMIsPrimary = 1,
	XIMIsSecondary = 2
    } XIMCaretStyle;

    typedef enum {
	XIMTextType = 0,
	XIMBitmapType = 1
    } XIMStatusDataType;

    typedef int (*XErrorHandler) (Display *, XErrorEvent *);

    typedef int (*XIOErrorHandler) (Display *);

    typedef void (*XConnectionWatchProc) (Display *, XPointer, int, int,
					  XPointer *);

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XDisplay;

    struct _XIMText {
	unsigned short length;
	XIMFeedback *feedback;
	int encoding_is_wchar;
	union {
	    char *multi_byte;
	    wchar_t *wide_char;
	} string;
    };

    struct _XIMPreeditStateNotifyCallbackStruct {
	XIMPreeditState state;
    };

    struct _XIMStringConversionText {
	unsigned short length;
	XIMStringConversionFeedback *feedback;
	int encoding_is_wchar;
	union {
	    char *mbs;
	    wchar_t *wcs;
	} string;
    };

    struct _XIMStringConversionCallbackStruct {
	XIMStringConversionPosition position;
	XIMCaretDirection direction;
	XIMStringConversionOperation operation;
	unsigned short factor;
	XIMStringConversionText *text;
    };

    struct _XIMPreeditDrawCallbackStruct {
	int caret;
	int chg_first;
	int chg_length;
	XIMText *text;
    };

    struct _XIMPreeditCaretCallbackStruct {
	int position;
	XIMCaretDirection direction;
	XIMCaretStyle style;
    };

    struct _XIMStatusDrawCallbackStruct {
	XIMStatusDataType type;
	union {
	    XIMText *text;
	    Pixmap bitmap;
	} data;
    };

    struct _XIMHotKeyTrigger {
	KeySym keysym;
	int modifier;
	int modifier_mask;
    };

    struct _XIMHotKeyTriggers {
	int num_hot_key;
	XIMHotKeyTrigger *key;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


#define Bool	int
#if __LSB_VERSION__ >= 12
#define XNArea	"area"
#define XNAreaNeeded	"areaNeeded"
#define XNBackground	"background"
#define XNBackgroundPixmap	"backgroundPixmap"
#define XNBaseFontName	"baseFontName"
#define XNClientWindow	"clientWindow"
#define XNColormap	"colorMap"
#define XNContextualDrawing	"contextualDrawing"
#define XNCursor	"cursor"
#define XNDefaultString	"defaultString"
#define XNDestroyCallback	"destroyCallback"
#define XNDirectionalDependentDrawing	"directionalDependentDrawing"
#define XNFilterEvents	"filterEvents"
#define XNFocusWindow	"focusWindow"
#define XNFontInfo	"fontInfo"
#define XNFontSet	"fontSet"
#define XNForeground	"foreground"
#define XNGeometryCallback	"geometryCallback"
#define XNHotKey	"hotKey"
#define XNHotKeyState	"hotKeyState"
#define XNInputStyle	"inputStyle"
#define XNLineSpace	"lineSpace"
#define XNMissingCharSet	"missingCharSet"
#define XNOMAutomatic	"omAutomatic"
#define XNOrientation	"orientation"
#define XNPreeditAttributes	"preeditAttributes"
#define XNPreeditCaretCallback	"preeditCaretCallback"
#define XNPreeditDoneCallback	"preeditDoneCallback"
#define XNPreeditDrawCallback	"preeditDrawCallback"
#define XNPreeditStartCallback	"preeditStartCallback"
#define XNPreeditState	"preeditState"
#define XNPreeditStateNotifyCallback	"preeditStateNotifyCallback"
#define XNQueryICValuesList	"queryICValuesList"
#define XNQueryIMValuesList	"queryIMValuesList"
#define XNQueryInputStyle	"queryInputStyle"
#define XNQueryOrientation	"queryOrientation"
#define XNR6PreeditCallback	"r6PreeditCallback"
#define XNRequiredCharSet	"requiredCharSet"
#define XNResetState	"resetState"
#define XNResourceClass	"resourceClass"
#define XNResourceName	"resourceName"
#define XNSeparatorofNestedList	"separatorofNestedList"
#define XNSpotLocation	"spotLocation"
#define XNStatusAttributes	"statusAttributes"
#define XNStatusDoneCallback	"statusDoneCallback"
#define XNStatusDrawCallback	"statusDrawCallback"
#define XNStatusStartCallback	"statusStartCallback"
#define XNStdColormap	"stdColorMap"
#define XNStringConversion	"stringConversion"
#define XNStringConversionCallback	"stringConversionCallback"
#define XNVisiblePosition	"visiblePosition"
#define XNVaNestedList	"XNVaNestedList"
#define ScreenOfDisplay(dpy,scr)	(&((_XPrivDisplay)dpy)->screens[scr]))
#define BitmapBitOrder(dpy)	(((_XPrivDisplay)dpy)->bitmap_bit_order)
#define BitmapPad(dpy)	(((_XPrivDisplay)dpy)->bitmap_pad)
#define BitmapUnit(dpy)	(((_XPrivDisplay)dpy)->bitmap_unit)
#define ImageByteOrder(dpy)	(((_XPrivDisplay)dpy)->byte_order)
#define DefaultScreen(dpy)	(((_XPrivDisplay)dpy)->default_screen)
#define DisplayString(dpy)	(((_XPrivDisplay)dpy)->display_name)
#define ConnectionNumber(dpy)	(((_XPrivDisplay)dpy)->fd)
#define LastKnownRequestProcessed(dpy)	(((_XPrivDisplay)dpy)->last_request_read)
#define ScreenCount(dpy)	(((_XPrivDisplay)dpy)->nscreens)
#define ProtocolVersion(dpy)	(((_XPrivDisplay)dpy)->proto_major_version)
#define ProtocolRevision(dpy)	(((_XPrivDisplay)dpy)->proto_minor_version)
#define QLength(dpy)	(((_XPrivDisplay)dpy)->qlen)
#define VendorRelease(dpy)	(((_XPrivDisplay)dpy)->release)
#define NextRequest(dpy)	(((_XPrivDisplay)dpy)->request+1)
#define ServerVendor(dpy)	(((_XPrivDisplay)dpy)->vendor)
#define XAllocID(dpy)	((*((_XPrivDisplay)dpy)->resource_alloc)((dpy)))
#define DoesBackingStore(s)	((s)->backing_store)
#define BlackPixelOfScreen(s)	((s)->black_pixel)
#define DefaultColormapOfScreen(s)	((s)->cmap))
#define DefaultGCOfScreen(s)	((s)->default_gc)
#define DisplayOfScreen(s)	((s)->display)
#define HeightOfScreen(s)	((s)->height)
#define MaxCmapsOfScreen(s)	((s)->max_maps)
#define HeightMMOfScreen(s)	((s)->mheight)
#define MinCmapsOfScreen(s)	((s)->min_maps)
#define WidthMMOfScreen(s)	((s)->mwidth)
#define RootWindowOfScreen(s)	((s)->root)
#define DefaultDepthOfScreen(s)	((s)->root_depth)
#define PlanesOfScreen(s)	((s)->root_depth)
#define EventMaskOfScreen(s)	((s)->root_input_mask)
#define DefaultVisualOfScreen(s)	((s)->root_visual))
#define DoesSaveUnders(s)	((s)->save_unders)
#define WhitePixelOfScreen(s)	((s)->white_pixel)
#define WidthOfScreen(s)	((s)->width)
#define AllPlanes	((unsigned long)~0L)
#define XIMStringConversionLeftEdge	(0x00000001)
#define XIMStringConversionRightEdge	(0x00000002)
#define XIMStringConversionTopEdge	(0x00000004)
#define XIMStringConversionBottomEdge	(0x00000008)
#define XIMStringConversionConcealed	(0x00000010)
#define XIMStringConversionWrapped	(0x00000020)
#define XIMStringConversionBuffer	(0x0001)
#define XIMStringConversionSubstitution	(0x0001)
#define XIMHotKeyStateON	(0x0001L)
#define XIMStringConversionLine	(0x0002)
#define XIMStringConversionRetrieval	(0x0002)
#define XIMHotKeyStateOFF	(0x0002L)
#define XIMStringConversionWord	(0x0003)
#define XIMStringConversionChar	(0x0004)
#define XIMPreeditDisable	(1L<<1)
#define XIMPreserveState	(1L<<1)
#define XIMUnderline	(1L<<1)
#define XIMVisibleToCenter	(1L<<10)
#define XIMHighlight	(1L<<2)
#define XIMPrimary	(1L<<5)
#define XIMSecondary	(1L<<6)
#define XIMTertiary	(1L<<7)
#define XIMVisibleToForward	(1L<<8)
#define XIMVisibleToBackword	(1L<<9)
#define DisplayCells(dpy,scr)	(DefaultVisual(dpy,scr)->map_entries))
#define CellsOfScreen(s)	(DefaultVisualOfScreen((s))->map_entries)
#define DefaultRootWindow(dpy)	(ScreenOfDisplay(dpy,DefaultScreen(dpy))->root)
#define BlackPixel(dpy,scr)	(ScreenOfDisplay(dpy,scr)->black_pixel))
#define DefaultColormap(dpy,scr)	(ScreenOfDisplay(dpy,scr)->cmap))
#define DefaultGC(dpy,scr)	(ScreenOfDisplay(dpy,scr)->default_gc))
#define DisplayHeight(dpy,scr)	(ScreenOfDisplay(dpy,scr)->height))
#define DisplayHeightMM(dpy,scr)	(ScreenOfDisplay(dpy,scr)->mheight))
#define DisplayWidthMM(dpy,scr)	(ScreenOfDisplay(dpy,scr)->mwidth))
#define RootWindow(dpy, scr)	(ScreenOfDisplay(dpy,scr)->root))
#define DefaultDepth(dpy,scr)	(ScreenOfDisplay(dpy,scr)->root_depth))
#define DisplayPlanes(dpy,scr)	(ScreenOfDisplay(dpy,scr)->root_depth))
#define DefaultVisual(dpy,scr)	(ScreenOfDisplay(dpy,scr)->root_visual))
#define WhitePixel(dpy,scr)	(ScreenOfDisplay(dpy,scr)->white_pixel))
#define DisplayWidth(dpy,scr)	(ScreenOfDisplay(dpy,scr)->width))
#define XBufferOverflow	-1
#define False	0
#define QueuedAlready	0
#define XIMPreeditUnKnown	0L
#define XIMPreeditArea	0x0001L
#define XIMPreeditCallbacks	0x0002L
#define XIMPreeditPosition	0x0004L
#define XIMPreeditNothing	0x0008L
#define XIMPreeditNone	0x0010L
#define XIMStatusArea	0x0100L
#define XIMStatusCallbacks	0x0200L
#define XIMStatusNothing	0x0400L
#define XIMStatusNone	0x0800L
#define QueuedAfterReading	1
#define True	1
#define XLookupNone	1
#define X_HAVE_UTF8_STRING	1
#define XIMInitialState	1L
#define XIMPreeditEnable	1L
#define XIMReverse	1L
#define QueuedAfterFlush	2
#define XLookupChars	2
#define XLookupKeySym	3
#define XLookupBoth	4
#define XlibSpecificationRelease	6
#define DefaultScreenOfDisplay(dpy)	ScreenOfDisplay(dpy,DefaultScreen(dpy))
#endif				/* __LSB_VERSION__ >= 1.2 */




/* Extensions need a way to hang private data on some structures.*/
#if __LSB_VERSION__ >= 12
    typedef struct _XExtData XExtData;

    typedef struct {
	int extension;
	int major_opcode;
	int first_event;
	int first_error;
    } XExtCodes;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XExtData {
	int number;
	struct _XExtData *next;
	int (*free_private) (struct _XExtData * extension);
	XPointer private_data;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structure for retrieving info about pixmap formats.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	int depth;
	int bits_per_pixel;
	int scanline_pad;
    } XPixmapFormatValues;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structure for setting graphics context*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	int function;
	unsigned long int plane_mask;
	unsigned long int foreground;
	unsigned long int background;
	int line_width;
	int line_style;
	int cap_style;
	int join_style;
	int fill_style;
	int fill_rule;
	int arc_mode;
	Pixmap tile;
	Pixmap stipple;
	int ts_x_origin;
	int ts_y_origin;
	Font font;
	int subwindow_mode;
	int graphics_exposures;
	int clip_x_origin;
	int clip_y_origin;
	Pixmap clip_mask;
	int dash_offset;
	char dashes;
    } XGCValues;

#endif				/* __LSB_VERSION__ >= 1.2 */


/*  Graphics context.  The contents of this structure are implementation dependent.  A GC should be treated as opaque by application code.*/
#if __LSB_VERSION__ >= 12
    typedef struct _XGC *GC;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XGC;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Visual structure; contains information about colormapping possible.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	XExtData *ext_data;
	VisualID visualid;
	int c_class;
	unsigned long int red_mask;
	unsigned long int green_mask;
	unsigned long int blue_mask;
	int bits_per_rgb;
	int map_entries;
    } Visual;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Depth structure; contains information for each possible depth.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	int depth;
	int nvisuals;
	Visual *visuals;
    } Depth;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Information about the screen.  The contents of this structure are implementation dependent.  A Screen should be treated as opaque by application code.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	XExtData *ext_data;
	struct _XDisplay *display;
	Window root;
	int width;
	int height;
	int mwidth;
	int mheight;
	int ndepths;
	Depth *depths;
	int root_depth;
	Visual *root_visual;
	GC default_gc;
	Colormap cmap;
	unsigned long int white_pixel;
	unsigned long int black_pixel;
	int max_maps;
	int min_maps;
	int backing_store;
	int save_unders;
	long int root_input_mask;
    } Screen;

#endif				/* __LSB_VERSION__ >= 1.2 */


/*  Format structure; describes ZFormat data the screen will understand.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	XExtData *ext_data;
	int depth;
	int bits_per_pixel;
	int scanline_pad;
    } ScreenFormat;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structure for setting window attributes.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	Pixmap background_pixmap;
	unsigned long int background_pixel;
	Pixmap border_pixmap;
	unsigned long int border_pixel;
	int bit_gravity;
	int win_gravity;
	int backing_store;
	unsigned long int backing_planes;
	unsigned long int backing_pixel;
	int save_under;
	long int event_mask;
	long int do_not_propagate_mask;
	int override_redirect;
	Colormap colormap;
	Cursor cursor;
    } XSetWindowAttributes;

    typedef struct {
	int x;
	int y;
	int width;
	int height;
	int border_width;
	int depth;
	Visual *visual;
	Window root;
	int c_class;
	int bit_gravity;
	int win_gravity;
	int backing_store;
	unsigned long int backing_planes;
	unsigned long int backing_pixel;
	int save_under;
	Colormap colormap;
	int map_installed;
	int map_state;
	long int all_event_masks;
	long int your_event_mask;
	long int do_not_propagate_mask;
	int override_redirect;
	Screen *screen;
    } XWindowAttributes;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structure for host setting; getting routines.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	int family;
	int length;
	char *address;
    } XHostAddress;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structure for */
#if __LSB_VERSION__ >= 12
    typedef struct _XImage XImage;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct funcs {
	struct _XImage *(*create_image) (void);
	int (*destroy_image) (void);
	unsigned long int (*get_pixel) (void);
	int (*put_pixel) (void);
	struct _XImage *(*sub_image) (void);
	int (*add_pixel) (void);
    };

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

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structure for XReconfigureWindow*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	int x;
	int y;
	int width;
	int height;
	int border_width;
	Window sibling;
	int stack_mode;
    } XWindowChanges;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structures for graphics operations.  On most machines, these are congruent with the wire protocol structures, so reformatting the datacan be avoided on these architectures. */
#if __LSB_VERSION__ >= 12
    typedef struct {
	short x1;
	short y1;
	short x2;
	short y2;
    } XSegment;

    typedef struct {
	short x;
	short y;
    } XPoint;

    typedef struct {
	short x;
	short y;
	unsigned short width;
	unsigned short height;
    } XRectangle;

    typedef struct {
	short x;
	short y;
	unsigned short width;
	unsigned short height;
	short angle1;
	short angle2;
    } XArc;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structure for XChangeKeyboardControl*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	int key_click_percent;
	int bell_percent;
	int bell_pitch;
	int bell_duration;
	int led;
	int led_mode;
	int key;
	int auto_repeat_mode;
    } XKeyboardControl;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structure for XGetKeyboardControl*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	int key_click_percent;
	int bell_percent;
	unsigned int bell_pitch;
	unsigned int bell_duration;
	unsigned long int led_mask;
	int global_auto_repeat;
	char auto_repeats[32];
    } XKeyboardState;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structure for XGetMotionEvents.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	Time time;
	short x;
	short y;
    } XTimeCoord;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data structure for X{Set,Get}ModifierMapping*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	int max_keypermod;
	KeyCode *modifiermap;
    } XModifierKeymap;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Display datatype maintaining display specific data. The contents of this structure are implementation dependent.A Display should be treated as opaque by application code. */
#if __LSB_VERSION__ >= 12
    typedef struct {
	XExtData *ext_data;
	struct _XPrivate *private1;
	int fd;
	int private2;
	int proto_major_version;
	int proto_minor_version;
	char *vendor;
	XID private3;
	XID private4;
	XID private5;
	int private6;
	 XID(*resource_alloc) (struct _XDisplay *);
	int byte_order;
	int bitmap_unit;
	int bitmap_pad;
	int bitmap_bit_order;
	int nformats;
	ScreenFormat *pixmap_format;
	int private8;
	int release;
	struct _XPrivate *private9;
	struct _XPrivate *private10;
	int qlen;
	unsigned long int last_request_read;
	unsigned long int request;
	XPointer private11;
	XPointer private12;
	XPointer private13;
	XPointer private14;
	unsigned int max_request_size;
	struct _XrmHashBucketRec *db;
	int (*private15) (struct _XDisplay *);
	char *display_name;
	int default_screen;
	int nscreens;
	Screen *screens;
	unsigned long int motion_buffer;
	unsigned long int private16;
	int min_keycode;
	int max_keycode;
	XPointer private17;
	XPointer private18;
	int private19;
	char *xdefaults;
    } *_XPrivDisplay;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Definitions of specific events.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	Window root;
	Window subwindow;
	Time time;
	int x;
	int y;
	int x_root;
	int y_root;
	unsigned int state;
	unsigned int keycode;
	int same_screen;
    } XKeyEvent;

    typedef XKeyEvent XKeyPressedEvent;

    typedef XKeyEvent XKeyReleasedEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	Window root;
	Window subwindow;
	Time time;
	int x;
	int y;
	int x_root;
	int y_root;
	unsigned int state;
	unsigned int button;
	int same_screen;
    } XButtonEvent;

    typedef XButtonEvent XButtonPressedEvent;

    typedef XButtonEvent XButtonReleasedEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	Window root;
	Window subwindow;
	Time time;
	int x;
	int y;
	int x_root;
	int y_root;
	unsigned int state;
	char is_hint;
	int same_screen;
    } XMotionEvent;

    typedef XMotionEvent XPointerMovedEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	Window root;
	Window subwindow;
	Time time;
	int x;
	int y;
	int x_root;
	int y_root;
	int mode;
	int detail;
	int same_screen;
	int focus;
	unsigned int state;
    } XCrossingEvent;

    typedef XCrossingEvent XEnterWindowEvent;

    typedef XCrossingEvent XLeaveWindowEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	int mode;
	int detail;
    } XFocusChangeEvent;

    typedef XFocusChangeEvent XFocusInEvent;

    typedef XFocusChangeEvent XFocusOutEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	char key_vector[32];
    } XKeymapEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	int x;
	int y;
	int width;
	int height;
	int count;
    } XExposeEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Drawable drawable;
	int x;
	int y;
	int width;
	int height;
	int count;
	int major_code;
	int minor_code;
    } XGraphicsExposeEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Drawable drawable;
	int major_code;
	int minor_code;
    } XNoExposeEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	int state;
    } XVisibilityEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window parent;
	Window window;
	int x;
	int y;
	int width;
	int height;
	int border_width;
	int override_redirect;
    } XCreateWindowEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window event;
	Window window;
    } XDestroyWindowEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window event;
	Window window;
	int from_configure;
    } XUnmapEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window event;
	Window window;
	int override_redirect;
    } XMapEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window parent;
	Window window;
    } XMapRequestEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window event;
	Window window;
	Window parent;
	int x;
	int y;
	int override_redirect;
    } XReparentEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window event;
	Window window;
	int x;
	int y;
	int width;
	int height;
	int border_width;
	Window above;
	int override_redirect;
    } XConfigureEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window event;
	Window window;
	int x;
	int y;
    } XGravityEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	int width;
	int height;
    } XResizeRequestEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window parent;
	Window window;
	int x;
	int y;
	int width;
	int height;
	int border_width;
	Window above;
	int detail;
	unsigned long int value_mask;
    } XConfigureRequestEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window event;
	Window window;
	int place;
    } XCirculateEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window parent;
	Window window;
	int place;
    } XCirculateRequestEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	Atom atom;
	Time time;
	int state;
    } XPropertyEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	Atom selection;
	Time time;
    } XSelectionClearEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window owner;
	Window requestor;
	Atom selection;
	Atom target;
	Atom property;
	Time time;
    } XSelectionRequestEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window requestor;
	Atom selection;
	Atom target;
	Atom property;
	Time time;
    } XSelectionEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	Colormap colormap;
	int c_new;
	int state;
    } XColormapEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	Atom message_type;
	int format;
	union {
	    char b[20];
	    short s[10];
	    long int l[5];
	} data;
    } XClientMessageEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	int request;
	int first_keycode;
	int count;
    } XMappingEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
    } XAnyEvent;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* this union is defined so Xlib can always use the same sized event structure internally, to avoid memory fragmentation.*/
#if __LSB_VERSION__ >= 12
    typedef union _XEvent XEvent;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
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

#endif				/* __LSB_VERSION__ >= 1.2 */


/* per character font metric information.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	short lbearing;
	short rbearing;
	short width;
	short ascent;
	short descent;
	unsigned short attributes;
    } XCharStruct;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* To allow arbitrary information with fonts, there are additional properties returned.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	Atom name;
	unsigned long int card32;
    } XFontProp;

    typedef struct {
	XExtData *ext_data;
	Font fid;
	unsigned int direction;
	unsigned int min_char_or_byte2;
	unsigned int max_char_or_byte2;
	unsigned int min_byte1;
	unsigned int max_byte1;
	int all_chars_exist;
	unsigned int default_char;
	int n_properties;
	XFontProp *properties;
	XCharStruct min_bounds;
	XCharStruct max_bounds;
	XCharStruct *per_char;
	int ascent;
	int descent;
    } XFontStruct;

    typedef struct {
	XRectangle max_ink_extent;
	XRectangle max_logical_extent;
    } XFontSetExtents;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* PolyText routines take these as arguments.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	char *chars;
	int nchars;
	int delta;
	Font font;
    } XTextItem;

    typedef struct {
	unsigned char byte1;
	unsigned char byte2;
    } XChar2b;

    typedef struct {
	XChar2b *chars;
	int nchars;
	int delta;
	Font font;
    } XTextItem16;

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef union {
	Display *display;
	GC gc;
	Visual *visual;
	Screen *screen;
	ScreenFormat *pixmap_format;
	XFontStruct *font;
    } XEDataObject;

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef struct _XOM *XOM;

    typedef struct _XOC *XOC;

    typedef struct _XOC *XFontSet;

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef struct {
	char *chars;
	int nchars;
	int delta;
	XFontSet font_set;
    } XmbTextItem;

    typedef struct {
	wchar_t *chars;
	int nchars;
	int delta;
	XFontSet font_set;
    } XwcTextItem;

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef struct {
	int charset_count;
	char **charset_list;
    } XOMCharSetList;

    typedef enum {
	XOMOrientation_LTR_TTB = 0,
	XOMOrientation_RTL_TTB = 1,
	XOMOrientation_TTB_LTR = 2,
	XOMOrientation_TTB_RTL = 3,
	XOMOrientation_Context = 4
    } XOrientation;

    typedef struct {
	int num_font;
	XFontStruct **font_struct_list;
	char **font_name_list;
    } XOMFontInfo;

    typedef struct {
	int num_orientation;
	XOrientation *orientation;
    } XOMOrientation;

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef unsigned long int XIMStyle;

    typedef struct {
	unsigned short count_styles;
	XIMStyle *supported_styles;
    } XIMStyles;

    typedef struct {
	XPointer client_data;
	XIMProc callback;
    } XIMCallback;

    typedef struct {
	XPointer client_data;
	XICProc callback;
    } XICCallback;

    typedef void (*XIDProc) (Display *, XPointer, XPointer);

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

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
    extern int XCheckIfEvent(Display *, XEvent *,
			     int (*)(Display *, XEvent *, XPointer)
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
    extern int XIfEvent(Display *, XEvent *,
			int (*)(Display *, XEvent *, XPointer)
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
    extern int XPeekIfEvent(Display *, XEvent *,
			    int (*)(Display *, XEvent *, XPointer)
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
    extern int XQueryKeymap(Display *, char[]);
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
    extern int (*XSetAfterFunction(Display *, int (*)(Display *)
		)) (Display *);
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
    extern char *XSetIMValues(XIM, ...);
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
    extern int (*XSynchronize(Display *, int)) (Display *);
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
#if __LSB_VERSION__ >= 12
    extern
	void (*XESetBeforeFlush
	      (Display *, int,
	       void (*)(Display *, XExtCodes *, const char *, long int)
	      )) (Display *, XExtCodes *, const char *, long int);
    extern
	int (*XESetCloseDisplay
	     (Display *, int, int (*)(Display *, XExtCodes *)
	     )) (Display *, XExtCodes *);
    extern
	int (*XESetCopyGC
	     (Display *, int, int (*)(Display *, GC, XExtCodes *)
	     )) (Display *, GC, XExtCodes *);
    extern
	int (*XESetCreateFont
	     (Display *, int,
	      int (*)(Display *, XFontStruct *, XExtCodes *)
	     )) (Display *, XFontStruct *, XExtCodes *);
    extern
	int (*XESetCreateGC
	     (Display *, int, int (*)(Display *, GC, XExtCodes *)
	     )) (Display *, GC, XExtCodes *);
    extern
	int (*XESetError
	     (Display *, int,
	      int (*)(Display *, xError *, XExtCodes *, int *)
	     )) (Display *, xError *, XExtCodes *, int *);
    extern char
	*(*XESetErrorString
	  (Display *, int,
	   char *(*)(Display *, int, XExtCodes *, char *, int)
	  )) (Display *, int, XExtCodes *, char *, int);
    extern
	int (*XESetEventToWire
	     (Display *, int, int (*)(Display *, XEvent *, xEvent *)
	     )) (Display *, XEvent *, xEvent *);
    extern
	int (*XESetFlushGC
	     (Display *, int, int (*)(Display *, GC, XExtCodes *)
	     )) (Display *, GC, XExtCodes *);
    extern
	int (*XESetFreeFont
	     (Display *, int,
	      int (*)(Display *, XFontStruct *, XExtCodes *)
	     )) (Display *, XFontStruct *, XExtCodes *);
    extern
	int (*XESetFreeGC
	     (Display *, int, int (*)(Display *, GC, XExtCodes *)
	     )) (Display *, GC, XExtCodes *);
    extern
	void (*XESetPrintErrorValues
	      (Display *, int, void (*)(Display *, XErrorEvent *, void *)
	      )) (Display *, XErrorEvent *, void *);
    extern
	int (*XESetWireToError
	     (Display *, int, int (*)(Display *, XErrorEvent *, xError *)
	     )) (Display *, XErrorEvent *, xError *);
    extern
	int (*XESetWireToEvent
	     (Display *, int, int (*)(Display *, XEvent *, xEvent *)
	     )) (Display *, XEvent *, xEvent *);
#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
