#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GIOSTREAM_H_
#define _GLIB_2_0_GIO_GIOSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_IO_STREAM	(g_io_stream_get_type ())
#define G_IO_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_IO_STREAM, GIOStreamClass))
#define G_IS_IO_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_IO_STREAM))
#define G_IO_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_IO_STREAM, GIOStream))
#define G_IS_IO_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_IO_STREAM))
#define G_IO_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_IO_STREAM, GIOStreamClass))


    typedef struct _GIOStreamPrivate GIOStreamPrivate;

    typedef struct _GIOStreamClass GIOStreamClass;

    struct _GIOStream {
	GObject parent_instance;
	GIOStreamPrivate *priv;
    };

    struct _GIOStreamClass {
	GObjectClass parent_class;
	GInputStream *(*get_input_stream) (GIOStream * stream);
	GOutputStream *(*get_output_stream) (GIOStream * stream);
	 gboolean(*close_fn) (GIOStream * stream,
			      GCancellable * cancellable, GError * *error);
	void (*close_async) (GIOStream * stream, int io_priority,
			     GCancellable * cancellable,
			     GAsyncReadyCallback callback,
			     gpointer user_data);
	 gboolean(*close_finish) (GIOStream * stream,
				  GAsyncResult * result, GError * *error);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
	void (*_g_reserved6) (void);
	void (*_g_reserved7) (void);
	void (*_g_reserved8) (void);
	void (*_g_reserved9) (void);
	void (*_g_reserved10) (void);
    };


/* Function prototypes */

    extern void g_io_stream_clear_pending(GIOStream * stream);
    extern gboolean g_io_stream_close(GIOStream * stream,
				      GCancellable * cancellable,
				      GError * *error);
    extern void g_io_stream_close_async(GIOStream * stream,
					int io_priority,
					GCancellable * cancellable,
					GAsyncReadyCallback callback,
					gpointer user_data);
    extern gboolean g_io_stream_close_finish(GIOStream * stream,
					     GAsyncResult * result,
					     GError * *error);
    extern GInputStream *g_io_stream_get_input_stream(GIOStream * stream);
    extern GOutputStream *g_io_stream_get_output_stream(GIOStream *
							stream);
    extern GType g_io_stream_get_type(void);
    extern gboolean g_io_stream_has_pending(GIOStream * stream);
    extern gboolean g_io_stream_is_closed(GIOStream * stream);
    extern gboolean g_io_stream_set_pending(GIOStream * stream,
					    GError * *error);
    extern void g_io_stream_splice_async(GIOStream * stream1,
					 GIOStream * stream2,
					 GIOStreamSpliceFlags flags,
					 int io_priority,
					 GCancellable * cancellable,
					 GAsyncReadyCallback callback,
					 gpointer user_data);
    extern gboolean g_io_stream_splice_finish(GAsyncResult * result,
					      GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
