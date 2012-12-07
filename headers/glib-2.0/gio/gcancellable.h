#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GCANCELLABLE_H_
#define _GLIB_2_0_GIO_GCANCELLABLE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_CANCELLABLE	(g_cancellable_get_type ())
#define G_CANCELLABLE_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_CANCELLABLE, GCancellableClass))
#define G_IS_CANCELLABLE_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_CANCELLABLE))
#define G_CANCELLABLE(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_CANCELLABLE, GCancellable))
#define G_IS_CANCELLABLE(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_CANCELLABLE))
#define G_CANCELLABLE_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_CANCELLABLE, GCancellableClass))


    typedef struct _GCancellableClass GCancellableClass;

    typedef struct _GCancellablePrivate GCancellablePrivate;

    struct _GCancellable {
	GObject parent_instance;
	GCancellablePrivate *priv;
    };

    struct _GCancellableClass {
	GObjectClass parent_class;
	void (*cancelled) (GCancellable * cancellable);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern void g_cancellable_cancel(GCancellable * cancellable);
    extern gulong g_cancellable_connect(GCancellable * cancellable,
					GCallback callback, gpointer data,
					GDestroyNotify data_destroy_func);
    extern void g_cancellable_disconnect(GCancellable * cancellable,
					 gulong handler_id);
    extern GCancellable *g_cancellable_get_current(void);
    extern int g_cancellable_get_fd(GCancellable * cancellable);
    extern GType g_cancellable_get_type(void);
    extern gboolean g_cancellable_is_cancelled(GCancellable * cancellable);
    extern gboolean g_cancellable_make_pollfd(GCancellable * cancellable,
					      GPollFD * pollfd);
    extern GCancellable *g_cancellable_new(void);
    extern void g_cancellable_pop_current(GCancellable * cancellable);
    extern void g_cancellable_push_current(GCancellable * cancellable);
    extern void g_cancellable_release_fd(GCancellable * cancellable);
    extern void g_cancellable_reset(GCancellable * cancellable);
    extern gboolean g_cancellable_set_error_if_cancelled(GCancellable *
							 cancellable,
							 GError * *error);
    extern GSource *g_cancellable_source_new(GCancellable * cancellable);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
