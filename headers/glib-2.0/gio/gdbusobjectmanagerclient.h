#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSOBJECTMANAGERCLIENT_H_
#define _GLIB_2_0_GIO_GDBUSOBJECTMANAGERCLIENT_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_OBJECT_MANAGER_CLIENT	(g_dbus_object_manager_client_get_type ())
#define G_DBUS_OBJECT_MANAGER_CLIENT_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DBUS_OBJECT_MANAGER_CLIENT, GDBusObjectManagerClientClass))
#define G_IS_DBUS_OBJECT_MANAGER_CLIENT_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DBUS_OBJECT_MANAGER_CLIENT))
#define G_DBUS_OBJECT_MANAGER_CLIENT(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_OBJECT_MANAGER_CLIENT, GDBusObjectManagerClient))
#define G_IS_DBUS_OBJECT_MANAGER_CLIENT(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_OBJECT_MANAGER_CLIENT))
#define G_DBUS_OBJECT_MANAGER_CLIENT_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DBUS_OBJECT_MANAGER_CLIENT, GDBusObjectManagerClientClass))


    typedef struct _GDBusObjectManagerClientClass
	GDBusObjectManagerClientClass;

    typedef struct _GDBusObjectManagerClientPrivate
	GDBusObjectManagerClientPrivate;

    struct _GDBusObjectManagerClient {
	GObject parent_instance;
	GDBusObjectManagerClientPrivate *priv;
    };

    struct _GDBusObjectManagerClientClass {
	GObjectClass parent_class;
	void (*interface_proxy_signal) (GDBusObjectManagerClient * manager,
					GDBusObjectProxy * object_proxy,
					GDBusProxy * interface_proxy,
					const gchar * sender_name,
					const gchar * signal_name,
					GVariant * parameters);
	void (*interface_proxy_properties_changed)
	    (GDBusObjectManagerClient * manager,
	     GDBusObjectProxy * object_proxy, GDBusProxy * interface_proxy,
	     GVariant * changed properties,
	     const gchar * const *invalidated_properties);
	gpointer padding[8];
    };


/* Function prototypes */

    extern GDBusConnection
	*g_dbus_object_manager_client_get_connection
	(GDBusObjectManagerClient * manager);
    extern GDBusObjectManagerClientFlags
	g_dbus_object_manager_client_get_flags(GDBusObjectManagerClient *
					       manager);
    extern const char
	*g_dbus_object_manager_client_get_name(GDBusObjectManagerClient *
					       manager);
    extern gchar
	*g_dbus_object_manager_client_get_name_owner
	(GDBusObjectManagerClient * manager);
    extern GType g_dbus_object_manager_client_get_type(void);
    extern void g_dbus_object_manager_client_new(GDBusConnection *
						 connection,
						 GDBusObjectManagerClientFlags
						 flags, const gchar * name,
						 const gchar * object_path,
						 GDBusProxyTypeFunc
						 get_proxy_type_func,
						 gpointer
						 get_proxy_type_user_data,
						 GDestroyNotify
						 get_proxy_type_destroy_notify,
						 GCancellable *
						 cancellable,
						 GAsyncReadyCallback
						 callback,
						 gpointer user_data);
    extern GDBusObjectManager
	*g_dbus_object_manager_client_new_finish(GAsyncResult * res,
						 GError * *error);
    extern void g_dbus_object_manager_client_new_for_bus(GBusType bus_type,
							 GDBusObjectManagerClientFlags
							 flags,
							 const gchar *
							 name,
							 const gchar *
							 object_path,
							 GDBusProxyTypeFunc
							 get_proxy_type_func,
							 gpointer
							 get_proxy_type_user_data,
							 GDestroyNotify
							 get_proxy_type_destroy_notify,
							 GCancellable *
							 cancellable,
							 GAsyncReadyCallback
							 callback,
							 gpointer
							 user_data);
    extern GDBusObjectManager
	*g_dbus_object_manager_client_new_for_bus_finish(GAsyncResult *
							 res,
							 GError * *error);
    extern GDBusObjectManager
	*g_dbus_object_manager_client_new_for_bus_sync(GBusType bus_type,
						       GDBusObjectManagerClientFlags
						       flags,
						       const gchar * name,
						       const gchar *
						       object_path,
						       GDBusProxyTypeFunc
						       get_proxy_type_func,
						       gpointer
						       get_proxy_type_user_data,
						       GDestroyNotify
						       get_proxy_type_destroy_notify,
						       GCancellable *
						       cancellable,
						       GError * *error);
    extern GDBusObjectManager
	*g_dbus_object_manager_client_new_sync(GDBusConnection *
					       connection,
					       GDBusObjectManagerClientFlags
					       flags, const gchar * name,
					       const gchar * object_path,
					       GDBusProxyTypeFunc
					       get_proxy_type_func,
					       gpointer
					       get_proxy_type_user_data,
					       GDestroyNotify
					       get_proxy_type_destroy_notify,
					       GCancellable * cancellable,
					       GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
