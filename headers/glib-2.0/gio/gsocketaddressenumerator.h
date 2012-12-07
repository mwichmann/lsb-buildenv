#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSOCKETADDRESSENUMERATOR_H_
#define _GLIB_2_0_GIO_GSOCKETADDRESSENUMERATOR_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SOCKET_ADDRESS_ENUMERATOR	(g_socket_address_enumerator_get_type ())
#define G_SOCKET_ADDRESS_ENUMERATOR_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_SOCKET_ADDRESS_ENUMERATOR, GSocketAddressEnumeratorClass))
#define G_IS_SOCKET_ADDRESS_ENUMERATOR_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_SOCKET_ADDRESS_ENUMERATOR))
#define G_SOCKET_ADDRESS_ENUMERATOR(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_SOCKET_ADDRESS_ENUMERATOR, GSocketAddressEnumerator))
#define G_IS_SOCKET_ADDRESS_ENUMERATOR(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_SOCKET_ADDRESS_ENUMERATOR))
#define G_SOCKET_ADDRESS_ENUMERATOR_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_SOCKET_ADDRESS_ENUMERATOR, GSocketAddressEnumeratorClass))


    typedef struct _GSocketAddressEnumeratorClass
	GSocketAddressEnumeratorClass;

    struct _GSocketAddressEnumerator {
	GObject parent_instance;
    };

    struct _GSocketAddressEnumeratorClass {
	GObjectClass parent_class;
	GSocketAddress *(*next) (GSocketAddressEnumerator * enumerator,
				 GCancellable * cancellable,
				 GError * *error);
	void (*next_async) (GSocketAddressEnumerator * enumerator,
			    GCancellable * cancellable,
			    GAsyncReadyCallback callback,
			    gpointer user_data);
	GSocketAddress *(*next_finish) (GSocketAddressEnumerator *
					enumerator, GAsyncResult * result,
					GError * *error);
    };


/* Function prototypes */

    extern GType g_socket_address_enumerator_get_type(void);
    extern GSocketAddress
	*g_socket_address_enumerator_next(GSocketAddressEnumerator *
					  enumerator,
					  GCancellable * cancellable,
					  GError * *error);
    extern void
	g_socket_address_enumerator_next_async(GSocketAddressEnumerator *
					       enumerator,
					       GCancellable * cancellable,
					       GAsyncReadyCallback
					       callback,
					       gpointer user_data);
    extern GSocketAddress
	*g_socket_address_enumerator_next_finish(GSocketAddressEnumerator *
						 enumerator,
						 GAsyncResult * result,
						 GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
