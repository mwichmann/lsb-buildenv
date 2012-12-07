#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GFILEOUTPUTSTREAM_H_
#define _GLIB_2_0_GIO_GFILEOUTPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/goutputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_FILE_OUTPUT_STREAM	(g_file_output_stream_get_type ())
#define G_FILE_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILE_OUTPUT_STREAM, GFileOutputStreamClass))
#define G_IS_FILE_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILE_OUTPUT_STREAM))
#define G_FILE_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILE_OUTPUT_STREAM, GFileOutputStream))
#define G_IS_FILE_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILE_OUTPUT_STREAM))
#define G_FILE_OUTPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILE_OUTPUT_STREAM, GFileOutputStreamClass))


    typedef struct _GFileOutputStreamClass GFileOutputStreamClass;

    typedef struct _GFileOutputStreamPrivate GFileOutputStreamPrivate;

    struct _GFileOutputStream {
	GOutputStream parent_instance;
	GFileOutputStreamPrivate *priv;
    };

    struct _GFileOutputStreamClass {
	GOutputStreamClass parent_class;
	 goffset(*tell) (GFileOutputStream * stream);
	 gboolean(*can_seek) (GFileOutputStream * stream);
	 gboolean(*seek) (GFileOutputStream * stream, goffset offset,
			  GSeekType type, GCancellable * cancellable,
			  GError * *error);
	 gboolean(*can_truncate) (GFileOutputStream * stream);
	 gboolean(*truncate_fn) (GFileOutputStream * stream, goffset size,
				 GCancellable * cancellable,
				 GError * *error);
	GFileInfo *(*query_info) (GFileOutputStream * stream,
				  const char *attributes,
				  GCancellable * cancellable,
				  GError * *error);
	void (*query_info_async) (GFileOutputStream * stream,
				  const char *attributes, int io_priority,
				  GCancellable * cancellable,
				  GAsyncReadyCallback callback,
				  gpointer user_data);
	GFileInfo *(*query_info_finish) (GFileOutputStream * stream,
					 GAsyncResult * result,
					 GError * *error);
	char *(*get_etag) (GFileOutputStream * stream);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern char *g_file_output_stream_get_etag(GFileOutputStream * stream);
    extern GType g_file_output_stream_get_type(void);
    extern GFileInfo *g_file_output_stream_query_info(GFileOutputStream *
						      stream,
						      const char
						      *attributes,
						      GCancellable *
						      cancellable,
						      GError * *error);
    extern void g_file_output_stream_query_info_async(GFileOutputStream *
						      stream,
						      const char
						      *attributes,
						      int io_priority,
						      GCancellable *
						      cancellable,
						      GAsyncReadyCallback
						      callback,
						      gpointer user_data);
    extern GFileInfo
	*g_file_output_stream_query_info_finish(GFileOutputStream * stream,
						GAsyncResult * result,
						GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
