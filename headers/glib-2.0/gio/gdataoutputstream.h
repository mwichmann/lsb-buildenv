#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDATAOUTPUTSTREAM_H_
#define _GLIB_2_0_GIO_GDATAOUTPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/goutputstream.h>
#include <glib-2.0/gio/gfilteroutputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DATA_OUTPUT_STREAM	(g_data_output_stream_get_type ())
#define G_DATA_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DATA_OUTPUT_STREAM, GDataOutputStreamClass))
#define G_IS_DATA_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DATA_OUTPUT_STREAM))
#define G_DATA_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DATA_OUTPUT_STREAM, GDataOutputStream))
#define G_IS_DATA_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DATA_OUTPUT_STREAM))
#define G_DATA_OUTPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DATA_OUTPUT_STREAM, GDataOutputStreamClass))


    typedef struct _GDataOutputStream GDataOutputStream;

    typedef struct _GDataOutputStreamClass GDataOutputStreamClass;

    typedef struct _GDataOutputStreamPrivate GDataOutputStreamPrivate;

    struct _GDataOutputStream {
	GFilterOutputStream parent_instance;
	GDataOutputStreamPrivate *priv;
    };

    struct _GDataOutputStreamClass {
	GFilterOutputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern GDataStreamByteOrder
	g_data_output_stream_get_byte_order(GDataOutputStream * stream);
    extern GType g_data_output_stream_get_type(void);
    extern GDataOutputStream *g_data_output_stream_new(GOutputStream *
						       base_stream);
    extern gboolean g_data_output_stream_put_byte(GDataOutputStream *
						  stream, guchar data,
						  GCancellable *
						  cancellable,
						  GError * *error);
    extern gboolean g_data_output_stream_put_int16(GDataOutputStream *
						   stream, gint16 data,
						   GCancellable *
						   cancellable,
						   GError * *error);
    extern gboolean g_data_output_stream_put_int32(GDataOutputStream *
						   stream, gint32 data,
						   GCancellable *
						   cancellable,
						   GError * *error);
    extern gboolean g_data_output_stream_put_int64(GDataOutputStream *
						   stream, gint64 data,
						   GCancellable *
						   cancellable,
						   GError * *error);
    extern gboolean g_data_output_stream_put_string(GDataOutputStream *
						    stream,
						    const char *str,
						    GCancellable *
						    cancellable,
						    GError * *error);
    extern gboolean g_data_output_stream_put_uint16(GDataOutputStream *
						    stream, guint16 data,
						    GCancellable *
						    cancellable,
						    GError * *error);
    extern gboolean g_data_output_stream_put_uint32(GDataOutputStream *
						    stream, guint32 data,
						    GCancellable *
						    cancellable,
						    GError * *error);
    extern gboolean g_data_output_stream_put_uint64(GDataOutputStream *
						    stream, guint64 data,
						    GCancellable *
						    cancellable,
						    GError * *error);
    extern void g_data_output_stream_set_byte_order(GDataOutputStream *
						    stream,
						    GDataStreamByteOrder
						    order);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
