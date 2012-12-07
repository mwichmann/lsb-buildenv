#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTLSSERVERCONNECTION_H_
#define _GLIB_2_0_GIO_GTLSSERVERCONNECTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TLS_SERVER_CONNECTION	(g_tls_server_connection_get_type ())
#define G_TLS_SERVER_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_SERVER_CONNECTION, GTlsServerConnection))
#define G_IS_TLS_SERVER_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_SERVER_CONNECTION))
#define G_TLS_SERVER_CONNECTION_GET_INTERFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_TLS_SERVER_CONNECTION, GTlsServerConnectionInterface))


    typedef struct _GTlsServerConnectionInterface
	GTlsServerConnectionInterface;

    struct _GTlsServerConnectionInterface {
	GTypeInterface g_iface;
    };


/* Function prototypes */

    extern GType g_tls_server_connection_get_type(void);
    extern GIOStream *g_tls_server_connection_new(GIOStream *
						  base_io_stream,
						  GTlsCertificate *
						  certificate,
						  GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
