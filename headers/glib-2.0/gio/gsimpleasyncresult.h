#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSIMPLEASYNCRESULT_H_
#define _GLIB_2_0_GIO_GSIMPLEASYNCRESULT_H_

#include <stdarg.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SIMPLE_ASYNC_RESULT	(g_simple_async_result_get_type ())
#define G_SIMPLE_ASYNC_RESULT_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_SIMPLE_ASYNC_RESULT, GSimpleAsyncResultClass))
#define G_IS_SIMPLE_ASYNC_RESULT_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_SIMPLE_ASYNC_RESULT))
#define G_SIMPLE_ASYNC_RESULT(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_SIMPLE_ASYNC_RESULT, GSimpleAsyncResult))
#define G_IS_SIMPLE_ASYNC_RESULT(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_SIMPLE_ASYNC_RESULT))
#define G_SIMPLE_ASYNC_RESULT_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_SIMPLE_ASYNC_RESULT, GSimpleAsyncResultClass))


    typedef struct _GSimpleAsyncResultClass GSimpleAsyncResultClass;


/* Function prototypes */

    extern void g_simple_async_report_error_in_idle(GObject * object,
						    GAsyncReadyCallback
						    callback,
						    gpointer user_data,
						    GQuark domain,
						    gint code,
						    const char *format,
						    ...);
    extern void g_simple_async_report_gerror_in_idle(GObject * object,
						     GAsyncReadyCallback
						     callback,
						     gpointer user_data,
						     const GError * error);
    extern void g_simple_async_report_take_gerror_in_idle(GObject * object,
							  GAsyncReadyCallback
							  callback,
							  gpointer
							  user_data,
							  GError * error);
    extern void g_simple_async_result_complete(GSimpleAsyncResult *
					       simple);
    extern void g_simple_async_result_complete_in_idle(GSimpleAsyncResult *
						       simple);
    extern gboolean
	g_simple_async_result_get_op_res_gboolean(GSimpleAsyncResult *
						  simple);
    extern gpointer
	g_simple_async_result_get_op_res_gpointer(GSimpleAsyncResult *
						  simple);
    extern gssize
	g_simple_async_result_get_op_res_gssize(GSimpleAsyncResult *
						simple);
    extern gpointer g_simple_async_result_get_source_tag(GSimpleAsyncResult
							 * simple);
    extern GType g_simple_async_result_get_type(void);
    extern gboolean g_simple_async_result_is_valid(GAsyncResult * result,
						   GObject * source,
						   gpointer source_tag);
    extern GSimpleAsyncResult *g_simple_async_result_new(GObject *
							 source_object,
							 GAsyncReadyCallback
							 callback,
							 gpointer
							 user_data,
							 gpointer
							 source_tag);
    extern GSimpleAsyncResult *g_simple_async_result_new_error(GObject *
							       source_object,
							       GAsyncReadyCallback
							       callback,
							       gpointer
							       user_data,
							       GQuark
							       domain,
							       gint code,
							       const char
							       *format,
							       ...);
    extern GSimpleAsyncResult *g_simple_async_result_new_from_error(GObject
								    *
								    source_object,
								    GAsyncReadyCallback
								    callback,
								    gpointer
								    user_data,
								    const
								    GError
								    *
								    error);
    extern GSimpleAsyncResult *g_simple_async_result_new_take_error(GObject
								    *
								    source_object,
								    GAsyncReadyCallback
								    callback,
								    gpointer
								    user_data,
								    GError
								    *
								    error);
    extern gboolean
	g_simple_async_result_propagate_error(GSimpleAsyncResult * simple,
					      GError * *dest);
    extern void g_simple_async_result_run_in_thread(GSimpleAsyncResult *
						    simple,
						    GSimpleAsyncThreadFunc
						    func, int io_priority,
						    GCancellable *
						    cancellable);
    extern void
	g_simple_async_result_set_check_cancellable(GSimpleAsyncResult *
						    simple,
						    GCancellable *
						    check_cancellable);
    extern void g_simple_async_result_set_error(GSimpleAsyncResult *
						simple, GQuark domain,
						gint code,
						const char *format, ...);
    extern void g_simple_async_result_set_error_va(GSimpleAsyncResult *
						   simple, GQuark domain,
						   gint code,
						   const char *format,
						   va_list args);
    extern void g_simple_async_result_set_from_error(GSimpleAsyncResult *
						     simple,
						     const GError * error);
    extern void
	g_simple_async_result_set_handle_cancellation(GSimpleAsyncResult *
						      simple,
						      gboolean
						      handle_cancellation);
    extern void
	g_simple_async_result_set_op_res_gboolean(GSimpleAsyncResult *
						  simple, gboolean op_res);
    extern void
	g_simple_async_result_set_op_res_gpointer(GSimpleAsyncResult *
						  simple, gpointer op_res,
						  GDestroyNotify
						  destroy_op_res);
    extern void g_simple_async_result_set_op_res_gssize(GSimpleAsyncResult
							* simple,
							gssize op_res);
    extern void g_simple_async_result_take_error(GSimpleAsyncResult *
						 simple, GError * error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
