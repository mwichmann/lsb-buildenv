#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GFILEENUMERATOR_H_
#define _GLIB_2_0_GIO_GFILEENUMERATOR_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_FILE_ENUMERATOR	(g_file_enumerator_get_type ())
#define G_FILE_ENUMERATOR_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILE_ENUMERATOR, GFileEnumeratorClass))
#define G_IS_FILE_ENUMERATOR_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILE_ENUMERATOR))
#define G_FILE_ENUMERATOR(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILE_ENUMERATOR, GFileEnumerator))
#define G_IS_FILE_ENUMERATOR(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILE_ENUMERATOR))
#define G_FILE_ENUMERATOR_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILE_ENUMERATOR, GFileEnumeratorClass))


    typedef struct _GFileEnumeratorClass GFileEnumeratorClass;

    typedef struct _GFileEnumeratorPrivate GFileEnumeratorPrivate;

    struct _GFileEnumerator {
	GObject parent_instance;
	GFileEnumeratorPrivate *priv;
    };

    struct _GFileEnumeratorClass {
	GObjectClass parent_class;
	GFileInfo *(*next_file) (GFileEnumerator * enumerator,
				 GCancellable * cancellable,
				 GError * *error);
	 gboolean(*close_fn) (GFileEnumerator * enumerator,
			      GCancellable * cancellable, GError * *error);
	void (*next_files_async) (GFileEnumerator * enumerator,
				  int num_files, int io_priority,
				  GCancellable * cancellable,
				  GAsyncReadyCallback callback,
				  gpointer user_data);
	GList *(*next_files_finish) (GFileEnumerator * enumerator,
				     GAsyncResult * result,
				     GError * *error);
	void (*close_async) (GFileEnumerator * enumerator, int io_priority,
			     GCancellable * cancellable,
			     GAsyncReadyCallback callback,
			     gpointer user_data);
	 gboolean(*close_finish) (GFileEnumerator * enumerator,
				  GAsyncResult * result, GError * *error);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
	void (*_g_reserved6) (void);
	void (*_g_reserved7) (void);
    };


/* Function prototypes */

    extern gboolean g_file_enumerator_close(GFileEnumerator * enumerator,
					    GCancellable * cancellable,
					    GError * *error);
    extern void g_file_enumerator_close_async(GFileEnumerator * enumerator,
					      int io_priority,
					      GCancellable * cancellable,
					      GAsyncReadyCallback callback,
					      gpointer user_data);
    extern gboolean g_file_enumerator_close_finish(GFileEnumerator *
						   enumerator,
						   GAsyncResult * result,
						   GError * *error);
    extern GFile *g_file_enumerator_get_container(GFileEnumerator *
						  enumerator);
    extern GType g_file_enumerator_get_type(void);
    extern gboolean g_file_enumerator_has_pending(GFileEnumerator *
						  enumerator);
    extern gboolean g_file_enumerator_is_closed(GFileEnumerator *
						enumerator);
    extern GFileInfo *g_file_enumerator_next_file(GFileEnumerator *
						  enumerator,
						  GCancellable *
						  cancellable,
						  GError * *error);
    extern void g_file_enumerator_next_files_async(GFileEnumerator *
						   enumerator,
						   int num_files,
						   int io_priority,
						   GCancellable *
						   cancellable,
						   GAsyncReadyCallback
						   callback,
						   gpointer user_data);
    extern GList *g_file_enumerator_next_files_finish(GFileEnumerator *
						      enumerator,
						      GAsyncResult *
						      result,
						      GError * *error);
    extern void g_file_enumerator_set_pending(GFileEnumerator * enumerator,
					      gboolean pending);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
