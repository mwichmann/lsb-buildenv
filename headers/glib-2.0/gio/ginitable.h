#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GINITABLE_H_
#define _GLIB_2_0_GIO_GINITABLE_H_

#include <stdarg.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_INITABLE	(g_initable_get_type ())
#define G_INITABLE(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_INITABLE, GInitable))
#define G_IS_INITABLE(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_INITABLE))
#define G_INITABLE_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_INITABLE, GInitableIface))
#define G_TYPE_IS_INITABLE(type)	(g_type_is_a ((type), G_TYPE_INITABLE))


    typedef struct _GInitableIface GInitableIface;

    struct _GInitableIface {
	GTypeInterface g_iface;
	 gboolean(*init) (GInitable * initable, GCancellable * cancellable,
			  GError * *error);
    };


/* Function prototypes */

    extern GType g_initable_get_type(void);
    extern gboolean g_initable_init(GInitable * initable,
				    GCancellable * cancellable,
				    GError * *error);
    extern gpointer g_initable_new(GType object_type,
				   GCancellable * cancellable,
				   GError * *error,
				   const gchar * first_property_name, ...);
    extern GObject *g_initable_new_valist(GType object_type,
					  const gchar *
					  first_property_name,
					  va_list var_args,
					  GCancellable * cancellable,
					  GError * *error);
    extern gpointer g_initable_newv(GType object_type, guint n_parameters,
				    GParameter * parameters,
				    GCancellable * cancellable,
				    GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
