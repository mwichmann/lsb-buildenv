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
#if __LSB_VERSION__ >= 41
    extern int cairo_xlib_surface_get_depth(cairo_surface_t * surface);
    extern Display *cairo_xlib_surface_get_display(cairo_surface_t *
						   surface);
    extern Drawable cairo_xlib_surface_get_drawable(cairo_surface_t *
						    surface);
    extern int cairo_xlib_surface_get_height(cairo_surface_t * surface);
    extern Screen *cairo_xlib_surface_get_screen(cairo_surface_t *
						 surface);
    extern Visual *cairo_xlib_surface_get_visual(cairo_surface_t *
						 surface);
    extern int cairo_xlib_surface_get_width(cairo_surface_t * surface);
#endif				/* __LSB_VERSION__ >= 4.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
