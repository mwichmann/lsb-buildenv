typedef struct
{
  int x;
  int y;
  struct max_aspect;
  int base_width;
  int base_height;
  int win_gravity;
}
XSizeHints;

typedef struct
{
  long flags;
  int input;
  int initial_state;
  Pixmap icon_pixmap;
  Window icon_window;
  int icon_x;
  int icon_y;
  Pixmap icon_mask;
  XID window_group;
}
XWMHints;

typedef struct
{
  unsigned char *value;
  Atom encoding;
  int format;
  unsigned long nitems;
}
XTextProperty;

typedef struct
{
  int min_width;
  int min_height;
  int max_width;
  int max_height;
  int width_inc;
  int height_inc;
}
XIconSize;

typedef struct
{
  char *res_name;
  char *res_class;
}
XClassHint;

typedef struct _XComposeStatus
{
  XPointer compose_ptr;
  int chars_matched;
}
XComposeStatus;

typedef struct _XRegion *Region;

typedef struct
{
  Visual *visual;
  VisualID visualid;
  int screen;
  int depth;
  int class;
  unsigned long red_mask;
  unsigned long green_mask;
  unsigned long blue_mask;
  int colormap_size;
  int bits_per_rgb;
}
XVisualInfo;

typedef struct
{
  Colormap colormap;
  unsigned long red_max;
  unsigned long red_mult;
  unsigned long green_max;
  unsigned long green_mult;
  unsigned long blue_max;
  unsigned long blue_mult;
  unsigned long base_pixel;
  VisualID visualid;
  XID killid;
}
XStandardColormap;

typedef int XContext;

typedef enum
{
  XStringStyle,
  XCompoundTextStyle,
  XTextStyle,
  XStdICCTextStyle,
  XUTF8StringStyle
}
XICCEncodingStyle;

XClassHint *XAllocClassHint (void);
XIconSize *XAllocIconSize (void);
XSizeHints *XAllocSizeHints (void);
XStandardColormap *XAllocStandardColormap (void);
XWMHints *XAllocWMHints (void);
int XClipBox (Region, XRectangle *);
void XConvertCase (KeySym, KeySym *, KeySym *);
Region XCreateRegion (void);
char *XDefaultString (void);
int XDeleteContext (Display *, XID, XContext);
int XDestroyRegion (Region);
int XEmptyRegion (Region);
int XEqualRegion (Region, Region);
int XFindContext (Display *, XID, XContext, XPointer *);
int XGetClassHint (Display *, Window, XClassHint *);
int XGetIconSizes (Display *, Window, XIconSize * *, int *);
int XGetNormalHints (Display *, Window, XSizeHints *);
int XGetRGBColormaps (Display *, Window, XStandardColormap * *, int *, Atom);
int XGetSizeHints (Display *, Window, XSizeHints *, Atom);
int XGetStandardColormap (Display *, Window, XStandardColormap *, Atom);
int XGetTextProperty (Display *, Window, XTextProperty *, Atom);
XVisualInfo *XGetVisualInfo (Display *, long, XVisualInfo *, int *);
int XGetWMClientMachine (Display *, Window, XTextProperty *);
XWMHints *XGetWMHints (Display *, Window);
int XGetWMIconName (Display *, Window, XTextProperty *);
int XGetWMName (Display *, Window, XTextProperty *);
int XGetWMNormalHints (Display *, Window, XSizeHints *, long *);
int XGetWMSizeHints (Display *, Window, XSizeHints *, long *, Atom);
int XGetZoomHints (Display *, Window, XSizeHints *);
int XIntersectRegion (Region, Region, Region);
int XLookupString (XKeyEvent *, char *, int, KeySym *, XComposeStatus *);
int XMatchVisualInfo (Display *, int, int, int, XVisualInfo *);
int XOffsetRegion (Region, int, int);
int XPointInRegion (Region, int, int);
Region XPolygonRegion (XPoint *, int, int);
int XRectInRegion (Region, int, int, unsigned int, unsigned int);
int XSaveContext (Display *, XID, XContext, char *);
int XSetClassHint (Display *, Window, XClassHint *);
int XSetIconSizes (Display *, Window, XIconSize *, int);
int XSetNormalHints (Display *, Window, XSizeHints *);
void XSetRGBColormaps (Display *, Window, XStandardColormap *, int, Atom);
int XSetRegion (Display *, GC, Region);
int XSetSizeHints (Display *, Window, XSizeHints *, Atom);
void XSetStandardColormap (Display *, Window, XStandardColormap *, Atom);
int XSetStandardProperties (Display *, Window, char *, char *, Pixmap,
			    char **, int, XSizeHints *);
void XSetTextProperty (Display *, Window, XTextProperty *, Atom);
void XSetWMClientMachine (Display *, Window, XTextProperty *);
int XSetWMHints (Display *, Window, XWMHints *);
void XSetWMIconName (Display *, Window, XTextProperty *);
void XSetWMName (Display *, Window, XTextProperty *);
void XSetWMNormalHints (Display *, Window, XSizeHints *);
void XSetWMProperties (Display *, Window, XTextProperty *, XTextProperty *,
		       char **, int, XSizeHints *, XWMHints *, XClassHint *);
void XSetWMSizeHints (Display *, Window, XSizeHints *, Atom);
int XSetZoomHints (Display *, Window, XSizeHints *);
int XShrinkRegion (Region, int, int);
int XStringListToTextProperty (char **, int, XTextProperty *);
int XSubtractRegion (Region, Region, Region);
int XTextPropertyToStringList (XTextProperty *, char ***, int *);
int XUnionRectWithRegion (XRectangle *, Region, Region);
int XUnionRegion (Region, Region, Region);
int XWMGeometry (Display *, int, char *, char *, unsigned int, XSizeHints *,
		 int *, int *, int *, int *, int *);
int XXorRegion (Region, Region, Region);
void XmbSetWMProperties (Display *, Window, char *, char *, char **, int,
			 XSizeHints *, XWMHints *, XClassHint *);
int XmbTextListToTextProperty (Display *, char **, int, XICCEncodingStyle,
			       XTextProperty *);
int XmbTextPropertyToTextList (Display *, XTextProperty *, char ***, int *);
void XwcFreeStringList (wchar_t * *);
int XwcTextListToTextProperty (Display *, wchar_t * *, int, XICCEncodingStyle,
			       XTextProperty *);
int XwcTextPropertyToTextList (Display *, XTextProperty *, wchar_t * **,
			       int *);
