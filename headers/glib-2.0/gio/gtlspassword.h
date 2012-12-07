#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTLSPASSWORD_H_
#define _GLIB_2_0_GIO_GTLSPASSWORD_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TLS_PASSWORD	(g_tls_password_get_type ())
#define G_TLS_PASSWORD_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_TLS_PASSWORD, GTlsPasswordClass))
#define G_IS_TLS_PASSWORD_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_TLS_PASSWORD))
#define G_TLS_PASSWORD(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_TLS_PASSWORD, GTlsPassword))
#define G_IS_TLS_PASSWORD(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_TLS_PASSWORD))
#define G_TLS_PASSWORD_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_TLS_PASSWORD, GTlsPasswordClass))


    typedef struct _GTlsPasswordClass GTlsPasswordClass;

    typedef struct _GTlsPasswordPrivate GTlsPasswordPrivate;

    struct _GTlsPassword {
	GObject parent_instance;
	GTlsPasswordPrivate *priv;
    };

    struct _GTlsPasswordClass {
	GObjectClass parent_class;
	const guchar *(*get_value) (GTlsPassword * password,
				    gsize * length);
	void (*set_value) (GTlsPassword * password, guchar * value,
			   gssize length, GDestroyNotify destroy);
	const gchar *(*get_default_warning) (GTlsPassword * password);
	gpointer padding[4];
    };


/* Function prototypes */

    extern const char *g_tls_password_get_description(GTlsPassword *
						      password);
    extern GTlsPasswordFlags g_tls_password_get_flags(GTlsPassword *
						      password);
    extern GType g_tls_password_get_type(void);
    extern const unsigned char *g_tls_password_get_value(GTlsPassword *
							 password,
							 gsize * length);
    extern const char *g_tls_password_get_warning(GTlsPassword * password);
    extern GTlsPassword *g_tls_password_new(GTlsPasswordFlags flags,
					    const gchar * description);
    extern void g_tls_password_set_description(GTlsPassword * password,
					       const gchar * description);
    extern void g_tls_password_set_flags(GTlsPassword * password,
					 GTlsPasswordFlags flags);
    extern void g_tls_password_set_value(GTlsPassword * password,
					 const guchar * value,
					 gssize length);
    extern void g_tls_password_set_value_full(GTlsPassword * password,
					      guchar * value,
					      gssize length,
					      GDestroyNotify destroy);
    extern void g_tls_password_set_warning(GTlsPassword * password,
					   const gchar * warning);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
