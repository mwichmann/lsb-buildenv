#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTCPWRAPPERCONNECTION_H_
#define _GLIB_2_0_GIO_GTCPWRAPPERCONNECTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsocketconnection.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gtcpconnection.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TCP_WRAPPER_CONNECTION	(g_tcp_wrapper_connection_get_type ())
#define G_TCP_WRAPPER_CONNECTION_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TCP_WRAPPER_CONNECTION, GTcpWrapperConnectionClass))
#define G_IS_TCP_WRAPPER_CONNECTION_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TCP_WRAPPER_CONNECTION))
#define G_TCP_WRAPPER_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TCP_WRAPPER_CONNECTION, GTcpWrapperConnection))
#define G_IS_TCP_WRAPPER_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TCP_WRAPPER_CONNECTION))
#define G_TCP_WRAPPER_CONNECTION_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_TCP_WRAPPER_CONNECTION, GTcpWrapperConnectionClass))


    typedef struct _GTcpWrapperConnectionPrivate
	GTcpWrapperConnectionPrivate;

    typedef struct _GTcpWrapperConnectionClass GTcpWrapperConnectionClass;

    struct _GTcpWrapperConnectionClass {
	GTcpConnectionClass parent_class;
    };

    struct _GTcpWrapperConnection {
	GTcpConnection parent_instance;
	GTcpWrapperConnectionPrivate *priv;
    };


/* Function prototypes */

    extern GIOStream
	*g_tcp_wrapper_connection_get_base_io_stream(GTcpWrapperConnection
						     * conn);
    extern GType g_tcp_wrapper_connection_get_type(void);
    extern GSocketConnection *g_tcp_wrapper_connection_new(GIOStream *
							   base_io_stream,
							   GSocket *
							   socket);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
