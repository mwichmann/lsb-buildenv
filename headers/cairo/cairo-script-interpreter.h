#if (__LSB_VERSION__ >= 50 )
#ifndef _CAIRO_CAIRO_SCRIPT_INTERPRETER_H_
#define _CAIRO_CAIRO_SCRIPT_INTERPRETER_H_

#include <stdio.h>
#include <cairo/cairo.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _cairo_script_interpreter cairo_script_interpreter_t;

    typedef void (*csi_destroy_func_t) (void *, void *);

    typedef cairo_surface_t *(*csi_surface_create_func_t) (void *,
							   cairo_content_t,
							   double, double,
							   long int);

    typedef cairo_t *(*csi_context_create_func_t) (void *,
						   cairo_surface_t *);

    typedef void (*csi_show_page_func_t) (void *, cairo_t *);

    typedef void (*csi_copy_page_func_t) (void *, cairo_t *);

    typedef struct _cairo_script_interpreter_hooks
	cairo_script_interpreter_hooks_t;

    struct _cairo_script_interpreter_hooks {
	void *closure;
	csi_surface_create_func_t surface_create;
	csi_destroy_func_t surface_destroy;
	csi_context_create_func_t context_create;
	csi_destroy_func_t context_destroy;
	csi_show_page_func_t show_page;
	csi_copy_page_func_t copy_page;
    };


/* Function prototypes */

    extern cairo_script_interpreter_t
	*cairo_script_interpreter_create(void);
    extern cairo_status_t
	cairo_script_interpreter_destroy(cairo_script_interpreter_t * ctx);
    extern cairo_status_t
	cairo_script_interpreter_feed_stream(cairo_script_interpreter_t *
					     ctx, FILE * stream);
    extern cairo_status_t
	cairo_script_interpreter_feed_string(cairo_script_interpreter_t *
					     ctx, const char *line,
					     int len);
    extern cairo_status_t
	cairo_script_interpreter_finish(cairo_script_interpreter_t * ctx);
    extern unsigned int
	cairo_script_interpreter_get_line_number(cairo_script_interpreter_t
						 * ctx);
    extern void
	cairo_script_interpreter_install_hooks(cairo_script_interpreter_t *
					       ctx,
					       const
					       cairo_script_interpreter_hooks_t
					       * hooks);
    extern cairo_script_interpreter_t
	*cairo_script_interpreter_reference(cairo_script_interpreter_t *
					    ctx);
    extern cairo_status_t
	cairo_script_interpreter_run(cairo_script_interpreter_t * ctx,
				     const char *filename);
    extern cairo_status_t cairo_script_interpreter_translate_stream(FILE *
								    stream,
								    cairo_write_func_t
								    write_func,
								    void
								    *closure);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
