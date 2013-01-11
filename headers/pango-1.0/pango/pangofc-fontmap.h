#if (__LSB_VERSION__ >= 31 )
#ifndef _PANGO_1_0_PANGO_PANGOFC_FONTMAP_H_
#define _PANGO_1_0_PANGO_PANGOFC_FONTMAP_H_

#include <fontconfig/fontconfig.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <pango-1.0/pango/pango.h>
#include <pango-1.0/pango/pangofc-decoder.h>

#ifdef __cplusplus
extern "C" {
#endif


#define PANGO_FC_FONT_MAP(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FC_FONT_MAP, \
	PangoFcFontMap))
#define PANGO_IS_FC_FONT_MAP(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FC_FONT_MAP))
#define PANGO_TYPE_FC_FONT_MAP	(pango_fc_font_map_get_type ())
#if __LSB_VERSION__ >= 50
#define PANGO_FC_GRAVITY	"pangogravity"
#define PANGO_FC_PRGNAME	"pangoprgname"
#define PANGO_FC_VERSION	"pangoversion"
#endif				/* __LSB_VERSION__ >= 5.0 */



    typedef struct _PangoFcFontMap PangoFcFontMap;

    typedef PangoFcDecoder *(*PangoFcDecoderFindFunc) (FcPattern * pattern,
						       gpointer user_data);

    typedef struct _PangoFcFontMapClass PangoFcFontMapClass;


/* Function prototypes */

    extern PangoFontDescription
	*pango_fc_font_description_from_pattern(FcPattern * pattern,
						gboolean include_size);
    extern void pango_fc_font_map_add_decoder_find_func(PangoFcFontMap *
							fcfontmap,
							PangoFcDecoderFindFunc
							findfunc,
							gpointer user_data,
							GDestroyNotify
							dnotify);
    extern GType pango_fc_font_map_get_type(void);
#if __LSB_VERSION__ >= 50
    extern void pango_fc_font_map_cache_clear(PangoFcFontMap * fcfontmap);
    extern PangoFcDecoder *pango_fc_font_map_find_decoder(PangoFcFontMap *
							  fcfontmap,
							  FcPattern *
							  pattern);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
