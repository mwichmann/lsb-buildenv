#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSAUTHOBSERVER_H_
#define _GLIB_2_0_GIO_GDBUSAUTHOBSERVER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_AUTH_OBSERVER	(g_dbus_auth_observer_get_type ())
#define G_DBUS_AUTH_OBSERVER(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_AUTH_OBSERVER, GDBusAuthObserver))
#define G_IS_DBUS_AUTH_OBSERVER(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_AUTH_OBSERVER))



/* Function prototypes */

    extern gboolean
	g_dbus_auth_observer_authorize_authenticated_peer(GDBusAuthObserver
							  * observer,
							  GIOStream *
							  stream,
							  GCredentials *
							  credentials);
    extern GType g_dbus_auth_observer_get_type(void);
    extern GDBusAuthObserver *g_dbus_auth_observer_new(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
