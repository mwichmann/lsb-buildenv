#if (__LSB_VERSION__ >= 31 )
#ifndef _PANGO_1_0_PANGO_PANGOXFT_H_
#define _PANGO_1_0_PANGO_PANGOXFT_H_

#include <X11/Xlib.h>
#include <fontconfig/fontconfig.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <pango-1.0/pango/pango.h>
#include <X11/extensions/render.h>
#include <X11/extensions/Xrender.h>
#include <freetype/fttypes.h>
#include <X11/Xft/Xft.h>

#ifdef __cplusplus
extern "C" {
#endif


#define PANGO_XFT_RENDERER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_XFT_RENDERER, \
	PangoXftRendererClass))
#define PANGO_IS_XFT_RENDERER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_XFT_RENDERER))
#define PANGO_XFT_FONT(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_XFT_FONT, \
	PangoXftFont))
#define PANGO_XFT_FONT_MAP(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_XFT_FONT_MAP, \
	PangoXftFontMap))
#define PANGO_XFT_RENDERER(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_XFT_RENDERER, \
	PangoXftRenderer))
#define PANGO_XFT_IS_FONT(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_XFT_FONT))
#define PANGO_XFT_IS_FONT_MAP(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_XFT_FONT_MAP))
#define PANGO_IS_XFT_RENDERER(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_XFT_RENDERER))
#define PANGO_XFT_RENDERER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_XFT_RENDERER, \
	PangoXftRendererClass))
#define PANGO_TYPE_XFT_FONT	(pango_xft_font_get_type ())
#define PANGO_TYPE_XFT_FONT_MAP	(pango_xft_font_map_get_type ())
#define PANGO_TYPE_XFT_RENDERER	(pango_xft_renderer_get_type())
#define PANGO_RENDER_TYPE_XFT	"PangoRenderXft"


    typedef struct _PangoXftRenderer PangoXftRenderer;

    typedef void (*PangoXftSubstituteFunc) (FcPattern *, gpointer);

    typedef struct _PangoXftFontMap PangoXftFontMap;

    typedef struct _PangoXftRendererClass PangoXftRendererClass;

    typedef struct _PangoFcFontClass PangoFcFontClass;

    typedef struct _PangoFcFont PangoFcFont;

    typedef struct _PangoXftFont PangoXftFont;

    typedef struct _PangoXftRendererPrivate PangoXftRendererPrivate;

    struct _PangoXftRendererClass {
	PangoRendererClass parent_class;
	void (*composite_trapezoids) (PangoXftRenderer *, PangoRenderPart,
				      XTrapezoid *, int);
	void (*composite_glyphs) (PangoXftRenderer *, XftFont *,
				  XftGlyphSpec *, int);
    };


/* Function prototypes */

    extern GType pango_xft_font_get_type(void);
    extern GType pango_xft_font_map_get_type(void);
    extern PangoContext *pango_xft_get_context(Display * display,
					       int screen);
    extern PangoFontMap *pango_xft_get_font_map(Display * display,
						int screen);
    extern void pango_xft_picture_render(Display * display,
					 Picture src_picture,
					 Picture dest_picture,
					 PangoFont * font,
					 PangoGlyphString * glyphs, gint x,
					 gint y);
    extern void pango_xft_render(XftDraw * draw, XftColor * color,
				 PangoFont * font,
				 PangoGlyphString * glyphs, gint x,
				 gint y);
    extern void pango_xft_render_layout(XftDraw * draw, XftColor * color,
					PangoLayout * layout, int x,
					int y);
    extern void pango_xft_render_layout_line(XftDraw * draw,
					     XftColor * color,
					     PangoLayoutLine * line, int x,
					     int y);
    extern void pango_xft_render_transformed(XftDraw * draw,
					     XftColor * color,
					     PangoMatrix * matrix,
					     PangoFont * font,
					     PangoGlyphString * glyphs,
					     int x, int y);
    extern GType pango_xft_renderer_get_type(void);
    extern PangoRenderer *pango_xft_renderer_new(Display * display,
						 int screen);
    extern void pango_xft_renderer_set_default_color(PangoXftRenderer *
						     xftrenderer,
						     PangoColor *
						     default_color);
    extern void pango_xft_renderer_set_draw(PangoXftRenderer * xftrenderer,
					    XftDraw * draw);
    extern void pango_xft_set_default_substitute(Display * display,
						 int screen,
						 PangoXftSubstituteFunc
						 func, gpointer data,
						 GDestroyNotify notify);
    extern void pango_xft_shutdown_display(Display * display, int screen);
    extern void pango_xft_substitute_changed(Display * display,
					     int screen);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
