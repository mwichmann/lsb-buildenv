#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GINPUTSTREAM_H_
#define _GLIB_2_0_GIO_GINPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_INPUT_STREAM	(g_input_stream_get_type ())
#define G_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_INPUT_STREAM, GInputStreamClass))
#define G_IS_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_INPUT_STREAM))
#define G_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_INPUT_STREAM, GInputStream))
#define G_IS_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_INPUT_STREAM))
#define G_INPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_INPUT_STREAM, GInputStreamClass))


    typedef struct _GInputStreamClass GInputStreamClass;

    typedef struct _GInputStreamPrivate GInputStreamPrivate;

    struct _GInputStream {
	GObject parent_instance;
	GInputStreamPrivate *priv;
    };

    struct _GInputStreamClass {
	GObjectClass parent_class;
	 gssize(*read_fn) (GInputStream * stream, void *buffer,
			   gsize count, GCancellable * cancellable,
			   GError * *error);
	 gssize(*skip) (GInputStream * stream, gsize count,
			GCancellable * cancellable, GError * *error);
	 gboolean(*close_fn) (GInputStream * stream,
			      GCancellable * cancellable, GError * *error);
	void (*read_async) (GInputStream * stream, void *buffer,
			    gsize count, int io_priority,
			    GCancellable * cancellable,
			    GAsyncReadyCallback callback,
			    gpointer user_data);
	 gssize(*read_finish) (GInputStream * stream,
			       GAsyncResult * result, GError * *error);
	void (*skip_async) (GInputStream * stream, gsize count,
			    int io_priority, GCancellable * cancellable,
			    GAsyncReadyCallback callback,
			    gpointer user_data);
	 gssize(*skip_finish) (GInputStream * stream,
			       GAsyncResult * result, GError * *error);
	void (*close_async) (GInputStream * stream, int io_priority,
			     GCancellable * cancellable,
			     GAsyncReadyCallback callback,
			     gpointer user_data);
	 gboolean(*close_finish) (GInputStream * stream,
				  GAsyncResult * result, GError * *error);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern void g_input_stream_clear_pending(GInputStream * stream);
    extern gboolean g_input_stream_close(GInputStream * stream,
					 GCancellable * cancellable,
					 GError * *error);
    extern void g_input_stream_close_async(GInputStream * stream,
					   int io_priority,
					   GCancellable * cancellable,
					   GAsyncReadyCallback callback,
					   gpointer user_data);
    extern gboolean g_input_stream_close_finish(GInputStream * stream,
						GAsyncResult * result,
						GError * *error);
    extern GType g_input_stream_get_type(void);
    extern gboolean g_input_stream_has_pending(GInputStream * stream);
    extern gboolean g_input_stream_is_closed(GInputStream * stream);
    extern gssize g_input_stream_read(GInputStream * stream, void *buffer,
				      gsize count,
				      GCancellable * cancellable,
				      GError * *error);
    extern gboolean g_input_stream_read_all(GInputStream * stream,
					    void *buffer, gsize count,
					    gsize * bytes_read,
					    GCancellable * cancellable,
					    GError * *error);
    extern void g_input_stream_read_async(GInputStream * stream,
					  void *buffer, gsize count,
					  int io_priority,
					  GCancellable * cancellable,
					  GAsyncReadyCallback callback,
					  gpointer user_data);
    extern gssize g_input_stream_read_finish(GInputStream * stream,
					     GAsyncResult * result,
					     GError * *error);
    extern gboolean g_input_stream_set_pending(GInputStream * stream,
					       GError * *error);
    extern gssize g_input_stream_skip(GInputStream * stream, gsize count,
				      GCancellable * cancellable,
				      GError * *error);
    extern void g_input_stream_skip_async(GInputStream * stream,
					  gsize count, int io_priority,
					  GCancellable * cancellable,
					  GAsyncReadyCallback callback,
					  gpointer user_data);
    extern gssize g_input_stream_skip_finish(GInputStream * stream,
					     GAsyncResult * result,
					     GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
