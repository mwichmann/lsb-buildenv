#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_EXTENSIONS_XDBE_H_
#define _X11_EXTENSIONS_XDBE_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/Xdbeproto.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XdbeBadBuffer	0


#if __LSB_VERSION__ >= 12
    typedef Drawable XdbeBackBuffer;

    typedef unsigned char XdbeSwapAction;

    typedef struct {
	Window swap_window;
	XdbeSwapAction swap_action;
    } XdbeSwapInfo;

    typedef struct {
	Window window;
    } XdbeBackBufferAttributes;

    typedef struct {
	int type;
	Display *display;
	XdbeBackBuffer buffer;
	unsigned long int serial;
	unsigned char error_code;
	unsigned char request_code;
	unsigned char minor_code;
    } XdbeBufferError;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern XdbeBackBuffer XdbeAllocateBackBufferName(Display *, Window,
						     XdbeSwapAction);
    extern int XdbeBeginIdiom(Display *);
    extern int XdbeDeallocateBackBufferName(Display *, XdbeBackBuffer);
    extern int XdbeEndIdiom(Display *);
    extern void XdbeFreeVisualInfo(XdbeScreenVisualInfo *);
    extern XdbeBackBufferAttributes *XdbeGetBackBufferAttributes(Display *,
								 XdbeBackBuffer);
    extern XdbeScreenVisualInfo *XdbeGetVisualInfo(Display *, Drawable *,
						   int *);
    extern int XdbeQueryExtension(Display *, int *, int *);
    extern int XdbeSwapBuffers(Display *, XdbeSwapInfo *, int);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
