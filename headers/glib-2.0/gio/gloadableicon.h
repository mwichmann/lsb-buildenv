#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GLOADABLEICON_H_
#define _GLIB_2_0_GIO_GLOADABLEICON_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_LOADABLE_ICON	(g_loadable_icon_get_type ())
#define G_LOADABLE_ICON(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_LOADABLE_ICON, GLoadableIcon))
#define G_IS_LOADABLE_ICON(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_LOADABLE_ICON))
#define G_LOADABLE_ICON_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_LOADABLE_ICON, GLoadableIconIface))


    typedef struct _GLoadableIconIface GLoadableIconIface;

    struct _GLoadableIconIface {
	GTypeInterface g_iface;
	GInputStream *(*load) (GLoadableIcon * icon, int size, char **type,
			       GCancellable * cancellable,
			       GError * *error);
	void (*load_async) (GLoadableIcon * icon, int size,
			    GCancellable * cancellable,
			    GAsyncReadyCallback callback,
			    gpointer user_data);
	GInputStream *(*load_finish) (GLoadableIcon * icon,
				      GAsyncResult * res, char **type,
				      GError * *error);
    };


/* Function prototypes */

    extern GType g_loadable_icon_get_type(void);
    extern GInputStream *g_loadable_icon_load(GLoadableIcon * icon,
					      int size, char **type,
					      GCancellable * cancellable,
					      GError * *error);
    extern void g_loadable_icon_load_async(GLoadableIcon * icon, int size,
					   GCancellable * cancellable,
					   GAsyncReadyCallback callback,
					   gpointer user_data);
    extern GInputStream *g_loadable_icon_load_finish(GLoadableIcon * icon,
						     GAsyncResult * res,
						     char **type,
						     GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
