#if (__LSB_VERSION__ >= 40 )
#ifndef _CAIRO_CAIRO_PDF_H_
#define _CAIRO_CAIRO_PDF_H_

#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern cairo_surface_t *cairo_pdf_surface_create(const char *, double,
						     double);
    extern cairo_surface_t
	*cairo_pdf_surface_create_for_stream(cairo_write_func_t, void *,
					     double, double);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
