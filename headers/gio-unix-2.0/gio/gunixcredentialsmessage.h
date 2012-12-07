#if (__LSB_VERSION__ >= 50 )
#ifndef _GIO_UNIX_2_0_GIO_GUNIXCREDENTIALSMESSAGE_H_
#define _GIO_UNIX_2_0_GIO_GUNIXCREDENTIALSMESSAGE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsocketcontrolmessage.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gio.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_UNIX_CREDENTIALS_MESSAGE_CLASS(c)	(G_TYPE_CHECK_CLASS_CAST ((c), G_TYPE_UNIX_CREDENTIALS_MESSAGE, GUnixCredentialsMessageClass))
#define G_IS_UNIX_CREDENTIALS_MESSAGE_CLASS(c)	(G_TYPE_CHECK_CLASS_TYPE ((c), G_TYPE_UNIX_CREDENTIALS_MESSAGE))
#define G_UNIX_CREDENTIALS_MESSAGE(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_UNIX_CREDENTIALS_MESSAGE, GUnixCredentialsMessage))
#define G_IS_UNIX_CREDENTIALS_MESSAGE(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_UNIX_CREDENTIALS_MESSAGE))
#define G_UNIX_CREDENTIALS_MESSAGE_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_UNIX_CREDENTIALS_MESSAGE, GUnixCredentialsMessageClass))
#define G_TYPE_UNIX_CREDENTIALS_MESSAGE	(g_unix_credentials_message_get_type ())


    typedef struct _GUnixCredentialsMessagePrivate
	GUnixCredentialsMessagePrivate;

    typedef struct _GUnixCredentialsMessageClass
	GUnixCredentialsMessageClass;

    struct _GUnixCredentialsMessageClass {
	GSocketControlMessageClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
    };

    struct _GUnixCredentialsMessage {
	GSocketControlMessage parent_instance;
	GUnixCredentialsMessagePrivate *priv;
    };


/* Function prototypes */

    extern GCredentials
	*g_unix_credentials_message_get_credentials(GUnixCredentialsMessage
						    * message);
    extern GType g_unix_credentials_message_get_type(void);
    extern gboolean g_unix_credentials_message_is_supported(void);
    extern GSocketControlMessage *g_unix_credentials_message_new(void);
    extern GSocketControlMessage
	*g_unix_credentials_message_new_with_credentials(GCredentials *
							 credentials);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
