#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GOUTPUTSTREAM_H_
#define _GLIB_2_0_GIO_GOUTPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_OUTPUT_STREAM	(g_output_stream_get_type ())
#define G_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_OUTPUT_STREAM, GOutputStreamClass))
#define G_IS_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_OUTPUT_STREAM))
#define G_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_OUTPUT_STREAM, GOutputStream))
#define G_IS_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_OUTPUT_STREAM))
#define G_OUTPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_OUTPUT_STREAM, GOutputStreamClass))


    typedef struct _GOutputStreamClass GOutputStreamClass;

    typedef struct _GOutputStreamPrivate GOutputStreamPrivate;

    struct _GOutputStream {
	GObject parent_instance;
	GOutputStreamPrivate *priv;
    };

    struct _GOutputStreamClass {
	GObjectClass parent_class;
	 gssize(*write_fn) (GOutputStream * stream, const void *buffer,
			    gsize count, GCancellable * cancellable,
			    GError * *error);
	 gssize(*splice) (GOutputStream * stream, GInputStream * source,
			  GOutputStreamSpliceFlags flags,
			  GCancellable * cancellable, GError * *error);
	 gboolean(*flush) (GOutputStream * stream,
			   GCancellable * cancellable, GError * *error);
	 gboolean(*close_fn) (GOutputStream * stream,
			      GCancellable * cancellable, GError * *error);
	void (*write_async) (GOutputStream * stream, const void *buffer,
			     gsize count, int io_priority,
			     GCancellable * cancellable,
			     GAsyncReadyCallback callback,
			     gpointer user_data);
	 gssize(*write_finish) (GOutputStream * stream,
				GAsyncResult * result, GError * *error);
	void (*splice_async) (GOutputStream * stream,
			      GInputStream * source,
			      GOutputStreamSpliceFlags flags,
			      int io_priority, GCancellable * cancellable,
			      GAsyncReadyCallback callback,
			      gpointer user_data);
	 gssize(*splice_finish) (GOutputStream * stream,
				 GAsyncResult * result, GError * *error);
	void (*flush_async) (GOutputStream * stream, int io_priority,
			     GCancellable * cancellable,
			     GAsyncReadyCallback callback,
			     gpointer user_data);
	 gboolean(*flush_finish) (GOutputStream * stream,
				  GAsyncResult * result, GError * *error);
	void (*close_async) (GOutputStream * stream, int io_priority,
			     GCancellable * cancellable,
			     GAsyncReadyCallback callback,
			     gpointer user_data);
	 gboolean(*close_finish) (GOutputStream * stream,
				  GAsyncResult * result, GError * *error);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
	void (*_g_reserved6) (void);
	void (*_g_reserved7) (void);
	void (*_g_reserved8) (void);
    };


/* Function prototypes */

    extern void g_output_stream_clear_pending(GOutputStream * stream);
    extern gboolean g_output_stream_close(GOutputStream * stream,
					  GCancellable * cancellable,
					  GError * *error);
    extern void g_output_stream_close_async(GOutputStream * stream,
					    int io_priority,
					    GCancellable * cancellable,
					    GAsyncReadyCallback callback,
					    gpointer user_data);
    extern gboolean g_output_stream_close_finish(GOutputStream * stream,
						 GAsyncResult * result,
						 GError * *error);
    extern gboolean g_output_stream_flush(GOutputStream * stream,
					  GCancellable * cancellable,
					  GError * *error);
    extern void g_output_stream_flush_async(GOutputStream * stream,
					    int io_priority,
					    GCancellable * cancellable,
					    GAsyncReadyCallback callback,
					    gpointer user_data);
    extern gboolean g_output_stream_flush_finish(GOutputStream * stream,
						 GAsyncResult * result,
						 GError * *error);
    extern GType g_output_stream_get_type(void);
    extern gboolean g_output_stream_has_pending(GOutputStream * stream);
    extern gboolean g_output_stream_is_closed(GOutputStream * stream);
    extern gboolean g_output_stream_is_closing(GOutputStream * stream);
    extern gboolean g_output_stream_set_pending(GOutputStream * stream,
						GError * *error);
    extern gssize g_output_stream_splice(GOutputStream * stream,
					 GInputStream * source,
					 GOutputStreamSpliceFlags flags,
					 GCancellable * cancellable,
					 GError * *error);
    extern void g_output_stream_splice_async(GOutputStream * stream,
					     GInputStream * source,
					     GOutputStreamSpliceFlags
					     flags, int io_priority,
					     GCancellable * cancellable,
					     GAsyncReadyCallback callback,
					     gpointer user_data);
    extern gssize g_output_stream_splice_finish(GOutputStream * stream,
						GAsyncResult * result,
						GError * *error);
    extern gssize g_output_stream_write(GOutputStream * stream,
					const void *buffer, gsize count,
					GCancellable * cancellable,
					GError * *error);
    extern gboolean g_output_stream_write_all(GOutputStream * stream,
					      const void *buffer,
					      gsize count,
					      gsize * bytes_written,
					      GCancellable * cancellable,
					      GError * *error);
    extern void g_output_stream_write_async(GOutputStream * stream,
					    const void *buffer,
					    gsize count, int io_priority,
					    GCancellable * cancellable,
					    GAsyncReadyCallback callback,
					    gpointer user_data);
    extern gssize g_output_stream_write_finish(GOutputStream * stream,
					       GAsyncResult * result,
					       GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
