#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GPOLLABLEINPUTSTREAM_H_
#define _GLIB_2_0_GIO_GPOLLABLEINPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_POLLABLE_INPUT_STREAM	(g_pollable_input_stream_get_type ())
#define G_POLLABLE_INPUT_STREAM(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_POLLABLE_INPUT_STREAM, GPollableInputStream))
#define G_IS_POLLABLE_INPUT_STREAM(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_POLLABLE_INPUT_STREAM))
#define G_POLLABLE_INPUT_STREAM_GET_INTERFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_POLLABLE_INPUT_STREAM, GPollableInputStreamInterface))


    typedef struct _GPollableInputStreamInterface
	GPollableInputStreamInterface;

    struct _GPollableInputStreamInterface {
	GTypeInterface g_iface;
	 gboolean(*can_poll) (GPollableInputStream * stream);
	 gboolean(*is_readable) (GPollableInputStream * stream);
	GSource *(*create_source) (GPollableInputStream * stream,
				   GCancellable * cancellable);
	 gssize(*read_nonblocking) (GPollableInputStream * stream,
				    void *buffer, gsize size,
				    GError * *error);
    };


/* Function prototypes */

    extern gboolean g_pollable_input_stream_can_poll(GPollableInputStream *
						     stream);
    extern GSource
	*g_pollable_input_stream_create_source(GPollableInputStream *
					       stream,
					       GCancellable * cancellable);
    extern GType g_pollable_input_stream_get_type(void);
    extern gboolean
	g_pollable_input_stream_is_readable(GPollableInputStream * stream);
    extern gssize
	g_pollable_input_stream_read_nonblocking(GPollableInputStream *
						 stream, void *buffer,
						 gsize size,
						 GCancellable *
						 cancellable,
						 GError * *error);
    extern GSource *g_pollable_source_new(GObject * pollable_stream);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
