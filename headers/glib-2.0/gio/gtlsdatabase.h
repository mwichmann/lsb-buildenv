#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTLSDATABASE_H_
#define _GLIB_2_0_GIO_GTLSDATABASE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TLS_DATABASE	(g_tls_database_get_type ())
#define G_TLS_DATABASE_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TLS_DATABASE, GTlsDatabaseClass))
#define G_IS_TLS_DATABASE_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TLS_DATABASE))
#define G_TLS_DATABASE(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_DATABASE, GTlsDatabase))
#define G_IS_TLS_DATABASE(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_DATABASE))
#define G_TLS_DATABASE_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_TLS_DATABASE, GTlsDatabaseClass))
#define G_TLS_DATABASE_PURPOSE_AUTHENTICATE_SERVER	"1.3.6.1.5.5.7.3.1"
#define G_TLS_DATABASE_PURPOSE_AUTHENTICATE_CLIENT	"1.3.6.1.5.5.7.3.2"


    typedef struct _GTlsDatabaseClass GTlsDatabaseClass;

    typedef struct _GTlsDatabasePrivate GTlsDatabasePrivate;

    struct _GTlsDatabase {
	GObject parent_instance;
	GTlsDatabasePrivate *priv;
    };

    struct _GTlsDatabaseClass {
	GObjectClass parent_class;
	 GTlsCertificateFlags(*verify_chain) (GTlsDatabase * self,
					      GTlsCertificate * chain,
					      const gchar * purpose,
					      GSocketConnectable *
					      identity,
					      GTlsInteraction *
					      interaction,
					      GTlsDatabaseVerifyFlags
					      flags,
					      GCancellable * cancellable,
					      GError * *error);
	void (*verify_chain_async) (GTlsDatabase * self,
				    GTlsCertificate * chain,
				    const gchar * purpose,
				    GSocketConnectable * identity,
				    GTlsInteraction * interaction,
				    GTlsDatabaseVerifyFlags flags,
				    GCancellable * cancellable,
				    GAsyncReadyCallback callback,
				    gpointer user_data);
	 GTlsCertificateFlags(*verify_chain_finish) (GTlsDatabase * self,
						     GAsyncResult * result,
						     GError * *error);
	gchar *(*create_certificate_handle) (GTlsDatabase * self,
					     GTlsCertificate *
					     certificate);
	GTlsCertificate *(*lookup_certificate_for_handle) (GTlsDatabase *
							   self,
							   const gchar *
							   handle,
							   GTlsInteraction
							   * interaction,
							   GTlsDatabaseLookupFlags
							   flags,
							   GCancellable *
							   cancellable,
							   GError *
							   *error);
	void (*lookup_certificate_for_handle_async) (GTlsDatabase * self,
						     const gchar * handle,
						     GTlsInteraction *
						     interaction,
						     GTlsDatabaseLookupFlags
						     flags,
						     GCancellable *
						     cancellable,
						     GAsyncReadyCallback
						     callback,
						     gpointer user_data);
	GTlsCertificate
	    *(*lookup_certificate_for_handle_finish) (GTlsDatabase * self,
						      GAsyncResult *
						      result,
						      GError * *error);
	GTlsCertificate *(*lookup_certificate_issuer) (GTlsDatabase * self,
						       GTlsCertificate *
						       certificate,
						       GTlsInteraction *
						       interaction,
						       GTlsDatabaseLookupFlags
						       flags,
						       GCancellable *
						       cancellable,
						       GError * *error);
	void (*lookup_certificate_issuer_async) (GTlsDatabase * self,
						 GTlsCertificate *
						 certificate,
						 GTlsInteraction *
						 interaction,
						 GTlsDatabaseLookupFlags
						 flags,
						 GCancellable *
						 cancellable,
						 GAsyncReadyCallback
						 callback,
						 gpointer user_data);
	GTlsCertificate *(*lookup_certificate_issuer_finish) (GTlsDatabase
							      * self,
							      GAsyncResult
							      * result,
							      GError *
							      *error);
	GList *(*lookup_certificates_issued_by) (GTlsDatabase * self,
						 GByteArray *
						 issuer_raw_dn,
						 GTlsInteraction *
						 interaction,
						 GTlsDatabaseLookupFlags
						 flags,
						 GCancellable *
						 cancellable,
						 GError * *error);
	void (*lookup_certificates_issued_by_async) (GTlsDatabase * self,
						     GByteArray *
						     issuer_raw_dn,
						     GTlsInteraction *
						     interaction,
						     GTlsDatabaseLookupFlags
						     flags,
						     GCancellable *
						     cancellable,
						     GAsyncReadyCallback
						     callback,
						     gpointer user_data);
	GList *(*lookup_certificates_issued_by_finish) (GTlsDatabase *
							self,
							GAsyncResult *
							result,
							GError * *error);
	gpointer padding[16];
    };


/* Function prototypes */

    extern gchar *g_tls_database_create_certificate_handle(GTlsDatabase *
							   self,
							   GTlsCertificate
							   * certificate);
    extern GType g_tls_database_get_type(void);
    extern GTlsCertificate
	*g_tls_database_lookup_certificate_for_handle(GTlsDatabase * self,
						      const gchar * handle,
						      GTlsInteraction *
						      interaction,
						      GTlsDatabaseLookupFlags
						      flags,
						      GCancellable *
						      cancellable,
						      GError * *error);
    extern void
	g_tls_database_lookup_certificate_for_handle_async(GTlsDatabase *
							   self,
							   const gchar *
							   handle,
							   GTlsInteraction
							   * interaction,
							   GTlsDatabaseLookupFlags
							   flags,
							   GCancellable *
							   cancellable,
							   GAsyncReadyCallback
							   callback,
							   gpointer
							   user_data);
    extern GTlsCertificate
	*g_tls_database_lookup_certificate_for_handle_finish(GTlsDatabase *
							     self,
							     GAsyncResult *
							     result,
							     GError *
							     *error);
    extern GTlsCertificate
	*g_tls_database_lookup_certificate_issuer(GTlsDatabase * self,
						  GTlsCertificate *
						  certificate,
						  GTlsInteraction *
						  interaction,
						  GTlsDatabaseLookupFlags
						  flags,
						  GCancellable *
						  cancellable,
						  GError * *error);
    extern void g_tls_database_lookup_certificate_issuer_async(GTlsDatabase
							       * self,
							       GTlsCertificate
							       *
							       certificate,
							       GTlsInteraction
							       *
							       interaction,
							       GTlsDatabaseLookupFlags
							       flags,
							       GCancellable
							       *
							       cancellable,
							       GAsyncReadyCallback
							       callback,
							       gpointer
							       user_data);
    extern GTlsCertificate
	*g_tls_database_lookup_certificate_issuer_finish(GTlsDatabase *
							 self,
							 GAsyncResult *
							 result,
							 GError * *error);
    extern GList *g_tls_database_lookup_certificates_issued_by(GTlsDatabase
							       * self,
							       GByteArray *
							       issuer_raw_dn,
							       GTlsInteraction
							       *
							       interaction,
							       GTlsDatabaseLookupFlags
							       flags,
							       GCancellable
							       *
							       cancellable,
							       GError *
							       *error);
    extern void
	g_tls_database_lookup_certificates_issued_by_async(GTlsDatabase *
							   self,
							   GByteArray *
							   issuer_raw_dn,
							   GTlsInteraction
							   * interaction,
							   GTlsDatabaseLookupFlags
							   flags,
							   GCancellable *
							   cancellable,
							   GAsyncReadyCallback
							   callback,
							   gpointer
							   user_data);
    extern GList
	*g_tls_database_lookup_certificates_issued_by_finish(GTlsDatabase *
							     self,
							     GAsyncResult *
							     result,
							     GError *
							     *error);
    extern GTlsCertificateFlags g_tls_database_verify_chain(GTlsDatabase *
							    self,
							    GTlsCertificate
							    * chain,
							    const gchar *
							    purpose,
							    GSocketConnectable
							    * identity,
							    GTlsInteraction
							    * interaction,
							    GTlsDatabaseVerifyFlags
							    flags,
							    GCancellable *
							    cancellable,
							    GError *
							    *error);
    extern void g_tls_database_verify_chain_async(GTlsDatabase * self,
						  GTlsCertificate * chain,
						  const gchar * purpose,
						  GSocketConnectable *
						  identity,
						  GTlsInteraction *
						  interaction,
						  GTlsDatabaseVerifyFlags
						  flags,
						  GCancellable *
						  cancellable,
						  GAsyncReadyCallback
						  callback,
						  gpointer user_data);
    extern GTlsCertificateFlags
	g_tls_database_verify_chain_finish(GTlsDatabase * self,
					   GAsyncResult * result,
					   GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
