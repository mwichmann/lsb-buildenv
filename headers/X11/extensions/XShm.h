#ifndef _X11_EXTENSIONS_XSHM_H_
#define _X11_EXTENSIONS_XSHM_H_

#include <X11/X.h>
#include <X11/Xlib.h>




int XShmAttach (Display *, XShmSegmentInfo *);
XImage *XShmCreateImage (Display *, Visual *, unsigned int, int, char *,
			 XShmSegmentInfo *, unsigned int, unsigned int);
Pixmap XShmCreatePixmap (Display *, Drawable, char *, XShmSegmentInfo *,
			 unsigned int, unsigned int, unsigned int);
int XShmDetach (Display *, XShmSegmentInfo *);
int XShmGetEventBase (Display *);
int XShmGetImage (Display *, Drawable, XImage *, int, int, unsigned long);
int XShmPixmapFormat (Display *);
int XShmPutImage (Display *, Drawable, GC, XImage *, int, int, int, int,
		  unsigned int, unsigned int, int);
int XShmQueryExtension (Display *);
int XShmQueryVersion (Display *, int *, int *, int *);
#endif
