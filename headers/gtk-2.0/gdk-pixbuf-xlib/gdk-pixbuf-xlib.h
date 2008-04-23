#if (__LSB_VERSION__ >= 31 )
#ifndef _GTK_2_0_GDK_PIXBUF_XLIB_GDK_PIXBUF_XLIB_H_
#define _GTK_2_0_GDK_PIXBUF_XLIB_GDK_PIXBUF_XLIB_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef enum {
	XLIB_RGB_DITHER_NONE = 0,
	XLIB_RGB_DITHER_NORMAL = 1,
	XLIB_RGB_DITHER_MAX = 2
    } XlibRgbDither;

    typedef struct _XlibRgbCmap XlibRgbCmap;

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31

    struct _XlibRgbCmap {
	unsigned int colors[256];
	unsigned char lut[256];
    };

#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern GdkPixbuf *gdk_pixbuf_xlib_get_from_drawable(GdkPixbuf *,
							Drawable, Colormap,
							Visual *, int, int,
							int, int, int,
							int);
    extern void gdk_pixbuf_xlib_init(Display *, int);
    extern void gdk_pixbuf_xlib_init_with_depth(Display *, int, int);
    extern void gdk_pixbuf_xlib_render_pixmap_and_mask(GdkPixbuf *,
						       Pixmap *, Pixmap *,
						       int);
    extern void gdk_pixbuf_xlib_render_threshold_alpha(GdkPixbuf *, Pixmap,
						       int, int, int, int,
						       int, int, int);
    extern void gdk_pixbuf_xlib_render_to_drawable(GdkPixbuf *, Drawable,
						   GC, int, int, int, int,
						   int, int, XlibRgbDither,
						   int, int);
    extern void gdk_pixbuf_xlib_render_to_drawable_alpha(GdkPixbuf *,
							 Drawable, int,
							 int, int, int,
							 int, int,
							 GdkPixbufAlphaMode,
							 int,
							 XlibRgbDither,
							 int, int);
    extern void xlib_draw_gray_image(Drawable, GC, int, int, int, int,
				     XlibRgbDither, unsigned char *, int);
    extern void xlib_draw_indexed_image(Drawable, GC, int, int, int, int,
					XlibRgbDither, unsigned char *,
					int, XlibRgbCmap *);
    extern void xlib_draw_rgb_32_image(Drawable, GC, int, int, int, int,
				       XlibRgbDither, unsigned char *,
				       int);
    extern void xlib_draw_rgb_image(Drawable, GC, int, int, int, int,
				    XlibRgbDither, unsigned char *, int);
    extern void xlib_draw_rgb_image_dithalign(Drawable, GC, int, int, int,
					      int, XlibRgbDither,
					      unsigned char *, int, int,
					      int);
    extern void xlib_rgb_cmap_free(XlibRgbCmap *);
    extern XlibRgbCmap *xlib_rgb_cmap_new(guint32 *, int);
    extern int xlib_rgb_ditherable(void);
    extern void xlib_rgb_gc_set_background(GC, guint32);
    extern void xlib_rgb_gc_set_foreground(GC, guint32);
    extern Colormap xlib_rgb_get_cmap(void);
    extern int xlib_rgb_get_depth(void);
    extern Display *xlib_rgb_get_display(void);
    extern Screen *xlib_rgb_get_screen(void);
    extern Visual *xlib_rgb_get_visual(void);
    extern XVisualInfo *xlib_rgb_get_visual_info(void);
    extern void xlib_rgb_init(Display *, Screen *);
    extern void xlib_rgb_init_with_depth(Display *, Screen *, int);
    extern void xlib_rgb_set_install(int);
    extern void xlib_rgb_set_min_colors(int);
    extern void xlib_rgb_set_verbose(int);
    extern long unsigned int xlib_rgb_xpixel_from_rgb(guint32);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
