#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSNAMEWATCHING_H_
#define _GLIB_2_0_GIO_GDBUSNAMEWATCHING_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef void (*GBusNameAppearedCallback) (GDBusConnection * connection,
					      const gchar * name,
					      const gchar * name_owner,
					      gpointer user_data);

    typedef void (*GBusNameVanishedCallback) (GDBusConnection * connection,
					      const gchar * name,
					      gpointer user_data);


/* Function prototypes */

    extern void g_bus_unwatch_name(guint watcher_id);
    extern guint g_bus_watch_name(GBusType bus_type, const gchar * name,
				  GBusNameWatcherFlags flags,
				  GBusNameAppearedCallback
				  name_appeared_handler,
				  GBusNameVanishedCallback
				  name_vanished_handler,
				  gpointer user_data,
				  GDestroyNotify user_data_free_func);
    extern guint g_bus_watch_name_on_connection(GDBusConnection *
						connection,
						const gchar * name,
						GBusNameWatcherFlags flags,
						GBusNameAppearedCallback
						name_appeared_handler,
						GBusNameVanishedCallback
						name_vanished_handler,
						gpointer user_data,
						GDestroyNotify
						user_data_free_func);
    extern guint
	g_bus_watch_name_on_connection_with_closures(GDBusConnection *
						     connection,
						     const gchar * name,
						     GBusNameWatcherFlags
						     flags,
						     GClosure *
						     name_appeared_closure,
						     GClosure *
						     name_vanished_closure);
    extern guint g_bus_watch_name_with_closures(GBusType bus_type,
						const gchar * name,
						GBusNameWatcherFlags flags,
						GClosure *
						name_appeared_closure,
						GClosure *
						name_vanished_closure);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
