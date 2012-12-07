#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GPOLLABLEOUTPUTSTREAM_H_
#define _GLIB_2_0_GIO_GPOLLABLEOUTPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_POLLABLE_OUTPUT_STREAM	(g_pollable_output_stream_get_type ())
#define G_POLLABLE_OUTPUT_STREAM(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_POLLABLE_OUTPUT_STREAM, GPollableOutputStream))
#define G_IS_POLLABLE_OUTPUT_STREAM(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_POLLABLE_OUTPUT_STREAM))
#define G_POLLABLE_OUTPUT_STREAM_GET_INTERFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_POLLABLE_OUTPUT_STREAM, GPollableOutputStreamInterface))


    typedef struct _GPollableOutputStreamInterface
	GPollableOutputStreamInterface;

    struct _GPollableOutputStreamInterface {
	GTypeInterface g_iface;
	 gboolean(*can_poll) (GPollableOutputStream * stream);
	 gboolean(*is_writable) (GPollableOutputStream * stream);
	GSource *(*create_source) (GPollableOutputStream * stream,
				   GCancellable * cancellable);
	 gssize(*write_nonblocking) (GPollableOutputStream * stream,
				     const void *buffer, gsize size,
				     GError * *error);
    };


/* Function prototypes */

    extern gboolean g_pollable_output_stream_can_poll(GPollableOutputStream
						      * stream);
    extern GSource
	*g_pollable_output_stream_create_source(GPollableOutputStream *
						stream,
						GCancellable *
						cancellable);
    extern GType g_pollable_output_stream_get_type(void);
    extern gboolean
	g_pollable_output_stream_is_writable(GPollableOutputStream *
					     stream);
    extern gssize
	g_pollable_output_stream_write_nonblocking(GPollableOutputStream *
						   stream,
						   const void *buffer,
						   gsize size,
						   GCancellable *
						   cancellable,
						   GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
