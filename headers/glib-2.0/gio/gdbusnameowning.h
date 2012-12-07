#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSNAMEOWNING_H_
#define _GLIB_2_0_GIO_GDBUSNAMEOWNING_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef void (*GBusAcquiredCallback) (GDBusConnection * connection,
					  const gchar * name,
					  gpointer user_data);

    typedef void (*GBusNameAcquiredCallback) (GDBusConnection * connection,
					      const gchar * name,
					      gpointer user_data);

    typedef void (*GBusNameLostCallback) (GDBusConnection * connection,
					  const gchar * name,
					  gpointer user_data);


/* Function prototypes */

    extern guint g_bus_own_name(GBusType bus_type, const gchar * name,
				GBusNameOwnerFlags flags,
				GBusAcquiredCallback bus_acquired_handler,
				GBusNameAcquiredCallback
				name_acquired_handler,
				GBusNameLostCallback name_lost_handler,
				gpointer user_data,
				GDestroyNotify user_data_free_func);
    extern guint g_bus_own_name_on_connection(GDBusConnection * connection,
					      const gchar * name,
					      GBusNameOwnerFlags flags,
					      GBusNameAcquiredCallback
					      name_acquired_handler,
					      GBusNameLostCallback
					      name_lost_handler,
					      gpointer user_data,
					      GDestroyNotify
					      user_data_free_func);
    extern guint g_bus_own_name_on_connection_with_closures(GDBusConnection
							    * connection,
							    const gchar *
							    name,
							    GBusNameOwnerFlags
							    flags,
							    GClosure *
							    name_acquired_closure,
							    GClosure *
							    name_lost_closure);
    extern guint g_bus_own_name_with_closures(GBusType bus_type,
					      const gchar * name,
					      GBusNameOwnerFlags flags,
					      GClosure *
					      bus_acquired_closure,
					      GClosure *
					      name_acquired_closure,
					      GClosure *
					      name_lost_closure);
    extern void g_bus_unown_name(guint owner_id);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
