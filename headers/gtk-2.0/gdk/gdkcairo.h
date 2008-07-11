#if (__LSB_VERSION__ >= 40 )
#ifndef _GTK_2_0_GDK_GDKCAIRO_H_
#define _GTK_2_0_GDK_GDKCAIRO_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <gtk-2.0/gdk/gdk.h>
#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern cairo_t *gdk_cairo_create(GdkDrawable *);
    extern void gdk_cairo_rectangle(cairo_t *, GdkRectangle *);
    extern void gdk_cairo_region(cairo_t *, GdkRegion *);
    extern void gdk_cairo_set_source_color(cairo_t *, GdkColor *);
    extern void gdk_cairo_set_source_pixbuf(cairo_t *, GdkPixbuf *, double,
					    double);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
