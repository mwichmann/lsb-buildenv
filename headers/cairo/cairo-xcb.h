#if (__LSB_VERSION__ >= 50 )
#ifndef _CAIRO_CAIRO_XCB_H_
#define _CAIRO_CAIRO_XCB_H_

#include <stdint.h>
#include <cairo/cairo.h>
#include <xcb/xcb.h>
#include <xcb/xproto.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern xcb_connection_t *cairo_xcb_device_get_connection(cairo_device_t
							     * device);
    extern cairo_surface_t *cairo_xcb_surface_create(xcb_connection_t *
						     connection,
						     xcb_drawable_t
						     drawable,
						     xcb_visualtype_t *
						     visual, int width,
						     int height);
    extern cairo_surface_t
	*cairo_xcb_surface_create_for_bitmap(xcb_connection_t * connection,
					     xcb_screen_t * screen,
					     xcb_pixmap_t bitmap,
					     int width, int height);
    extern void cairo_xcb_surface_set_drawable(cairo_surface_t * surface,
					       xcb_drawable_t drawable,
					       int width, int height);
    extern void cairo_xcb_surface_set_size(cairo_surface_t * surface,
					   int width, int height);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
