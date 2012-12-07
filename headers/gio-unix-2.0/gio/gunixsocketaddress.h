#if (__LSB_VERSION__ >= 50 )
#ifndef _GIO_UNIX_2_0_GIO_GUNIXSOCKETADDRESS_H_
#define _GIO_UNIX_2_0_GIO_GUNIXSOCKETADDRESS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsocketaddress.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gio.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#define G_UNIX_SOCKET_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_UNIX_SOCKET_ADDRESS, GUnixSocketAddressClass))
#define G_IS_UNIX_SOCKET_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_UNIX_SOCKET_ADDRESS))
#define G_UNIX_SOCKET_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_UNIX_SOCKET_ADDRESS, GUnixSocketAddress))
#define G_IS_UNIX_SOCKET_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_UNIX_SOCKET_ADDRESS))
#define G_UNIX_SOCKET_ADDRESS_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_UNIX_SOCKET_ADDRESS, GUnixSocketAddressClass))
#define G_TYPE_UNIX_SOCKET_ADDRESS	(g_unix_socket_address_get_type ())


    typedef struct _GUnixSocketAddress GUnixSocketAddress;

    typedef struct _GUnixSocketAddressClass GUnixSocketAddressClass;

    typedef struct _GUnixSocketAddressPrivate GUnixSocketAddressPrivate;

    struct _GUnixSocketAddressClass {
	GSocketAddressClass parent_class;
    };

    struct _GUnixSocketAddress {
	GSocketAddress parent_instance;
	GUnixSocketAddressPrivate *priv;
    };


/* Function prototypes */

    extern gboolean g_unix_socket_address_abstract_names_supported(void);
    extern GUnixSocketAddressType
	g_unix_socket_address_get_address_type(GUnixSocketAddress *
					       address);
    extern gboolean
	g_unix_socket_address_get_is_abstract(GUnixSocketAddress *
					      address) LSB_DECL_DEPRECATED;
    extern const char *g_unix_socket_address_get_path(GUnixSocketAddress *
						      address);
    extern gsize g_unix_socket_address_get_path_len(GUnixSocketAddress *
						    address);
    extern GType g_unix_socket_address_get_type(void);
    extern GSocketAddress *g_unix_socket_address_new(const char *path);
    extern GSocketAddress *g_unix_socket_address_new_abstract(const char
							      *path,
							      gint
							      path_len)
	LSB_DECL_DEPRECATED;
    extern GSocketAddress *g_unix_socket_address_new_with_type(const char
							       *path,
							       gint
							       path_len,
							       GUnixSocketAddressType
							       type);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
