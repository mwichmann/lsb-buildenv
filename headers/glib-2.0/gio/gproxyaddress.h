#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GPROXYADDRESS_H_
#define _GLIB_2_0_GIO_GPROXYADDRESS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/ginetsocketaddress.h>
#include <glib-2.0/gio/gsocketaddress.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_PROXY_ADDRESS	(g_proxy_address_get_type ())
#define G_PROXY_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_PROXY_ADDRESS, GProxyAddressClass))
#define G_IS_PROXY_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_PROXY_ADDRESS))
#define G_PROXY_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_PROXY_ADDRESS, GProxyAddress))
#define G_IS_PROXY_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_PROXY_ADDRESS))
#define G_PROXY_ADDRESS_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_PROXY_ADDRESS, GProxyAddressClass))


    typedef struct _GProxyAddressClass GProxyAddressClass;

    typedef struct _GProxyAddressPrivate GProxyAddressPrivate;

    struct _GProxyAddress {
	GInetSocketAddress parent_instance;
	GProxyAddressPrivate *priv;
    };

    struct _GProxyAddressClass {
	GInetSocketAddressClass parent_class;
    };


/* Function prototypes */

    extern const gchar
	*g_proxy_address_get_destination_hostname(GProxyAddress * proxy);
    extern guint16 g_proxy_address_get_destination_port(GProxyAddress *
							proxy);
    extern const gchar *g_proxy_address_get_password(GProxyAddress *
						     proxy);
    extern const gchar *g_proxy_address_get_protocol(GProxyAddress *
						     proxy);
    extern GType g_proxy_address_get_type(void);
    extern const gchar *g_proxy_address_get_username(GProxyAddress *
						     proxy);
    extern GSocketAddress *g_proxy_address_new(GInetAddress * inetaddr,
					       guint16 port,
					       const gchar * protocol,
					       const gchar * dest_hostname,
					       guint16 dest_port,
					       const gchar * username,
					       const gchar * password);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
