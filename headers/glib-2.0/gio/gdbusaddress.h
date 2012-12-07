#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSADDRESS_H_
#define _GLIB_2_0_GIO_GDBUSADDRESS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern gchar *g_dbus_address_get_for_bus_sync(GBusType bus_type,
						  GCancellable *
						  cancellable,
						  GError * *error);
    extern void g_dbus_address_get_stream(const gchar * address,
					  GCancellable * cancellable,
					  GAsyncReadyCallback callback,
					  gpointer user_data);
    extern GIOStream *g_dbus_address_get_stream_finish(GAsyncResult * res,
						       gchar * *out_guid,
						       GError * *error);
    extern GIOStream *g_dbus_address_get_stream_sync(const gchar * address,
						     gchar * *out_guid,
						     GCancellable *
						     cancellable,
						     GError * *error);
    extern gboolean g_dbus_is_address(const gchar * string);
    extern gboolean g_dbus_is_supported_address(const gchar * string,
						GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
