#if (__LSB_VERSION__ >= 40 )
#ifndef _CAIRO_CAIRO_SVG_H_
#define _CAIRO_CAIRO_SVG_H_

#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef enum _cairo_svg_version {
	CAIRO_SVG_VERSION_1_1,
	CAIRO_SVG_VERSION_1_2 = 1
    } cairo_svg_version_t;


/* Function prototypes */

    extern cairo_font_face_t *cairo_ft_font_face_create_for_ft_face;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
