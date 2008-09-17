#if (__LSB_VERSION__ >= 40 )
#ifndef _CAIRO_CAIRO_FT_H_
#define _CAIRO_CAIRO_FT_H_

#include <fontconfig/fontconfig.h>
#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>
#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern cairo_font_face_t
	*cairo_ft_font_face_create_for_ft_face(FT_Face, int);
    extern cairo_font_face_t
	*cairo_ft_font_face_create_for_pattern(FcPattern *);
    extern void cairo_ft_font_options_substitute(const cairo_font_options_t
						 *, FcPattern *);
    extern void cairo_ft_scaled_font_unlock_face(cairo_scaled_font_t *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
