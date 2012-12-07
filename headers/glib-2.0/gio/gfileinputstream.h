#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GFILEINPUTSTREAM_H_
#define _GLIB_2_0_GIO_GFILEINPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/ginputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_FILE_INPUT_STREAM	(g_file_input_stream_get_type ())
#define G_FILE_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILE_INPUT_STREAM, GFileInputStreamClass))
#define G_IS_FILE_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILE_INPUT_STREAM))
#define G_FILE_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILE_INPUT_STREAM, GFileInputStream))
#define G_IS_FILE_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILE_INPUT_STREAM))
#define G_FILE_INPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILE_INPUT_STREAM, GFileInputStreamClass))


    typedef struct _GFileInputStreamClass GFileInputStreamClass;

    typedef struct _GFileInputStreamPrivate GFileInputStreamPrivate;

    struct _GFileInputStream {
	GInputStream parent_instance;
	GFileInputStreamPrivate *priv;
    };

    struct _GFileInputStreamClass {
	GInputStreamClass parent_class;
	 goffset(*tell) (GFileInputStream * stream);
	 gboolean(*can_seek) (GFileInputStream * stream);
	 gboolean(*seek) (GFileInputStream * stream, goffset offset,
			  GSeekType type, GCancellable * cancellable,
			  GError * *error);
	GFileInfo *(*query_info) (GFileInputStream * stream,
				  const char *attributes,
				  GCancellable * cancellable,
				  GError * *error);
	void (*query_info_async) (GFileInputStream * stream,
				  const char *attributes, int io_priority,
				  GCancellable * cancellable,
				  GAsyncReadyCallback callback,
				  gpointer user_data);
	GFileInfo *(*query_info_finish) (GFileInputStream * stream,
					 GAsyncResult * result,
					 GError * *error);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern GType g_file_input_stream_get_type(void);
    extern GFileInfo *g_file_input_stream_query_info(GFileInputStream *
						     stream,
						     const char
						     *attributes,
						     GCancellable *
						     cancellable,
						     GError * *error);
    extern void g_file_input_stream_query_info_async(GFileInputStream *
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
	*g_file_input_stream_query_info_finish(GFileInputStream * stream,
					       GAsyncResult * result,
					       GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
