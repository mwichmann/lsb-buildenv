#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GASYNCINITABLE_H_
#define _GLIB_2_0_GIO_GASYNCINITABLE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_ASYNC_INITABLE	(g_async_initable_get_type ())
#define G_ASYNC_INITABLE(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_ASYNC_INITABLE, GAsyncInitable))
#define G_IS_ASYNC_INITABLE(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_ASYNC_INITABLE))
#define G_ASYNC_INITABLE_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_ASYNC_INITABLE, GAsyncInitableIface))
#define G_TYPE_IS_ASYNC_INITABLE(type)	(g_type_is_a ((type), G_TYPE_ASYNC_INITABLE))


    typedef struct _GAsyncInitableIface GAsyncInitableIface;

    struct _GAsyncInitableIface {
	GTypeInterface g_iface;
	void (*init_async) (GAsyncInitable * initable, int io_priority,
			    GCancellable * cancellable,
			    GAsyncReadyCallback callback,
			    gpointer user_data);
	 gboolean(*init_finish) (GAsyncInitable * initable,
				 GAsyncResult * res, GError * *error);
    };


/* Function prototypes */

    extern GType g_async_initable_get_type(void);
    extern void g_async_initable_init_async(GAsyncInitable * initable,
					    int io_priority,
					    GCancellable * cancellable,
					    GAsyncReadyCallback callback,
					    gpointer user_data);
    extern gboolean g_async_initable_init_finish(GAsyncInitable * initable,
						 GAsyncResult * res,
						 GError * *error);
    extern void g_async_initable_new_async(GType object_type,
					   int io_priority,
					   GCancellable * cancellable,
					   GAsyncReadyCallback callback,
					   gpointer user_data,
					   const char *first_property_name,
					   ...);
    extern GObject *g_async_initable_new_finish(GAsyncInitable * initable,
						GAsyncResult * res,
						GError * *error);
    extern void g_async_initable_new_valist_async(GType object_type,
						  const char
						  *first_property_name,
						  void var_args,
						  int io_priority,
						  GCancellable *
						  cancellable,
						  GAsyncReadyCallback
						  callback,
						  gpointer user_data);
    extern void g_async_initable_newv_async(GType object_type,
					    guint n_parameters,
					    GParameter * parameters,
					    int io_priority,
					    GCancellable * cancellable,
					    GAsyncReadyCallback callback,
					    gpointer user_data);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
