#if (__LSB_VERSION__ >= 40 )
#ifndef _PANGO_1_0_PANGO_PANGOCAIRO_H_
#define _PANGO_1_0_PANGO_PANGOCAIRO_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <pango-1.0/pango/pango.h>
#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif


#define PANGO_CAIRO_FONT_MAP(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_CAIRO_FONT_MAP, \
	PangoCairoFontMap))
#define PANGO_IS_CAIRO_FONT_MAP(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_CAIRO_FONT_MAP))
#define PANGO_TYPE_CAIRO_FONT_MAP	(pango_cairo_font_map_get_type ())
#if __LSB_VERSION__ >= 5,0
#define PANGO_CAIRO_FONT(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_CAIRO_FONT, PangoCairoFont))
#define PANGO_IS_CAIRO_FONT(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_CAIRO_FONT))
#define PANGO_TYPE_CAIRO_FONT	(pango_cairo_font_get_type ())
#endif				/* __LSB_VERSION__ >= 5,0 */



    typedef struct _PangoCairoFont PangoCairoFont;

    typedef struct _PangoCairoFontMap PangoCairoFontMap;

#if __LSB_VERSION__ >= 5,0
    typedef void (*PangoCairoShapeRendererFunc) (cairo_t * cr,
						 PangoAttrShape * attr,
						 gboolean do_path,
						 gpointer data);

#endif				/* __LSB_VERSION__ >= 5,0 */


/* Function prototypes */

    extern const cairo_font_options_t
	*pango_cairo_context_get_font_options(PangoContext * context);
    extern double pango_cairo_context_get_resolution(PangoContext *
						     context);
    extern void pango_cairo_context_set_font_options(PangoContext *
						     context,
						     const
						     cairo_font_options_t *
						     options);
    extern void pango_cairo_context_set_resolution(PangoContext * context,
						   double dpi);
    extern PangoLayout *pango_cairo_create_layout(cairo_t * cr);
    extern PangoContext
	*pango_cairo_font_map_create_context(PangoCairoFontMap * fontmap);
    extern PangoFontMap *pango_cairo_font_map_get_default(void);
    extern double pango_cairo_font_map_get_resolution(PangoCairoFontMap *
						      fontmap);
    extern PangoFontMap *pango_cairo_font_map_new(void);
    extern void pango_cairo_font_map_set_resolution(PangoCairoFontMap *
						    fontmap, double dpi);
    extern void pango_cairo_glyph_string_path(cairo_t * cr,
					      PangoFont * font,
					      PangoGlyphString * glyphs);
    extern void pango_cairo_layout_line_path(cairo_t * cr,
					     PangoLayoutLine * line);
    extern void pango_cairo_layout_path(cairo_t * cr,
					PangoLayout * layout);
    extern void pango_cairo_show_glyph_string(cairo_t * cr,
					      PangoFont * font,
					      PangoGlyphString * glyphs);
    extern void pango_cairo_show_layout(cairo_t * cr,
					PangoLayout * layout);
    extern void pango_cairo_show_layout_line(cairo_t * cr,
					     PangoLayoutLine * line);
    extern void pango_cairo_update_context(cairo_t * cr,
					   PangoContext * context);
    extern void pango_cairo_update_layout(cairo_t * cr,
					  PangoLayout * layout);
#if __LSB_VERSION__ >= 5,0
    extern PangoCairoShapeRendererFunc
	pango_cairo_context_get_shape_renderer(PangoContext * context,
					       gpointer * data);
    extern void pango_cairo_context_set_shape_renderer(PangoContext *
						       context,
						       PangoCairoShapeRendererFunc
						       func, gpointer data,
						       GDestroyNotify
						       dnotify);
    extern void pango_cairo_error_underline_path(cairo_t * cr, double x,
						 double y, double width,
						 double height);
    extern cairo_scaled_font_t
	*pango_cairo_font_get_scaled_font(PangoCairoFont * font);
    extern GType pango_cairo_font_get_type(void);
    extern cairo_font_type_t
	pango_cairo_font_map_get_font_type(PangoCairoFontMap * fontmap);
    extern GType pango_cairo_font_map_get_type(void);
    extern PangoFontMap
	*pango_cairo_font_map_new_for_font_type(cairo_font_type_t
						fonttype);
    extern void pango_cairo_show_error_underline(cairo_t * cr, double x,
						 double y, double width,
						 double height);
#endif				/* __LSB_VERSION__ >= 5,0 */

#if __LSB_VERSION__ >= 50
    extern PangoContext *pango_cairo_create_context(cairo_t * cr);
    extern void pango_cairo_font_map_set_default(PangoCairoFontMap *
						 fontmap);
    extern void pango_cairo_show_glyph_item(cairo_t * cr, const char *text,
					    PangoGlyphItem * glyph_item);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
