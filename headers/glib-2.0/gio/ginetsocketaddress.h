#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GINETSOCKETADDRESS_H_
#define _GLIB_2_0_GIO_GINETSOCKETADDRESS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsocketaddress.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_INET_SOCKET_ADDRESS	(g_inet_socket_address_get_type ())
#define G_INET_SOCKET_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_INET_SOCKET_ADDRESS, GInetSocketAddressClass))
#define G_IS_INET_SOCKET_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_INET_SOCKET_ADDRESS))
#define G_INET_SOCKET_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_INET_SOCKET_ADDRESS, GInetSocketAddress))
#define G_IS_INET_SOCKET_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_INET_SOCKET_ADDRESS))
#define G_INET_SOCKET_ADDRESS_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_INET_SOCKET_ADDRESS, GInetSocketAddressClass))


    typedef struct _GInetSocketAddressClass GInetSocketAddressClass;

    typedef struct _GInetSocketAddressPrivate GInetSocketAddressPrivate;

    struct _GInetSocketAddress {
	GSocketAddress parent_instance;
	GInetSocketAddressPrivate *priv;
    };

    struct _GInetSocketAddressClass {
	GSocketAddressClass parent_class;
    };


/* Function prototypes */

    extern GInetAddress
	*g_inet_socket_address_get_address(GInetSocketAddress * address);
    extern guint32 g_inet_socket_address_get_flowinfo(GInetSocketAddress *
						      address);
    extern guint16 g_inet_socket_address_get_port(GInetSocketAddress *
						  address);
    extern guint32 g_inet_socket_address_get_scope_id(GInetSocketAddress *
						      address);
    extern GType g_inet_socket_address_get_type(void);
    extern GSocketAddress *g_inet_socket_address_new(GInetAddress *
						     address,
						     guint16 port);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
