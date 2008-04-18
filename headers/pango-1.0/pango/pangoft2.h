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


#if __LSB_VERSION__ >= 31
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
#endif				// __LSB_VERSION__ >= 3.1



#if __LSB_VERSION__ >= 31
    typedef struct _PangoFT2FontMap PangoFT2FontMap;

    typedef void (*PangoFT2SubstituteFunc) (FcPattern *, gpointer);

#endif				// __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31


#endif				// __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
    extern GType pango_fc_font_get_type(void);
    extern FT_Face pango_fc_font_lock_face(PangoFcFont *);
    extern void pango_fc_font_unlock_face(PangoFcFont *);
    extern PangoContext *pango_ft2_font_map_create_context(PangoFT2FontMap
							   *);
    extern GType pango_ft2_font_map_get_type(void);
    extern PangoFontMap *pango_ft2_font_map_new(void);
    extern void pango_ft2_font_map_set_default_substitute(PangoFT2FontMap
							  *,
							  PangoFT2SubstituteFunc,
							  gpointer,
							  GDestroyNotify);
    extern void pango_ft2_font_map_set_resolution(PangoFT2FontMap *,
						  double, double);
    extern void pango_ft2_font_map_substitute_changed(PangoFT2FontMap *);
    extern void pango_ft2_render(FT_Bitmap *, PangoFont *,
				 PangoGlyphString *, int, int);
    extern void pango_ft2_render_layout(FT_Bitmap *, PangoLayout *, int,
					int);
    extern void pango_ft2_render_layout_line(FT_Bitmap *,
					     PangoLayoutLine *, int, int);
    extern void pango_ft2_render_layout_line_subpixel(FT_Bitmap *,
						      PangoLayoutLine *,
						      int, int);
    extern void pango_ft2_render_layout_subpixel(FT_Bitmap *,
						 PangoLayout *, int, int);
    extern void pango_ft2_render_transformed(FT_Bitmap *,
					     const PangoMatrix *,
					     PangoFont *,
					     PangoGlyphString *, int, int);
#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
