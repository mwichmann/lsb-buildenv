#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSPROXY_H_
#define _GLIB_2_0_GIO_GDBUSPROXY_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_PROXY	(g_dbus_proxy_get_type ())
#define G_DBUS_PROXY_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DBUS_PROXY, GDBusProxyClass))
#define G_IS_DBUS_PROXY_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DBUS_PROXY))
#define G_DBUS_PROXY(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_PROXY, GDBusProxy))
#define G_IS_DBUS_PROXY(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_PROXY))
#define G_DBUS_PROXY_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DBUS_PROXY, GDBusProxyClass))


    typedef struct _GDBusProxyClass GDBusProxyClass;

    typedef struct _GDBusProxyPrivate GDBusProxyPrivate;

    struct _GDBusProxy {
	GObject parent_instance;
	GDBusProxyPrivate *priv;
    };

    struct _GDBusProxyClass {
	GObjectClass parent_class;
	void (*g_properties_changed) (GDBusProxy * proxy,
				      GVariant * changed_properties,
				      const gchar *
				      const *invalidated_properties);
	void (*g_signal) (GDBusProxy * proxy, const gchar * sender_name,
			  const gchar * signal_name,
			  GVariant * parameters);
	gpointer padding[32];
    };


/* Function prototypes */

    extern void g_dbus_proxy_call(GDBusProxy * proxy,
				  const gchar * method_name,
				  GVariant * parameters,
				  GDBusCallFlags flags, gint timeout_msec,
				  GCancellable * cancellable,
				  GAsyncReadyCallback callback,
				  gpointer user_data);
    extern GVariant *g_dbus_proxy_call_finish(GDBusProxy * proxy,
					      GAsyncResult * res,
					      GError * *error);
    extern GVariant *g_dbus_proxy_call_sync(GDBusProxy * proxy,
					    const gchar * method_name,
					    GVariant * parameters,
					    GDBusCallFlags flags,
					    gint timeout_msec,
					    GCancellable * cancellable,
					    GError * *error);
    extern void g_dbus_proxy_call_with_unix_fd_list(GDBusProxy * proxy,
						    const gchar *
						    method_name,
						    GVariant * parameters,
						    GDBusCallFlags flags,
						    gint timeout_msec,
						    GUnixFDList * fd_list,
						    GCancellable *
						    cancellable,
						    GAsyncReadyCallback
						    callback,
						    gpointer user_data);
    extern GVariant *g_dbus_proxy_call_with_unix_fd_list_finish(GDBusProxy
								* proxy,
								GUnixFDList
								*
								*out_fd_list,
								GAsyncResult
								* res,
								GError *
								*error);
    extern GVariant *g_dbus_proxy_call_with_unix_fd_list_sync(GDBusProxy *
							      proxy,
							      const gchar *
							      method_name,
							      GVariant *
							      parameters,
							      GDBusCallFlags
							      flags,
							      gint
							      timeout_msec,
							      GUnixFDList *
							      fd_list,
							      GUnixFDList *
							      *out_fd_list,
							      GCancellable
							      *
							      cancellable,
							      GError *
							      *error);
    extern GVariant *g_dbus_proxy_get_cached_property(GDBusProxy * proxy,
						      const gchar *
						      property_name);
    extern gchar **g_dbus_proxy_get_cached_property_names(GDBusProxy *
							  proxy);
    extern GDBusConnection *g_dbus_proxy_get_connection(GDBusProxy *
							proxy);
    extern gint g_dbus_proxy_get_default_timeout(GDBusProxy * proxy);
    extern GDBusProxyFlags g_dbus_proxy_get_flags(GDBusProxy * proxy);
    extern GDBusInterfaceInfo *g_dbus_proxy_get_interface_info(GDBusProxy *
							       proxy);
    extern const char *g_dbus_proxy_get_interface_name(GDBusProxy * proxy);
    extern const char *g_dbus_proxy_get_name(GDBusProxy * proxy);
    extern gchar *g_dbus_proxy_get_name_owner(GDBusProxy * proxy);
    extern const char *g_dbus_proxy_get_object_path(GDBusProxy * proxy);
    extern GType g_dbus_proxy_get_type(void);
    extern void g_dbus_proxy_new(GDBusConnection * connection,
				 GDBusProxyFlags flags,
				 GDBusInterfaceInfo * info,
				 const gchar * name,
				 const gchar * object_path,
				 const gchar * interface_name,
				 GCancellable * cancellable,
				 GAsyncReadyCallback callback,
				 gpointer user_data);
    extern GDBusProxy *g_dbus_proxy_new_finish(GAsyncResult * res,
					       GError * *error);
    extern void g_dbus_proxy_new_for_bus(GBusType bus_type,
					 GDBusProxyFlags flags,
					 GDBusInterfaceInfo * info,
					 const gchar * name,
					 const gchar * object_path,
					 const gchar * interface_name,
					 GCancellable * cancellable,
					 GAsyncReadyCallback callback,
					 gpointer user_data);
    extern GDBusProxy *g_dbus_proxy_new_for_bus_finish(GAsyncResult * res,
						       GError * *error);
    extern GDBusProxy *g_dbus_proxy_new_for_bus_sync(GBusType bus_type,
						     GDBusProxyFlags flags,
						     GDBusInterfaceInfo *
						     info,
						     const gchar * name,
						     const gchar *
						     object_path,
						     const gchar *
						     interface_name,
						     GCancellable *
						     cancellable,
						     GError * *error);
    extern GDBusProxy *g_dbus_proxy_new_sync(GDBusConnection * connection,
					     GDBusProxyFlags flags,
					     GDBusInterfaceInfo * info,
					     const gchar * name,
					     const gchar * object_path,
					     const gchar * interface_name,
					     GCancellable * cancellable,
					     GError * *error);
    extern void g_dbus_proxy_set_cached_property(GDBusProxy * proxy,
						 const gchar *
						 property_name,
						 GVariant * value);
    extern void g_dbus_proxy_set_default_timeout(GDBusProxy * proxy,
						 gint timeout_msec);
    extern void g_dbus_proxy_set_interface_info(GDBusProxy * proxy,
						GDBusInterfaceInfo * info);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
