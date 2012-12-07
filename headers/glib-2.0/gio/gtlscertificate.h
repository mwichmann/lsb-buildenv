#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTLSCERTIFICATE_H_
#define _GLIB_2_0_GIO_GTLSCERTIFICATE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TLS_CERTIFICATE	(g_tls_certificate_get_type ())
#define G_TLS_CERTIFICATE_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TLS_CERTIFICATE, GTlsCertificateClass))
#define G_IS_TLS_CERTIFICATE_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TLS_CERTIFICATE))
#define G_TLS_CERTIFICATE(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_CERTIFICATE, GTlsCertificate))
#define G_IS_TLS_CERTIFICATE(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_CERTIFICATE))
#define G_TLS_CERTIFICATE_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_TLS_CERTIFICATE, GTlsCertificateClass))


    typedef struct _GTlsCertificateClass GTlsCertificateClass;

    typedef struct _GTlsCertificatePrivate GTlsCertificatePrivate;

    struct _GTlsCertificateClass {
	GObjectClass parent_class;
	 GTlsCertificateFlags(*verify) (GTlsCertificate * cert,
					GSocketConnectable * identity,
					GTlsCertificate * trusted_ca);
	gpointer padding[8];
    };


/* Function prototypes */

    extern GTlsCertificate *g_tls_certificate_get_issuer(GTlsCertificate *
							 cert);
    extern GType g_tls_certificate_get_type(void);
    extern GList *g_tls_certificate_list_new_from_file(const gchar * file,
						       GError * *error);
    extern GTlsCertificate *g_tls_certificate_new_from_file(const gchar *
							    file,
							    GError *
							    *error);
    extern GTlsCertificate *g_tls_certificate_new_from_files(const gchar *
							     cert_file,
							     const gchar *
							     key_file,
							     GError *
							     *error);
    extern GTlsCertificate *g_tls_certificate_new_from_pem(const gchar *
							   data,
							   gssize length,
							   GError *
							   *error);
    extern GTlsCertificateFlags g_tls_certificate_verify(GTlsCertificate *
							 cert,
							 GSocketConnectable
							 * identity,
							 GTlsCertificate *
							 trusted_ca);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
