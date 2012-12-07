#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSSERVER_H_
#define _GLIB_2_0_GIO_GDBUSSERVER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_SERVER	(g_dbus_server_get_type ())
#define G_DBUS_SERVER(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_SERVER, GDBusServer))
#define G_IS_DBUS_SERVER(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_SERVER))



/* Function prototypes */

    extern const char *g_dbus_server_get_client_address(GDBusServer *
							server);
    extern GDBusServerFlags g_dbus_server_get_flags(GDBusServer * server);
    extern const char *g_dbus_server_get_guid(GDBusServer * server);
    extern GType g_dbus_server_get_type(void);
    extern gboolean g_dbus_server_is_active(GDBusServer * server);
    extern GDBusServer *g_dbus_server_new_sync(const gchar * address,
					       GDBusServerFlags flags,
					       const gchar * guid,
					       GDBusAuthObserver *
					       observer,
					       GCancellable * cancellable,
					       GError * *error);
    extern void g_dbus_server_start(GDBusServer * server);
    extern void g_dbus_server_stop(GDBusServer * server);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
