#if (__LSB_VERSION__ >= 41 )
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

    extern void cairo_svg_get_versions(const cairo_svg_version_t *
				       *versions, int *num_versions);
    extern cairo_surface_t *cairo_svg_surface_create(const char *filename,
						     double
						     width_in_points,
						     double
						     height_in_points);
    extern cairo_surface_t
	*cairo_svg_surface_create_for_stream(cairo_write_func_t write_func,
					     void *closure,
					     double width_in_points,
					     double height_in_points);
    extern void cairo_svg_surface_restrict_to_version(cairo_surface_t *
						      surface,
						      cairo_svg_version_t
						      version);
    extern const char *cairo_svg_version_to_string(cairo_svg_version_t
						   version);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
