#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GINETADDRESS_H_
#define _GLIB_2_0_GIO_GINETADDRESS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_INET_ADDRESS	(g_inet_address_get_type ())
#define G_INET_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_INET_ADDRESS, GInetAddressClass))
#define G_IS_INET_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_INET_ADDRESS))
#define G_INET_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_INET_ADDRESS, GInetAddress))
#define G_IS_INET_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_INET_ADDRESS))
#define G_INET_ADDRESS_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_INET_ADDRESS, GInetAddressClass))


    typedef struct _GInetAddressClass GInetAddressClass;

    typedef struct _GInetAddressPrivate GInetAddressPrivate;

    struct _GInetAddress {
	GObject parent_instance;
	GInetAddressPrivate *priv;
    };

    struct _GInetAddressClass {
	GObjectClass parent_class;
	gchar *(*to_string) (GInetAddress * address);
	const guint8 *(*to_bytes) (GInetAddress * address);
    };


/* Function prototypes */

    extern gboolean g_inet_address_equal(GInetAddress * address,
					 GInetAddress * other_address);
    extern GSocketFamily g_inet_address_get_family(GInetAddress * address);
    extern gboolean g_inet_address_get_is_any(GInetAddress * address);
    extern gboolean g_inet_address_get_is_link_local(GInetAddress *
						     address);
    extern gboolean g_inet_address_get_is_loopback(GInetAddress * address);
    extern gboolean g_inet_address_get_is_mc_global(GInetAddress *
						    address);
    extern gboolean g_inet_address_get_is_mc_link_local(GInetAddress *
							address);
    extern gboolean g_inet_address_get_is_mc_node_local(GInetAddress *
							address);
    extern gboolean g_inet_address_get_is_mc_org_local(GInetAddress *
						       address);
    extern gboolean g_inet_address_get_is_mc_site_local(GInetAddress *
							address);
    extern gboolean g_inet_address_get_is_multicast(GInetAddress *
						    address);
    extern gboolean g_inet_address_get_is_site_local(GInetAddress *
						     address);
    extern gsize g_inet_address_get_native_size(GInetAddress * address);
    extern GType g_inet_address_get_type(void);
    extern GInetAddress *g_inet_address_new_any(GSocketFamily family);
    extern GInetAddress *g_inet_address_new_from_bytes(const guint8 *
						       bytes,
						       GSocketFamily
						       family);
    extern GInetAddress *g_inet_address_new_from_string(const gchar *
							string);
    extern GInetAddress *g_inet_address_new_loopback(GSocketFamily family);
    extern const unsigned char *g_inet_address_to_bytes(GInetAddress *
							address);
    extern gchar *g_inet_address_to_string(GInetAddress * address);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
