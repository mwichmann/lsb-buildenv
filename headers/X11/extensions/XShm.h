#ifndef _X11_EXTENSIONS_XSHM_H_
#define _X11_EXTENSIONS_XSHM_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern int XShmAttach (Display *, XShmSegmentInfo *);
  extern XImage *XShmCreateImage (Display *, Visual *, unsigned int, int,
				  char *, XShmSegmentInfo *, unsigned int,
				  unsigned int);
  extern Pixmap XShmCreatePixmap (Display *, Drawable, char *,
				  XShmSegmentInfo *, unsigned int,
				  unsigned int, unsigned int);
  extern int XShmDetach (Display *, XShmSegmentInfo *);
  extern int XShmGetEventBase (Display *);
  extern int XShmGetImage (Display *, Drawable, XImage *, int, int,
			   unsigned long);
  extern int XShmPixmapFormat (Display *);
  extern int XShmPutImage (Display *, Drawable, GC, XImage *, int, int, int,
			   int, unsigned int, unsigned int, int);
  extern int XShmQueryExtension (Display *);
  extern int XShmQueryVersion (Display *, int *, int *, int *);
#ifdef __cplusplus
}
#endif
#endif
