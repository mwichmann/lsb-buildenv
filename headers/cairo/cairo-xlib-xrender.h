#if (__LSB_VERSION__ >= 40 )
#ifndef _CAIRO_CAIRO_XLIB_XRENDER_H_
#define _CAIRO_CAIRO_XLIB_XRENDER_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/Xrender.h>
#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern cairo_surface_t
	*cairo_xlib_surface_create_with_xrender_format(Display *, Drawable,
						       Screen *,
						       XRenderPictFormat *,
						       int, int);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
