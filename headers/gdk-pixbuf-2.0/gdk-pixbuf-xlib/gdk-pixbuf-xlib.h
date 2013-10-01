#if (__LSB_VERSION__ >= 31 )
#ifndef _GDK_PIXBUF_2_0_GDK_PIXBUF_XLIB_GDK_PIXBUF_XLIB_H_
#define _GDK_PIXBUF_2_0_GDK_PIXBUF_XLIB_GDK_PIXBUF_XLIB_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#include <glib-2.0/glib.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	XLIB_RGB_DITHER_NONE = 0,
	XLIB_RGB_DITHER_NORMAL = 1,
	XLIB_RGB_DITHER_MAX = 2
    } XlibRgbDither;

    typedef struct _XlibRgbCmap XlibRgbCmap;

    struct _XlibRgbCmap {
	unsigned int colors[256];
	unsigned char lut[256];
    };


/* Function prototypes */

    extern GdkPixbuf *gdk_pixbuf_xlib_get_from_drawable(GdkPixbuf * dest,
							Drawable src,
							Colormap cmap,
							Visual * visual,
							int src_x,
							int src_y,
							int dest_x,
							int dest_y,
							int width,
							int height);
    extern void gdk_pixbuf_xlib_init(Display * display, int screen_num);
    extern void gdk_pixbuf_xlib_init_with_depth(Display * display,
						int screen_num,
						int prefDepth);
    extern void gdk_pixbuf_xlib_render_pixmap_and_mask(GdkPixbuf * pixbuf,
						       Pixmap *
						       pixmap_return,
						       Pixmap *
						       mask_return,
						       int
						       alpha_threshold);
    extern void gdk_pixbuf_xlib_render_threshold_alpha(GdkPixbuf * pixbuf,
						       Pixmap bitmap,
						       int src_x,
						       int src_y,
						       int dest_x,
						       int dest_y,
						       int width,
						       int height,
						       int
						       alpha_threshold);
    extern void gdk_pixbuf_xlib_render_to_drawable(GdkPixbuf * pixbuf,
						   Drawable drawable,
						   GC gc, int src_x,
						   int src_y, int dest_x,
						   int dest_y, int width,
						   int height,
						   XlibRgbDither dither,
						   int x_dither,
						   int y_dither);
    extern void gdk_pixbuf_xlib_render_to_drawable_alpha(GdkPixbuf *
							 pixbuf,
							 Drawable drawable,
							 int src_x,
							 int src_y,
							 int dest_x,
							 int dest_y,
							 int width,
							 int height,
							 GdkPixbufAlphaMode
							 alpha_mode,
							 int
							 alpha_threshold,
							 XlibRgbDither
							 dither,
							 int x_dither,
							 int y_dither);
    extern void xlib_draw_gray_image(Drawable drawable, GC gc, int x,
				     int y, int width, int height,
				     XlibRgbDither dith,
				     unsigned char *buf, int rowstride);
    extern void xlib_draw_indexed_image(Drawable drawable, GC gc, int x,
					int y, int width, int height,
					XlibRgbDither dith,
					unsigned char *buf, int rowstride,
					XlibRgbCmap * cmap);
    extern void xlib_draw_rgb_32_image(Drawable drawable, GC gc, int x,
				       int y, int width, int height,
				       XlibRgbDither dith,
				       unsigned char *buf, int rowstride);
    extern void xlib_draw_rgb_image(Drawable drawable, GC gc, int x, int y,
				    int width, int height,
				    XlibRgbDither dith,
				    unsigned char *rgb_buf, int rowstride);
    extern void xlib_draw_rgb_image_dithalign(Drawable drawable, GC gc,
					      int x, int y, int width,
					      int height,
					      XlibRgbDither dith,
					      unsigned char *rgb_buf,
					      int rowstride, int xdith,
					      int ydith);
    extern void xlib_rgb_cmap_free(XlibRgbCmap * cmap);
    extern XlibRgbCmap *xlib_rgb_cmap_new(guint32 * colors, int n_colors);
    extern int xlib_rgb_ditherable(void);
    extern void xlib_rgb_gc_set_background(GC gc, guint32 rgb);
    extern void xlib_rgb_gc_set_foreground(GC gc, guint32 rgb);
    extern Colormap xlib_rgb_get_cmap(void);
    extern int xlib_rgb_get_depth(void);
    extern Display *xlib_rgb_get_display(void);
    extern Screen *xlib_rgb_get_screen(void);
    extern Visual *xlib_rgb_get_visual(void);
    extern XVisualInfo *xlib_rgb_get_visual_info(void);
    extern void xlib_rgb_init(Display * display, Screen * screen);
    extern void xlib_rgb_init_with_depth(Display * display,
					 Screen * screen, int prefDepth);
    extern void xlib_rgb_set_install(int install);
    extern void xlib_rgb_set_min_colors(int min_colors);
    extern void xlib_rgb_set_verbose(int verbose);
    extern long unsigned int xlib_rgb_xpixel_from_rgb(guint32 rgb);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
