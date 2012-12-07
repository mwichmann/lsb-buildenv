#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSOCKETCONNECTION_H_
#define _GLIB_2_0_GIO_GSOCKETCONNECTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giostream.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SOCKET_CONNECTION	(g_socket_connection_get_type ())
#define G_SOCKET_CONNECTION_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SOCKET_CONNECTION, GSocketConnectionClass))
#define G_IS_SOCKET_CONNECTION_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SOCKET_CONNECTION))
#define G_SOCKET_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SOCKET_CONNECTION, GSocketConnection))
#define G_IS_SOCKET_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SOCKET_CONNECTION))
#define G_SOCKET_CONNECTION_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SOCKET_CONNECTION, GSocketConnectionClass))


    typedef struct _GSocketConnectionPrivate GSocketConnectionPrivate;

    typedef struct _GSocketConnectionClass GSocketConnectionClass;

    struct _GSocketConnectionClass {
	GIOStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
	void (*_g_reserved6) (void);
    };

    struct _GSocketConnection {
	GIOStream parent_instance;
	GSocketConnectionPrivate *priv;
    };


/* Function prototypes */

    extern gboolean g_socket_connection_connect(GSocketConnection *
						connection,
						GSocketAddress * address,
						GCancellable * cancellable,
						GError * *error);
    extern void g_socket_connection_connect_async(GSocketConnection *
						  connection,
						  GSocketAddress * address,
						  GCancellable *
						  cancellable,
						  GAsyncReadyCallback
						  callback,
						  gpointer user_data);
    extern gboolean g_socket_connection_connect_finish(GSocketConnection *
						       connection,
						       GAsyncResult *
						       result,
						       GError * *error);
    extern GSocketConnection
	*g_socket_connection_factory_create_connection(GSocket * socket);
    extern GType g_socket_connection_factory_lookup_type(GSocketFamily
							 family,
							 GSocketType type,
							 gint protocol_id);
    extern void g_socket_connection_factory_register_type(GType g_type,
							  GSocketFamily
							  family,
							  GSocketType type,
							  gint protocol);
    extern GSocketAddress
	*g_socket_connection_get_local_address(GSocketConnection *
					       connection,
					       GError * *error);
    extern GSocketAddress
	*g_socket_connection_get_remote_address(GSocketConnection *
						connection,
						GError * *error);
    extern GSocket *g_socket_connection_get_socket(GSocketConnection *
						   connection);
    extern GType g_socket_connection_get_type(void);
    extern gboolean g_socket_connection_is_connected(GSocketConnection *
						     connection);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
