#ifndef _X11_EXTENSIONS_XDBE_H_
#define _X11_EXTENSIONS_XDBE_H_

#include <X11/X.h>
#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern XdbeBackBuffer XdbeAllocateBackBufferName (Display *, Window,
						    XdbeSwapAction);
  extern int XdbeBeginIdiom (Display *);
  extern int XdbeDeallocateBackBufferName (Display *, XdbeBackBuffer);
  extern int XdbeEndIdiom (Display *);
  extern void XdbeFreeVisualInfo (*);
  extern XdbeBackBufferAttributes *XdbeGetBackBufferAttributes (Display *,
								XdbeBackBuffer);
  extern *XdbeGetVisualInfo (Display *, Drawable *, int *);
  extern int XdbeQueryExtension (Display *, int *, int *);
  extern int XdbeSwapBuffers (Display *, XdbeSwapInfo *, int);
#ifdef __cplusplus
}
#endif
#endif
