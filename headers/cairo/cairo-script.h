#if (__LSB_VERSION__ >= 50 )
#ifndef _CAIRO_CAIRO_SCRIPT_H_
#define _CAIRO_CAIRO_SCRIPT_H_

#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	CAIRO_SCRIPT_MODE_ASCII,
	CAIRO_SCRIPT_MODE_BINARY
    } cairo_script_mode_t;


/* Function prototypes */

    extern cairo_device_t *cairo_script_create(const char *filename);
    extern cairo_device_t
	*cairo_script_create_for_stream(cairo_write_func_t write_func,
					void *closure);
    extern cairo_status_t
	cairo_script_from_recording_surface(cairo_device_t * script,
					    cairo_surface_t *
					    recording_surface);
    extern cairo_script_mode_t cairo_script_get_mode(cairo_device_t *
						     script);
    extern void cairo_script_set_mode(cairo_device_t * script,
				      cairo_script_mode_t mode);
    extern cairo_surface_t *cairo_script_surface_create(cairo_device_t *
							script,
							cairo_content_t
							content,
							double width,
							double height);
    extern cairo_surface_t
	*cairo_script_surface_create_for_target(cairo_device_t * script,
						cairo_surface_t * target);
    extern void cairo_script_write_comment(cairo_device_t * script,
					   const char *comment, int len);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
