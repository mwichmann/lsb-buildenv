#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSCONNECTION_H_
#define _GLIB_2_0_GIO_GDBUSCONNECTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_CONNECTION	(g_dbus_connection_get_type ())
#define G_DBUS_CONNECTION(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_CONNECTION, GDBusConnection))
#define G_IS_DBUS_CONNECTION(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_CONNECTION))


    typedef void (*GDBusInterfaceMethodCallFunc) (GDBusConnection *
						  connection,
						  const gchar * sender,
						  const gchar *
						  object_path,
						  const gchar *
						  interface_name,
						  const gchar *
						  method_name,
						  GVariant * parameters,
						  GDBusMethodInvocation *
						  invocation,
						  gpointer user_data);

    typedef GVariant *(*GDBusInterfaceGetPropertyFunc) (GDBusConnection *
							connection,
							const gchar *
							sender,
							const gchar *
							object_path,
							const gchar *
							interface_name,
							const gchar *
							property_name,
							GError * *error,
							gpointer
							user_data);

    typedef gboolean(*GDBusInterfaceSetPropertyFunc) (GDBusConnection *
						      connection,
						      const gchar * sender,
						      const gchar *
						      object_path,
						      const gchar *
						      interface_name,
						      const gchar *
						      property_name,
						      GVariant * value,
						      GError * *error,
						      gpointer user_data);

    typedef gchar **(*GDBusSubtreeEnumerateFunc) (GDBusConnection *
						  connection,
						  const gchar * sender,
						  const gchar *
						  object_path,
						  gpointer user_data);

    typedef GDBusInterfaceInfo
	**(*GDBusSubtreeIntrospectFunc) (GDBusConnection * connection,
					 const gchar * sender,
					 const gchar * object_path,
					 const gchar * node,
					 gpointer user_data);

    typedef const GDBusInterfaceVTable
	*(*GDBusSubtreeDispatchFunc) (GDBusConnection * connection,
				      const gchar * sender,
				      const gchar * object_path,
				      const gchar * interface_name,
				      const gchar * node,
				      gpointer * out_user_data,
				      gpointer user_data);

    typedef void (*GDBusSignalCallback) (GDBusConnection * connection,
					 const gchar * sender,
					 const gchar * object_path,
					 const gchar * interface_name,
					 const gchar * signal_name,
					 GVariant * paramters,
					 gpointer user_data);

    typedef GDBusMessage *(*GDBusMessageFilterFunction) (GDBusConnection *
							 connection,
							 GDBusMessage *
							 message,
							 gboolean incoming,
							 gpointer
							 user_data);

    struct _GDBusInterfaceVTable {
	GDBusInterfaceMethodCallFunc method_call;
	GDBusInterfaceGetPropertyFunc get_property;
	GDBusInterfaceSetPropertyFunc set_property;
	gpointer padding[8];
    };

    struct _GDBusSubtreeVTable {
	GDBusSubtreeEnumerateFunc enumerate;
	GDBusSubtreeIntrospectFunc introspect;
	GDBusSubtreeDispatchFunc dispatch;
	gpointer padding[8];
    };


/* Function prototypes */

    extern void g_bus_get(GBusType bus_type, GCancellable * cancellable,
			  GAsyncReadyCallback callback,
			  gpointer user_data);
    extern GDBusConnection *g_bus_get_finish(GAsyncResult * res,
					     GError * *error);
    extern GDBusConnection *g_bus_get_sync(GBusType bus_type,
					   GCancellable * cancellable,
					   GError * *error);
    extern guint g_dbus_connection_add_filter(GDBusConnection * connection,
					      GDBusMessageFilterFunction
					      filter_function,
					      void *user_data,
					      GDestroyNotify
					      user_data_free_func);
    extern void g_dbus_connection_call(GDBusConnection * connection,
				       const gchar * bus_name,
				       const gchar * object_path,
				       const gchar * interface_name,
				       const gchar * method_name,
				       GVariant * parameters,
				       const GVariantType * reply_type,
				       GDBusCallFlags flags,
				       gint timeout_msec,
				       GCancellable * cancellable,
				       GAsyncReadyCallback callback,
				       gpointer user_data);
    extern GVariant *g_dbus_connection_call_finish(GDBusConnection *
						   connection,
						   GAsyncResult * res,
						   GError * *error);
    extern GVariant *g_dbus_connection_call_sync(GDBusConnection *
						 connection,
						 const gchar * bus_name,
						 const gchar * object_path,
						 const gchar *
						 interface_name,
						 const gchar * method_name,
						 GVariant * parameters,
						 const GVariantType *
						 reply_type,
						 GDBusCallFlags flags,
						 gint timeout_msec,
						 GCancellable *
						 cancellable,
						 GError * *error);
    extern void g_dbus_connection_call_with_unix_fd_list(GDBusConnection *
							 connection,
							 const gchar *
							 bus_name,
							 const gchar *
							 object_path,
							 const gchar *
							 interface_name,
							 const gchar *
							 method_name,
							 GVariant *
							 parameters,
							 const GVariantType
							 * reply_type,
							 GDBusCallFlags
							 flags,
							 gint timeout_msec,
							 GUnixFDList *
							 fd_list,
							 GCancellable *
							 cancellable,
							 GAsyncReadyCallback
							 callback,
							 gpointer
							 user_data);
    extern GVariant
	*g_dbus_connection_call_with_unix_fd_list_finish(GDBusConnection *
							 connection,
							 GUnixFDList *
							 *out_fd_list,
							 GAsyncResult *
							 res,
							 GError * *error);
    extern GVariant
	*g_dbus_connection_call_with_unix_fd_list_sync(GDBusConnection *
						       connection,
						       const gchar *
						       bus_name,
						       const gchar *
						       object_path,
						       const gchar *
						       interface_name,
						       const gchar *
						       method_name,
						       GVariant *
						       parameters,
						       const GVariantType *
						       reply_type,
						       GDBusCallFlags
						       flags,
						       gint timeout_msec,
						       GUnixFDList *
						       fd_list,
						       GUnixFDList *
						       *out_fd_list,
						       GCancellable *
						       cancellable,
						       GError * *error);
    extern void g_dbus_connection_close(GDBusConnection * connection,
					GCancellable * cancellable,
					GAsyncReadyCallback callback,
					gpointer user_data);
    extern gboolean g_dbus_connection_close_finish(GDBusConnection *
						   connection,
						   GAsyncResult * res,
						   GError * *error);
    extern gboolean g_dbus_connection_close_sync(GDBusConnection *
						 connection,
						 GCancellable *
						 cancellable,
						 GError * *error);
    extern gboolean g_dbus_connection_emit_signal(GDBusConnection *
						  connection,
						  const gchar *
						  destination_bus_name,
						  const gchar *
						  object_path,
						  const gchar *
						  interface_name,
						  const gchar *
						  signal_name,
						  GVariant * parameters,
						  GError * *error);
    extern void g_dbus_connection_flush(GDBusConnection * connection,
					GCancellable * cancellable,
					GAsyncReadyCallback callback,
					gpointer user_data);
    extern gboolean g_dbus_connection_flush_finish(GDBusConnection *
						   connection,
						   GAsyncResult * res,
						   GError * *error);
    extern gboolean g_dbus_connection_flush_sync(GDBusConnection *
						 connection,
						 GCancellable *
						 cancellable,
						 GError * *error);
    extern GDBusCapabilityFlags
	g_dbus_connection_get_capabilities(GDBusConnection * connection);
    extern gboolean g_dbus_connection_get_exit_on_close(GDBusConnection *
							connection);
    extern const char *g_dbus_connection_get_guid(GDBusConnection *
						  connection);
    extern GCredentials
	*g_dbus_connection_get_peer_credentials(GDBusConnection *
						connection);
    extern GIOStream *g_dbus_connection_get_stream(GDBusConnection *
						   connection);
    extern GType g_dbus_connection_get_type(void);
    extern const char *g_dbus_connection_get_unique_name(GDBusConnection *
							 connection);
    extern gboolean g_dbus_connection_is_closed(GDBusConnection *
						connection);
    extern void g_dbus_connection_new(GIOStream * stream,
				      const gchar * guid,
				      GDBusConnectionFlags flags,
				      GDBusAuthObserver * observer,
				      GCancellable * cancellable,
				      GAsyncReadyCallback callback,
				      gpointer user_data);
    extern GDBusConnection *g_dbus_connection_new_finish(GAsyncResult *
							 res,
							 GError * *error);
    extern void g_dbus_connection_new_for_address(const gchar * address,
						  GDBusConnectionFlags
						  flags,
						  GDBusAuthObserver *
						  observer,
						  GCancellable *
						  cancellable,
						  GAsyncReadyCallback
						  callback,
						  gpointer user_data);
    extern GDBusConnection
	*g_dbus_connection_new_for_address_finish(GAsyncResult * res,
						  GError * *error);
    extern GDBusConnection *g_dbus_connection_new_for_address_sync(const
								   gchar *
								   address,
								   GDBusConnectionFlags
								   flags,
								   GDBusAuthObserver
								   *
								   observer,
								   GCancellable
								   *
								   cancellable,
								   GError *
								   *error);
    extern GDBusConnection *g_dbus_connection_new_sync(GIOStream * stream,
						       const gchar * guid,
						       GDBusConnectionFlags
						       flags,
						       GDBusAuthObserver *
						       observer,
						       GCancellable *
						       cancellable,
						       GError * *error);
    extern guint g_dbus_connection_register_object(GDBusConnection *
						   connection,
						   const gchar *
						   object_path,
						   GDBusInterfaceInfo *
						   interface_info,
						   const
						   GDBusInterfaceVTable *
						   vtable,
						   gpointer user_data,
						   GDestroyNotify
						   user_data_free_func,
						   GError * *error);
    extern guint g_dbus_connection_register_subtree(GDBusConnection *
						    connection,
						    const gchar *
						    object_path,
						    GDBusSubtreeFlags
						    flags, void *user_data,
						    GDestroyNotify
						    user_data_free_func,
						    GError * *error);
    extern void g_dbus_connection_remove_filter(GDBusConnection *
						connection,
						guint filter_id);
    extern gboolean g_dbus_connection_send_message(GDBusConnection *
						   connection,
						   GDBusMessage * message,
						   GDBusSendMessageFlags
						   flags,
						   volatile unsigned int
						   *out_serial,
						   GError * *error);
    extern void g_dbus_connection_send_message_with_reply(GDBusConnection *
							  connection,
							  GDBusMessage *
							  message,
							  GDBusSendMessageFlags
							  flags,
							  gint
							  timeout_msec,
							  volatile unsigned
							  int *out_serial,
							  GCancellable *
							  cancellable,
							  GAsyncReadyCallback
							  callback,
							  gpointer
							  user_data);
    extern GDBusMessage
	*g_dbus_connection_send_message_with_reply_finish(GDBusConnection *
							  connection,
							  GAsyncResult *
							  res,
							  GError * *error);
    extern GDBusMessage
	*g_dbus_connection_send_message_with_reply_sync(GDBusConnection *
							connection,
							GDBusMessage *
							message,
							GDBusSendMessageFlags
							flags,
							gint timeout_msec,
							volatile unsigned
							int *out_serial,
							GCancellable *
							cancellable,
							GError * *error);
    extern void g_dbus_connection_set_exit_on_close(GDBusConnection *
						    connection,
						    gboolean
						    exit_on_close);
    extern guint g_dbus_connection_signal_subscribe(GDBusConnection *
						    connection,
						    const gchar * sender,
						    const gchar *
						    interface_name,
						    const gchar * member,
						    const gchar *
						    object_path,
						    const gchar * arg0,
						    GDBusSignalFlags flags,
						    GDBusSignalCallback
						    callback,
						    void *user_data,
						    GDestroyNotify
						    user_data_free_func);
    extern void g_dbus_connection_signal_unsubscribe(GDBusConnection *
						     connection,
						     guint
						     subscription_id);
    extern void g_dbus_connection_start_message_processing(GDBusConnection
							   * connection);
    extern gboolean g_dbus_connection_unregister_object(GDBusConnection *
							connection,
							guint
							registration_id);
    extern gboolean g_dbus_connection_unregister_subtree(GDBusConnection *
							 connection,
							 guint
							 registration_id);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
