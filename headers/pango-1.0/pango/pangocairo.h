#if (__LSB_VERSION__ >= 40 )
#ifndef _PANGO_1_0_PANGO_PANGOCAIRO_H_
#define _PANGO_1_0_PANGO_PANGOCAIRO_H_

#include <glib-2.0/glib.h>
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


    typedef struct _PangoCairoFont PangoCairoFont;

    typedef struct _PangoCairoFontMap PangoCairoFontMap;


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
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
