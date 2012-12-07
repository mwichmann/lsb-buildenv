#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSOCKETCONNECTABLE_H_
#define _GLIB_2_0_GIO_GSOCKETCONNECTABLE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SOCKET_CONNECTABLE	(g_socket_connectable_get_type ())
#define G_SOCKET_CONNECTABLE(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_SOCKET_CONNECTABLE, GSocketConnectable))
#define G_IS_SOCKET_CONNECTABLE(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_SOCKET_CONNECTABLE))
#define G_SOCKET_CONNECTABLE_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_SOCKET_CONNECTABLE, GSocketConnectableIface))


    typedef struct _GSocketConnectableIface GSocketConnectableIface;

    struct _GSocketConnectableIface {
	GTypeInterface g_iface;
	GSocketAddressEnumerator *(*enumerate) (GSocketConnectable *
						connectable);
	GSocketAddressEnumerator *(*proxy_enumerate) (GSocketConnectable *
						      connectable);
    };


/* Function prototypes */

    extern GSocketAddressEnumerator
	*g_socket_connectable_enumerate(GSocketConnectable * connectable);
    extern GType g_socket_connectable_get_type(void);
    extern GSocketAddressEnumerator
	*g_socket_connectable_proxy_enumerate(GSocketConnectable *
					      connectable);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
