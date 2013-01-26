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


#if __LSB_VERSION__ >= 50
    typedef enum {
	CAIRO_FT_SYNTHESIZE_BOLD = 1 << 0,
	CAIRO_FT_SYNTHESIZE_OBLIQUE = 1 << 1
    } cairo_ft_synthesize_t;

#endif				/* __LSB_VERSION__ >= 5.0 */


/* Function prototypes */

    extern cairo_font_face_t *cairo_ft_font_face_create_for_ft_face(FT_Face
								    face,
								    int
								    load_flags);
    extern cairo_font_face_t
	*cairo_ft_font_face_create_for_pattern(FcPattern * pattern);
    extern void cairo_ft_font_options_substitute(const cairo_font_options_t
						 * options,
						 FcPattern * pattern);
    extern void cairo_ft_scaled_font_unlock_face(cairo_scaled_font_t *
						 scaled_font);
#if __LSB_VERSION__ < 50
    extern void cairo_ft_scaled_font_lock_face(cairo_scaled_font_t *
					       scaled_font);
#endif				/* __LSB_VERSION__ < 5.0 */

#if __LSB_VERSION__ >= 50
    extern unsigned int cairo_ft_font_face_get_synthesize(cairo_font_face_t
							  * font_face);
    extern void cairo_ft_font_face_set_synthesize(cairo_font_face_t *
						  font_face,
						  unsigned int
						  synth_flags);
    extern void cairo_ft_font_face_unset_synthesize(cairo_font_face_t *
						    font_face,
						    unsigned int
						    synth_flags);
    extern FT_Face cairo_ft_scaled_font_lock_face(cairo_scaled_font_t *
						  scaled_font);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
