#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GASYNCRESULT_H_
#define _GLIB_2_0_GIO_GASYNCRESULT_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_ASYNC_RESULT	(g_async_result_get_type ())
#define G_ASYNC_RESULT(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_ASYNC_RESULT, GAsyncResult))
#define G_IS_ASYNC_RESULT(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_ASYNC_RESULT))
#define G_ASYNC_RESULT_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_ASYNC_RESULT, GAsyncResultIface))


    typedef struct _GAsyncResultIface GAsyncResultIface;

    struct _GAsyncResultIface {
	GTypeInterface g_iface;
	 gpointer(*get_user_data) (GAsyncResult * res);
	GObject *(*get_source_object) (GAsyncResult * res);
    };


/* Function prototypes */

    extern GObject *g_async_result_get_source_object(GAsyncResult * res);
    extern GType g_async_result_get_type(void);
    extern gpointer g_async_result_get_user_data(GAsyncResult * res);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
