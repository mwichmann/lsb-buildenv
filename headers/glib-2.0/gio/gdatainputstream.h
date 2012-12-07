#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDATAINPUTSTREAM_H_
#define _GLIB_2_0_GIO_GDATAINPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gbufferedinputstream.h>
#include <glib-2.0/gio/gfilterinputstream.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DATA_INPUT_STREAM	(g_data_input_stream_get_type ())
#define G_DATA_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DATA_INPUT_STREAM, GDataInputStreamClass))
#define G_IS_DATA_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DATA_INPUT_STREAM))
#define G_DATA_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DATA_INPUT_STREAM, GDataInputStream))
#define G_IS_DATA_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DATA_INPUT_STREAM))
#define G_DATA_INPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DATA_INPUT_STREAM, GDataInputStreamClass))


    typedef struct _GDataInputStreamClass GDataInputStreamClass;

    typedef struct _GDataInputStreamPrivate GDataInputStreamPrivate;

    struct _GDataInputStream {
	GBufferedInputStream parent_instance;
	GDataInputStreamPrivate *priv;
    };

    struct _GDataInputStreamClass {
	GBufferedInputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern GDataStreamByteOrder
	g_data_input_stream_get_byte_order(GDataInputStream * stream);
    extern GDataStreamNewlineType
	g_data_input_stream_get_newline_type(GDataInputStream * stream);
    extern GType g_data_input_stream_get_type(void);
    extern GDataInputStream *g_data_input_stream_new(GInputStream *
						     base_stream);
    extern guchar g_data_input_stream_read_byte(GDataInputStream * stream,
						GCancellable * cancellable,
						GError * *error);
    extern gint16 g_data_input_stream_read_int16(GDataInputStream * stream,
						 GCancellable *
						 cancellable,
						 GError * *error);
    extern gint32 g_data_input_stream_read_int32(GDataInputStream * stream,
						 GCancellable *
						 cancellable,
						 GError * *error);
    extern gint64 g_data_input_stream_read_int64(GDataInputStream * stream,
						 GCancellable *
						 cancellable,
						 GError * *error);
    extern char *g_data_input_stream_read_line(GDataInputStream * stream,
					       gsize * length,
					       GCancellable * cancellable,
					       GError * *error);
    extern void g_data_input_stream_read_line_async(GDataInputStream *
						    stream,
						    gint io_priority,
						    GCancellable *
						    cancellable,
						    GAsyncReadyCallback
						    callback,
						    gpointer user_data);
    extern char *g_data_input_stream_read_line_finish(GDataInputStream *
						      stream,
						      GAsyncResult *
						      result,
						      gsize * length,
						      GError * *error);
    extern char *g_data_input_stream_read_line_finish_utf8(GDataInputStream
							   * stream,
							   GAsyncResult *
							   result,
							   gsize * length,
							   GError *
							   *error);
    extern char *g_data_input_stream_read_line_utf8(GDataInputStream *
						    stream, gsize * length,
						    GCancellable *
						    cancellable,
						    GError * *error);
    extern guint16 g_data_input_stream_read_uint16(GDataInputStream *
						   stream,
						   GCancellable *
						   cancellable,
						   GError * *error);
    extern guint32 g_data_input_stream_read_uint32(GDataInputStream *
						   stream,
						   GCancellable *
						   cancellable,
						   GError * *error);
    extern guint64 g_data_input_stream_read_uint64(GDataInputStream *
						   stream,
						   GCancellable *
						   cancellable,
						   GError * *error);
    extern char *g_data_input_stream_read_until(GDataInputStream * stream,
						const char *stop_chars,
						gsize * length,
						GCancellable * cancellable,
						GError * *error);
    extern void g_data_input_stream_read_until_async(GDataInputStream *
						     stream,
						     const char
						     *stop_chars,
						     gint io_priority,
						     GCancellable *
						     cancellable,
						     GAsyncReadyCallback
						     callback,
						     gpointer user_data);
    extern char *g_data_input_stream_read_until_finish(GDataInputStream *
						       stream,
						       GAsyncResult *
						       result,
						       gsize * length,
						       GError * *error);
    extern char *g_data_input_stream_read_upto(GDataInputStream * stream,
					       const char *stop_chars,
					       gssize stop_chars_len,
					       gsize * length,
					       GCancellable * cancellable,
					       GError * *error);
    extern void g_data_input_stream_read_upto_async(GDataInputStream *
						    stream,
						    const char *stop_chars,
						    gssize stop_chars_len,
						    gint io_priority,
						    GCancellable *
						    cancellable,
						    GAsyncReadyCallback
						    callback,
						    gpointer user_data);
    extern char *g_data_input_stream_read_upto_finish(GDataInputStream *
						      stream,
						      GAsyncResult *
						      result,
						      gsize * length,
						      GError * *error);
    extern void g_data_input_stream_set_byte_order(GDataInputStream *
						   stream,
						   GDataStreamByteOrder
						   order);
    extern void g_data_input_stream_set_newline_type(GDataInputStream *
						     stream,
						     GDataStreamNewlineType
						     type);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
