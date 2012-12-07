#if (__LSB_VERSION__ >= 50 )
#ifndef _GIO_UNIX_2_0_GIO_GUNIXCONNECTION_H_
#define _GIO_UNIX_2_0_GIO_GUNIXCONNECTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsocketconnection.h>
#include <glib-2.0/gio/giostream.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gio.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_UNIX_CONNECTION_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_UNIX_CONNECTION, GUnixConnectionClass))
#define G_IS_UNIX_CONNECTION_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_UNIX_CONNECTION))
#define G_UNIX_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_UNIX_CONNECTION, GUnixConnection))
#define G_IS_UNIX_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_UNIX_CONNECTION))
#define G_UNIX_CONNECTION_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_UNIX_CONNECTION, GUnixConnectionClass))
#define G_TYPE_UNIX_CONNECTION	(g_unix_connection_get_type ())


    typedef struct _GUnixConnection GUnixConnection;

    typedef struct _GUnixConnectionPrivate GUnixConnectionPrivate;

    typedef struct _GUnixConnectionClass GUnixConnectionClass;

    struct _GUnixConnectionClass {
	GSocketConnectionClass parent_class;
    };

    struct _GUnixConnection {
	GSocketConnection parent_instance;
	GUnixConnectionPrivate *priv;
    };


/* Function prototypes */

    extern GType g_unix_connection_get_type(void);
    extern GCredentials
	*g_unix_connection_receive_credentials(GUnixConnection *
					       connection,
					       GCancellable * cancellable,
					       GError * *error);
    extern void g_unix_connection_receive_credentials_async(GUnixConnection
							    * connection,
							    GCancellable *
							    cancellable,
							    GAsyncReadyCallback
							    callback,
							    gpointer
							    user_data);
    extern GCredentials
	*g_unix_connection_receive_credentials_finish(GUnixConnection *
						      connection,
						      GAsyncResult *
						      result,
						      GError * *error);
    extern gint g_unix_connection_receive_fd(GUnixConnection * connection,
					     GCancellable * cancellable,
					     GError * *error);
    extern gboolean g_unix_connection_send_credentials(GUnixConnection *
						       connection,
						       GCancellable *
						       cancellable,
						       GError * *error);
    extern void g_unix_connection_send_credentials_async(GUnixConnection *
							 connection,
							 GCancellable *
							 cancellable,
							 GAsyncReadyCallback
							 callback,
							 gpointer
							 user_data);
    extern gboolean
	g_unix_connection_send_credentials_finish(GUnixConnection *
						  connection,
						  GAsyncResult * result,
						  GError * *error);
    extern gboolean g_unix_connection_send_fd(GUnixConnection * connection,
					      gint fd,
					      GCancellable * cancellable,
					      GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
