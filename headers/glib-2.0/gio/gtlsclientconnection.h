#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTLSCLIENTCONNECTION_H_
#define _GLIB_2_0_GIO_GTLSCLIENTCONNECTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TLS_CLIENT_CONNECTION	(g_tls_client_connection_get_type ())
#define G_TLS_CLIENT_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_CLIENT_CONNECTION, GTlsClientConnection))
#define G_IS_TLS_CLIENT_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_CLIENT_CONNECTION))
#define G_TLS_CLIENT_CONNECTION_GET_INTERFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_TLS_CLIENT_CONNECTION, GTlsClientConnectionInterface))


    typedef struct _GTlsClientConnectionInterface
	GTlsClientConnectionInterface;

    struct _GTlsClientConnectionInterface {
	GTypeInterface g_iface;
    };


/* Function prototypes */

    extern GList
	*g_tls_client_connection_get_accepted_cas(GTlsClientConnection *
						  conn);
    extern GSocketConnectable
	*g_tls_client_connection_get_server_identity(GTlsClientConnection *
						     conn);
    extern GType g_tls_client_connection_get_type(void);
    extern gboolean
	g_tls_client_connection_get_use_ssl3(GTlsClientConnection * conn);
    extern GTlsCertificateFlags
	g_tls_client_connection_get_validation_flags(GTlsClientConnection *
						     conn);
    extern GIOStream *g_tls_client_connection_new(GIOStream *
						  base_io_stream,
						  GSocketConnectable *
						  server_identity,
						  GError * *error);
    extern void
	g_tls_client_connection_set_server_identity(GTlsClientConnection *
						    conn,
						    GSocketConnectable *
						    identity);
    extern void g_tls_client_connection_set_use_ssl3(GTlsClientConnection *
						     conn,
						     gboolean use_ssl3);
    extern void
	g_tls_client_connection_set_validation_flags(GTlsClientConnection *
						     conn,
						     GTlsCertificateFlags
						     flags);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
