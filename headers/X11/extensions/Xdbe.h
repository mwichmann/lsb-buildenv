#ifndef _X11_EXTENSIONS_XDBE_H_
#define _X11_EXTENSIONS_XDBE_H_

#include <X11/X.h>
#include <X11/Xlib.h>




XdbeBackBuffer XdbeAllocateBackBufferName (Display *, Window, XdbeSwapAction);
int XdbeBeginIdiom (Display *);
int XdbeDeallocateBackBufferName (Display *, XdbeBackBuffer);
int XdbeEndIdiom (Display *);
void XdbeFreeVisualInfo (*);
XdbeBackBufferAttributes *XdbeGetBackBufferAttributes (Display *,
						       XdbeBackBuffer);
*XdbeGetVisualInfo (Display *, Drawable *, int *);
int XdbeQueryExtension (Display *, int *, int *);
int XdbeSwapBuffers (Display *, XdbeSwapInfo *, int);
#endif
