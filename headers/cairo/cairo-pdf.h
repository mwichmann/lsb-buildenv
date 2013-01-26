#if (__LSB_VERSION__ >= 40 )
#ifndef _CAIRO_CAIRO_PDF_H_
#define _CAIRO_CAIRO_PDF_H_

#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 50
    typedef enum _cairo_pdf_version {
	CAIRO_PDF_VERSION_1_4,
	CAIRO_PDF_VERSION_1_5
    } cairo_pdf_version_t;

#endif				/* __LSB_VERSION__ >= 5.0 */


/* Function prototypes */

    extern cairo_surface_t *cairo_pdf_surface_create(const char *filename,
						     double
						     width_in_points,
						     double
						     height_in_points);
    extern cairo_surface_t
	*cairo_pdf_surface_create_for_stream(cairo_write_func_t write_func,
					     void *closure,
					     double width_in_points,
					     double height_in_points);
#if __LSB_VERSION__ >= 41
    extern void cairo_pdf_surface_set_size(cairo_surface_t * surface,
					   double width_in_points,
					   double height_in_points);
#endif				/* __LSB_VERSION__ >= 4.1 */

#if __LSB_VERSION__ >= 50
    extern void cairo_pdf_get_versions(const cairo_pdf_version_t *
				       *versions, int *num_versions);
    extern void cairo_pdf_surface_restrict_to_version(cairo_surface_t *
						      surface,
						      cairo_pdf_version_t
						      version);
    extern const char *cairo_pdf_version_to_string(cairo_pdf_version_t
						   version);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
