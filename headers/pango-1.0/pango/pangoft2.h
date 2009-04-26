#if (__LSB_VERSION__ >= 31 )
#ifndef _PANGO_1_0_PANGO_PANGOFT2_H_
#define _PANGO_1_0_PANGO_PANGOFT2_H_

#include <fontconfig/fontconfig.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <pango-1.0/pango/pango.h>
#include <pango-1.0/pango/pangoxft.h>
#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif


#define PANGO_FC_FONT(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FC_FONT, \
	PangoFcFont))
#define PANGO_FT2_FONT_MAP(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FT2_FONT_MAP, \
	PangoFT2FontMap))
#define PANGO_IS_FC_FONT(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FC_FONT))
#define PANGO_FT2_IS_FONT_MAP(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FT2_FONT_MAP))
#define PANGO_TYPE_FC_FONT	(pango_fc_font_get_type ())
#define PANGO_TYPE_FT2_FONT_MAP	(pango_ft2_font_map_get_type ())


    typedef struct _PangoFT2FontMap PangoFT2FontMap;

    typedef void (*PangoFT2SubstituteFunc) (FcPattern *, gpointer);


/* Function prototypes */

    extern GType pango_fc_font_get_type(void);
    extern FT_Face pango_fc_font_lock_face(PangoFcFont * font);
    extern void pango_fc_font_unlock_face(PangoFcFont * font);
    extern PangoContext *pango_ft2_font_map_create_context(PangoFT2FontMap
							   * fontmap);
    extern GType pango_ft2_font_map_get_type(void);
    extern PangoFontMap *pango_ft2_font_map_new(void);
    extern void pango_ft2_font_map_set_default_substitute(PangoFT2FontMap *
							  fontmap,
							  PangoFT2SubstituteFunc
							  func,
							  gpointer data,
							  GDestroyNotify
							  notify);
    extern void pango_ft2_font_map_set_resolution(PangoFT2FontMap *
						  fontmap, double dpi_x,
						  double dpi_y);
    extern void pango_ft2_font_map_substitute_changed(PangoFT2FontMap *
						      fontmap);
    extern void pango_ft2_render(FT_Bitmap * bitmap, PangoFont * font,
				 PangoGlyphString * glyphs, int x, int y);
    extern void pango_ft2_render_layout(FT_Bitmap * bitmap,
					PangoLayout * layout, int x,
					int y);
    extern void pango_ft2_render_layout_line(FT_Bitmap * bitmap,
					     PangoLayoutLine * line, int x,
					     int y);
    extern void pango_ft2_render_layout_line_subpixel(FT_Bitmap * bitmap,
						      PangoLayoutLine *
						      line, int x, int y);
    extern void pango_ft2_render_layout_subpixel(FT_Bitmap * bitmap,
						 PangoLayout * layout,
						 int x, int y);
    extern void pango_ft2_render_transformed(FT_Bitmap * bitmap,
					     const PangoMatrix * matrix,
					     PangoFont * font,
					     PangoGlyphString * glyphs,
					     int x, int y);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
