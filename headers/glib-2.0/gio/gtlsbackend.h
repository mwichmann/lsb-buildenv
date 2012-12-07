#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTLSBACKEND_H_
#define _GLIB_2_0_GIO_GTLSBACKEND_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TLS_BACKEND	(g_tls_backend_get_type ())
#define G_TLS_BACKEND(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_TLS_BACKEND, GTlsBackend))
#define G_IS_TLS_BACKEND(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_TLS_BACKEND))
#define G_TLS_BACKEND_GET_INTERFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_TLS_BACKEND, GTlsBackendInterface))
#define G_TLS_BACKEND_EXTENSION_POINT_NAME	"gio-tls-backend"


    typedef struct _GTlsBackend GTlsBackend;

    typedef struct _GTlsBackendInterface GTlsBackendInterface;

    struct _GTlsBackendInterface {
	GTypeInterface g_iface;
	 gboolean(*supports_tls) (GTlsBackend * backend);
	 GType(*get_certificate_type) (void);
	 GType(*get_client_connection_type) (void);
	 GType(*get_server_connection_type) (void);
	 GType(*get_file_database_type) (void);
	GTlsDatabase *(*get_default_database) (GTlsBackend * backend);
    };


/* Function prototypes */

    extern GType g_tls_backend_get_certificate_type(GTlsBackend * backend);
    extern GType g_tls_backend_get_client_connection_type(GTlsBackend *
							  backend);
    extern GTlsBackend *g_tls_backend_get_default(void);
    extern GTlsDatabase *g_tls_backend_get_default_database(GTlsBackend *
							    backend);
    extern GType g_tls_backend_get_file_database_type(GTlsBackend *
						      backend);
    extern GType g_tls_backend_get_server_connection_type(GTlsBackend *
							  backend);
    extern GType g_tls_backend_get_type(void);
    extern gboolean g_tls_backend_supports_tls(GTlsBackend * backend);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
