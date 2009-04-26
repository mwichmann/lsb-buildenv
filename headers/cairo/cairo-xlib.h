#if (__LSB_VERSION__ >= 40 )
#ifndef _CAIRO_CAIRO_XLIB_H_
#define _CAIRO_CAIRO_XLIB_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern cairo_surface_t *cairo_xlib_surface_create(Display * dpy,
						      Drawable drawable,
						      Visual * visual,
						      int width,
						      int height);
    extern cairo_surface_t *cairo_xlib_surface_create_for_bitmap(Display *
								 dpy,
								 Pixmap
								 bitmap,
								 Screen *
								 screen,
								 int width,
								 int
								 height);
    extern void cairo_xlib_surface_set_drawable(cairo_surface_t * surface,
						Drawable drawable,
						int width, int height);
    extern void cairo_xlib_surface_set_size(cairo_surface_t * surface,
					    int width, int height);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
