#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GBUFFEREDOUTPUTSTREAM_H_
#define _GLIB_2_0_GIO_GBUFFEREDOUTPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/goutputstream.h>
#include <glib-2.0/gio/gfilteroutputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_BUFFERED_OUTPUT_STREAM	(g_buffered_output_stream_get_type ())
#define G_BUFFERED_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_BUFFERED_OUTPUT_STREAM, GBufferedOutputStreamClass))
#define G_IS_BUFFERED_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_BUFFERED_OUTPUT_STREAM))
#define G_BUFFERED_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_BUFFERED_OUTPUT_STREAM, GBufferedOutputStream))
#define G_IS_BUFFERED_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_BUFFERED_OUTPUT_STREAM))
#define G_BUFFERED_OUTPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_BUFFERED_OUTPUT_STREAM, GBufferedOutputStreamClass))


    typedef struct _GBufferedOutputStreamClass GBufferedOutputStreamClass;

    typedef struct _GBufferedOutputStreamPrivate
	GBufferedOutputStreamPrivate;

    struct _GBufferedOutputStream {
	GFilterOutputStream parent_instance;
	GBufferedOutputStreamPrivate *priv;
    };

    struct _GBufferedOutputStreamClass {
	GFilterOutputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
    };


/* Function prototypes */

    extern gboolean
	g_buffered_output_stream_get_auto_grow(GBufferedOutputStream *
					       stream);
    extern gsize
	g_buffered_output_stream_get_buffer_size(GBufferedOutputStream *
						 stream);
    extern GType g_buffered_output_stream_get_type(void);
    extern GOutputStream *g_buffered_output_stream_new(GOutputStream *
						       base_stream);
    extern GOutputStream *g_buffered_output_stream_new_sized(GOutputStream
							     * base_stream,
							     gsize size);
    extern void
	g_buffered_output_stream_set_auto_grow(GBufferedOutputStream *
					       stream, gboolean auto_grow);
    extern void
	g_buffered_output_stream_set_buffer_size(GBufferedOutputStream *
						 stream, gsize size);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
