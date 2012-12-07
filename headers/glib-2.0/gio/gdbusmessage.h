#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSMESSAGE_H_
#define _GLIB_2_0_GIO_GDBUSMESSAGE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_MESSAGE	(g_dbus_message_get_type ())
#define G_DBUS_MESSAGE(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_MESSAGE, GDBusMessage))
#define G_IS_DBUS_MESSAGE(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_MESSAGE))



/* Function prototypes */

    extern gssize g_dbus_message_bytes_needed(guchar * blob,
					      gsize blob_len,
					      GError * *error);
    extern GDBusMessage *g_dbus_message_copy(GDBusMessage * message,
					     GError * *error);
    extern const char *g_dbus_message_get_arg0(GDBusMessage * message);
    extern GVariant *g_dbus_message_get_body(GDBusMessage * message);
    extern GDBusMessageByteOrder g_dbus_message_get_byte_order(GDBusMessage
							       * message);
    extern const char *g_dbus_message_get_destination(GDBusMessage *
						      message);
    extern const char *g_dbus_message_get_error_name(GDBusMessage *
						     message);
    extern GDBusMessageFlags g_dbus_message_get_flags(GDBusMessage *
						      message);
    extern GVariant *g_dbus_message_get_header(GDBusMessage * message,
					       GDBusMessageHeaderField
					       header_field);
    extern guchar *g_dbus_message_get_header_fields(GDBusMessage *
						    message);
    extern const char *g_dbus_message_get_interface(GDBusMessage *
						    message);
    extern gboolean g_dbus_message_get_locked(GDBusMessage * message);
    extern const char *g_dbus_message_get_member(GDBusMessage * message);
    extern GDBusMessageType g_dbus_message_get_message_type(GDBusMessage *
							    message);
    extern guint32 g_dbus_message_get_num_unix_fds(GDBusMessage * message);
    extern const char *g_dbus_message_get_path(GDBusMessage * message);
    extern guint32 g_dbus_message_get_reply_serial(GDBusMessage * message);
    extern const char *g_dbus_message_get_sender(GDBusMessage * message);
    extern guint32 g_dbus_message_get_serial(GDBusMessage * message);
    extern const char *g_dbus_message_get_signature(GDBusMessage *
						    message);
    extern GType g_dbus_message_get_type(void);
    extern GUnixFDList *g_dbus_message_get_unix_fd_list(GDBusMessage *
							message);
    extern void g_dbus_message_lock(GDBusMessage * message);
    extern GDBusMessage *g_dbus_message_new(void);
    extern GDBusMessage *g_dbus_message_new_from_blob(guchar * blob,
						      gsize blob_len,
						      GDBusCapabilityFlags
						      capabilities,
						      GError * *error);
    extern GDBusMessage *g_dbus_message_new_method_call(const gchar * name,
							const gchar * path,
							const gchar *
							interface_,
							const gchar *
							method);
    extern GDBusMessage *g_dbus_message_new_method_error(GDBusMessage *
							 method_call_message,
							 const gchar *
							 error_name,
							 const gchar *
							 error_message_format,
							 ...);
    extern GDBusMessage
	*g_dbus_message_new_method_error_literal(GDBusMessage *
						 method_call_message,
						 const gchar * error_name,
						 const gchar *
						 error_message);
    extern GDBusMessage
	*g_dbus_message_new_method_error_valist(GDBusMessage *
						method_call_message,
						const gchar * error_name,
						const gchar *
						error_message_format,
						void var_args);
    extern GDBusMessage *g_dbus_message_new_method_reply(GDBusMessage *
							 method_call_message);
    extern GDBusMessage *g_dbus_message_new_signal(const gchar * path,
						   const gchar *
						   interface_,
						   const gchar * signal);
    extern gchar *g_dbus_message_print(GDBusMessage * message,
				       guint indent);
    extern void g_dbus_message_set_body(GDBusMessage * message,
					GVariant * body);
    extern void g_dbus_message_set_byte_order(GDBusMessage * message,
					      GDBusMessageByteOrder
					      byte_order);
    extern void g_dbus_message_set_destination(GDBusMessage * message,
					       const gchar * value);
    extern void g_dbus_message_set_error_name(GDBusMessage * message,
					      const gchar * value);
    extern void g_dbus_message_set_flags(GDBusMessage * message,
					 GDBusMessageFlags flags);
    extern void g_dbus_message_set_header(GDBusMessage * message,
					  GDBusMessageHeaderField
					  header_field, GVariant * value);
    extern void g_dbus_message_set_interface(GDBusMessage * message,
					     const gchar * value);
    extern void g_dbus_message_set_member(GDBusMessage * message,
					  const gchar * value);
    extern void g_dbus_message_set_message_type(GDBusMessage * message,
						GDBusMessageType type);
    extern void g_dbus_message_set_num_unix_fds(GDBusMessage * message,
						guint32 value);
    extern void g_dbus_message_set_path(GDBusMessage * message,
					const gchar * value);
    extern void g_dbus_message_set_reply_serial(GDBusMessage * message,
						guint32 value);
    extern void g_dbus_message_set_sender(GDBusMessage * message,
					  const gchar * value);
    extern void g_dbus_message_set_serial(GDBusMessage * message,
					  guint32 serial);
    extern void g_dbus_message_set_signature(GDBusMessage * message,
					     const gchar * value);
    extern void g_dbus_message_set_unix_fd_list(GDBusMessage * message,
						GUnixFDList * fd_list);
    extern guchar *g_dbus_message_to_blob(GDBusMessage * message,
					  gsize * out_size,
					  GDBusCapabilityFlags
					  capabilities, GError * *error);
    extern gboolean g_dbus_message_to_gerror(GDBusMessage * message,
					     GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
