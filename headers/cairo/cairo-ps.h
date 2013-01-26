#if (__LSB_VERSION__ >= 40 )
#ifndef _CAIRO_CAIRO_PS_H_
#define _CAIRO_CAIRO_PS_H_

#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 50
    typedef enum _cairo_ps_level {
	CAIRO_PS_LEVEL_2,
	CAIRO_PS_LEVEL_3
    } cairo_ps_level_t;

#endif				/* __LSB_VERSION__ >= 5.0 */


/* Function prototypes */

    extern cairo_surface_t *cairo_ps_surface_create(const char *filename,
						    double width_in_points,
						    double
						    height_in_points);
    extern cairo_surface_t
	*cairo_ps_surface_create_for_stream(cairo_write_func_t write_func,
					    void *closure,
					    double width_in_points,
					    double height_in_points);
#if __LSB_VERSION__ >= 41
    extern void cairo_ps_surface_dsc_begin_page_setup(cairo_surface_t *
						      surface);
    extern void cairo_ps_surface_dsc_begin_setup(cairo_surface_t *
						 surface);
    extern void cairo_ps_surface_dsc_comment(cairo_surface_t * surface,
					     const char *comment);
    extern void cairo_ps_surface_set_size(cairo_surface_t * surface,
					  double width_in_points,
					  double height_in_points);
#endif				/* __LSB_VERSION__ >= 4.1 */

#if __LSB_VERSION__ >= 50
    extern void cairo_ps_get_levels(const cairo_ps_level_t * *levels,
				    int *num_levels);
    extern const char *cairo_ps_level_to_string(cairo_ps_level_t level);
    extern cairo_bool_t cairo_ps_surface_get_eps(cairo_surface_t *
						 surface);
    extern void cairo_ps_surface_restrict_to_level(cairo_surface_t *
						   surface,
						   cairo_ps_level_t level);
    extern void cairo_ps_surface_set_eps(cairo_surface_t * surface,
					 cairo_bool_t eps);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
