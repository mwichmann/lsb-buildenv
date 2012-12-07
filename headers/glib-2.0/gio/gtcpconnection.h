#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTCPCONNECTION_H_
#define _GLIB_2_0_GIO_GTCPCONNECTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsocketconnection.h>
#include <glib-2.0/gio/giostream.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TCP_CONNECTION	(g_tcp_connection_get_type ())
#define G_TCP_CONNECTION_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TCP_CONNECTION, GTcpConnectionClass))
#define G_IS_TCP_CONNECTION_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TCP_CONNECTION))
#define G_TCP_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TCP_CONNECTION, GTcpConnection))
#define G_IS_TCP_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TCP_CONNECTION))
#define G_TCP_CONNECTION_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_TCP_CONNECTION, GTcpConnectionClass))


    typedef struct _GTcpConnectionPrivate GTcpConnectionPrivate;

    typedef struct _GTcpConnectionClass GTcpConnectionClass;

    struct _GTcpConnectionClass {
	GSocketConnectionClass parent_class;
    };

    struct _GTcpConnection {
	GSocketConnection parent_instance;
	GTcpConnectionPrivate *priv;
    };


/* Function prototypes */

    extern gboolean g_tcp_connection_get_graceful_disconnect(GTcpConnection
							     * connection);
    extern GType g_tcp_connection_get_type(void);
    extern void g_tcp_connection_set_graceful_disconnect(GTcpConnection *
							 connection,
							 gboolean
							 graceful_disconnect);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
