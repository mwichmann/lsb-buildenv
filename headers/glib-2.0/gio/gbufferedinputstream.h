#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GBUFFEREDINPUTSTREAM_H_
#define _GLIB_2_0_GIO_GBUFFEREDINPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gfilterinputstream.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/ginputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_BUFFERED_INPUT_STREAM	(g_buffered_input_stream_get_type ())
#define G_BUFFERED_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_BUFFERED_INPUT_STREAM, GBufferedInputStreamClass))
#define G_IS_BUFFERED_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_BUFFERED_INPUT_STREAM))
#define G_BUFFERED_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_BUFFERED_INPUT_STREAM, GBufferedInputStream))
#define G_IS_BUFFERED_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_BUFFERED_INPUT_STREAM))
#define G_BUFFERED_INPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_BUFFERED_INPUT_STREAM, GBufferedInputStreamClass))


    typedef struct _GBufferedInputStreamClass GBufferedInputStreamClass;

    typedef struct _GBufferedInputStreamPrivate
	GBufferedInputStreamPrivate;

    struct _GBufferedInputStream {
	GFilterInputStream parent_instance;
	GBufferedInputStreamPrivate *priv;
    };

    struct _GBufferedInputStreamClass {
	GFilterInputStreamClass parent_class;
	 gssize(*fill) (GBufferedInputStream * stream, gsize count,
			GCancellable * cancellable, GError * *error);
	void (*fill_async) (GBufferedInputStream * stream, gssize count,
			    int io_priority, GCancellable * cancellable,
			    GAsyncReadyCallback callback,
			    gpointer user_data);
	 gssize(*fill_finish) (GBufferedInputStream * stream,
			       GAsyncResult * result, GError * *error);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern gssize g_buffered_input_stream_fill(GBufferedInputStream *
					       stream, gssize count,
					       GCancellable * cancellable,
					       GError * *error);
    extern void g_buffered_input_stream_fill_async(GBufferedInputStream *
						   stream, gssize count,
						   int io_priority,
						   GCancellable *
						   cancellable,
						   GAsyncReadyCallback
						   callback,
						   gpointer user_data);
    extern gssize g_buffered_input_stream_fill_finish(GBufferedInputStream
						      * stream,
						      GAsyncResult *
						      result,
						      GError * *error);
    extern gsize g_buffered_input_stream_get_available(GBufferedInputStream
						       * stream);
    extern gsize
	g_buffered_input_stream_get_buffer_size(GBufferedInputStream *
						stream);
    extern GType g_buffered_input_stream_get_type(void);
    extern GInputStream *g_buffered_input_stream_new(GInputStream *
						     base_stream);
    extern GInputStream *g_buffered_input_stream_new_sized(GInputStream *
							   base_stream,
							   gsize size);
    extern gsize g_buffered_input_stream_peek(GBufferedInputStream *
					      stream, void *buffer,
					      gsize offset, gsize count);
    extern const void
	*g_buffered_input_stream_peek_buffer(GBufferedInputStream * stream,
					     gsize * count);
    extern int g_buffered_input_stream_read_byte(GBufferedInputStream *
						 stream,
						 GCancellable *
						 cancellable,
						 GError * *error);
    extern void
	g_buffered_input_stream_set_buffer_size(GBufferedInputStream *
						stream, gsize size);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
