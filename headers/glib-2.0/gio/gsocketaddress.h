#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSOCKETADDRESS_H_
#define _GLIB_2_0_GIO_GSOCKETADDRESS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SOCKET_ADDRESS	(g_socket_address_get_type ())
#define G_SOCKET_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_SOCKET_ADDRESS, GSocketAddressClass))
#define G_IS_SOCKET_ADDRESS_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_SOCKET_ADDRESS))
#define G_SOCKET_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_SOCKET_ADDRESS, GSocketAddress))
#define G_IS_SOCKET_ADDRESS(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_SOCKET_ADDRESS))
#define G_SOCKET_ADDRESS_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_SOCKET_ADDRESS, GSocketAddressClass))


    typedef struct _GSocketAddressClass GSocketAddressClass;

    struct _GSocketAddress {
	GObject parent_instance;
    };

    struct _GSocketAddressClass {
	GObjectClass parent_class;
	 GSocketFamily(*get_family) (GSocketAddress * address);
	 gssize(*get_native_size) (GSocketAddress * address);
	 gboolean(*to_native) (GSocketAddress * address, gpointer dest,
			       gsize destlen, GError * *error);
    };


/* Function prototypes */

    extern GSocketFamily g_socket_address_get_family(GSocketAddress *
						     address);
    extern gssize g_socket_address_get_native_size(GSocketAddress *
						   address);
    extern GType g_socket_address_get_type(void);
    extern GSocketAddress *g_socket_address_new_from_native(gpointer
							    native,
							    gsize len);
    extern gboolean g_socket_address_to_native(GSocketAddress * address,
					       gpointer dest,
					       gsize destlen,
					       GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
