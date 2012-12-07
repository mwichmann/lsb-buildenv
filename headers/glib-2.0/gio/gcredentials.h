#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GCREDENTIALS_H_
#define _GLIB_2_0_GIO_GCREDENTIALS_H_

#include <sys/types.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_CREDENTIALS	(g_credentials_get_type ())
#define G_CREDENTIALS_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_CREDENTIALS, GCredentialsClass))
#define G_IS_CREDENTIALS_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_CREDENTIALS))
#define G_CREDENTIALS(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_CREDENTIALS, GCredentials))
#define G_IS_CREDENTIALS(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_CREDENTIALS))
#define G_CREDENTIALS_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_CREDENTIALS, GCredentialsClass))


    typedef struct _GCredentialsClass GCredentialsClass;


/* Function prototypes */

    extern gpointer g_credentials_get_native(GCredentials * credentials,
					     GCredentialsType native_type);
    extern GType g_credentials_get_type(void);
    extern uid_t g_credentials_get_unix_user(GCredentials * credentials,
					     GError * *error);
    extern gboolean g_credentials_is_same_user(GCredentials * credentials,
					       GCredentials *
					       other_credentials,
					       GError * *error);
    extern GCredentials *g_credentials_new(void);
    extern void g_credentials_set_native(GCredentials * credentials,
					 GCredentialsType native_type,
					 gpointer native);
    extern gboolean g_credentials_set_unix_user(GCredentials * credentials,
						uid_t uid,
						GError * *error);
    extern gchar *g_credentials_to_string(GCredentials * credentials);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
