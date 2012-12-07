#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GNETWORKADDRESS_H_
#define _GLIB_2_0_GIO_GNETWORKADDRESS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_NETWORK_ADDRESS	(g_network_address_get_type ())
#define G_NETWORK_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_NETWORK_ADDRESS, GNetworkAddressClass))
#define G_IS_NETWORK_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_NETWORK_ADDRESS))
#define G_NETWORK_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_NETWORK_ADDRESS, GNetworkAddress))
#define G_IS_NETWORK_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_NETWORK_ADDRESS))
#define G_NETWORK_ADDRESS_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_NETWORK_ADDRESS, GNetworkAddressClass))


    typedef struct _GNetworkAddressClass GNetworkAddressClass;

    typedef struct _GNetworkAddressPrivate GNetworkAddressPrivate;

    struct _GNetworkAddress {
	GObject parent_instance;
	GNetworkAddressPrivate *priv;
    };

    struct _GNetworkAddressClass {
	GObjectClass parent_class;
    };


/* Function prototypes */

    extern const char *g_network_address_get_hostname(GNetworkAddress *
						      addr);
    extern guint16 g_network_address_get_port(GNetworkAddress * addr);
    extern const char *g_network_address_get_scheme(GNetworkAddress *
						    addr);
    extern GType g_network_address_get_type(void);
    extern GSocketConnectable *g_network_address_new(const gchar *
						     hostname,
						     guint16 port);
    extern GSocketConnectable *g_network_address_parse(const gchar *
						       host_and_port,
						       guint16
						       default_port,
						       GError * *error);
    extern GSocketConnectable *g_network_address_parse_uri(const gchar *
							   uri,
							   guint16
							   default_port,
							   GError *
							   *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
