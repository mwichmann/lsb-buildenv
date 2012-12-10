#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTLSCONNECTION_H_
#define _GLIB_2_0_GIO_GTLSCONNECTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giostream.h>
#include <glib-2.0/gio/giotypes.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TLS_CONNECTION	(g_tls_connection_get_type ())
#define G_TLS_ERROR	(g_tls_error_quark ())
#define G_TLS_CONNECTION_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TLS_CONNECTION, GTlsConnectionClass))
#define G_IS_TLS_CONNECTION_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TLS_CONNECTION))
#define G_TLS_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_CONNECTION, GTlsConnection))
#define G_IS_TLS_CONNECTION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_CONNECTION))
#define G_TLS_CONNECTION_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_TLS_CONNECTION, GTlsConnectionClass))


    typedef struct _GTlsConnectionClass GTlsConnectionClass;

    typedef struct _GTlsConnectionPrivate GTlsConnectionPrivate;

    struct _GTlsConnection {
	GIOStream parent_instance;
	GTlsConnectionPrivate *priv;
    };

    struct _GTlsConnectionClass {
	GIOStreamClass parent_class;
	 gboolean(*accept_certificate) (GTlsConnection * connection,
					GTlsCertificate * peer_cert,
					GTlsCertificateFlags errors);
	 gboolean(*handshake) (GTlsConnection * conn,
			       GCancellable * cancellable,
			       GError * *error);
	void (*handshake_async) (GTlsConnection * conn, int io_priority,
				 GCancellable * cancellable,
				 GAsyncReadyCallback callback,
				 gpointer user_data);
	 gboolean(*handshake_finish) (GTlsConnection * conn,
				      GAsyncResult * result,
				      GError * *error);
	gpointer padding[8];
    };


/* Function prototypes */

    extern gboolean g_tls_connection_emit_accept_certificate(GTlsConnection
							     * conn,
							     GTlsCertificate
							     * peer_cert,
							     GTlsCertificateFlags
							     errors);
    extern GTlsCertificate *g_tls_connection_get_certificate(GTlsConnection
							     * conn);
    extern GTlsDatabase *g_tls_connection_get_database(GTlsConnection *
						       conn);
    extern GTlsInteraction *g_tls_connection_get_interaction(GTlsConnection
							     * conn);
    extern GTlsCertificate
	*g_tls_connection_get_peer_certificate(GTlsConnection * conn);
    extern GTlsCertificateFlags
	g_tls_connection_get_peer_certificate_errors(GTlsConnection *
						     conn);
    extern GTlsRehandshakeMode
	g_tls_connection_get_rehandshake_mode(GTlsConnection * conn);
    extern gboolean
	g_tls_connection_get_require_close_notify(GTlsConnection * conn);
    extern GType g_tls_connection_get_type(void);
    extern gboolean g_tls_connection_get_use_system_certdb(GTlsConnection *
							   conn)
	LSB_DECL_DEPRECATED;
    extern gboolean g_tls_connection_handshake(GTlsConnection * conn,
					       GCancellable * cancellable,
					       GError * *error);
    extern void g_tls_connection_handshake_async(GTlsConnection * conn,
						 int io_priority,
						 GCancellable *
						 cancellable,
						 GAsyncReadyCallback
						 callback,
						 gpointer user_data);
    extern gboolean g_tls_connection_handshake_finish(GTlsConnection *
						      conn,
						      GAsyncResult *
						      result,
						      GError * *error);
    extern void g_tls_connection_set_certificate(GTlsConnection * conn,
						 GTlsCertificate *
						 certificate);
    extern void g_tls_connection_set_database(GTlsConnection * conn,
					      GTlsDatabase * database);
    extern void g_tls_connection_set_interaction(GTlsConnection * conn,
						 GTlsInteraction *
						 interaction);
    extern void g_tls_connection_set_rehandshake_mode(GTlsConnection *
						      conn,
						      GTlsRehandshakeMode
						      mode);
    extern void g_tls_connection_set_require_close_notify(GTlsConnection *
							  conn,
							  gboolean
							  require_close_notify);
    extern void g_tls_connection_set_use_system_certdb(GTlsConnection *
						       conn,
						       gboolean
						       use_system_certdb)
	LSB_DECL_DEPRECATED;
    extern GQuark g_tls_error_quark(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
