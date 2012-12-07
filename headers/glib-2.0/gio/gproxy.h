#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GPROXY_H_
#define _GLIB_2_0_GIO_GPROXY_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_PROXY	(g_proxy_get_type ())
#define G_PROXY(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_PROXY, GProxy))
#define G_IS_PROXY(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_PROXY))
#define G_PROXY_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_PROXY, GProxyInterface))
#define G_PROXY_EXTENSION_POINT_NAME	"gio-proxy"


    typedef struct _GProxyInterface GProxyInterface;

    struct _GProxyInterface {
	GTypeInterface g_iface;
	GIOStream *(*connect) (GProxy * proxy, GIOStream * connection,
			       GProxyAddress * proxy_address,
			       GCancellable * cancellable,
			       GError * *error);
	void (*connect_async) (GProxy * proxy, GIOStream * connection,
			       GProxyAddress * proxy_address,
			       GCancellable * cancellable,
			       GAsyncReadyCallback callback,
			       gpointer user_data);
	GIOStream *(*connect_finish) (GProxy * proxy,
				      GAsyncResult * result,
				      GError * *error);
	 gboolean(*supports_hostname) (GProxy * proxy);
    };


/* Function prototypes */

    extern GIOStream *g_proxy_connect(GProxy * proxy,
				      GIOStream * connection,
				      GProxyAddress * proxy_address,
				      GCancellable * cancellable,
				      GError * *error);
    extern void g_proxy_connect_async(GProxy * proxy,
				      GIOStream * connection,
				      GProxyAddress * proxy_address,
				      GCancellable * cancellable,
				      GAsyncReadyCallback callback,
				      gpointer user_data);
    extern GIOStream *g_proxy_connect_finish(GProxy * proxy,
					     GAsyncResult * result,
					     GError * *error);
    extern GProxy *g_proxy_get_default_for_protocol(const gchar *
						    protocol);
    extern GType g_proxy_get_type(void);
    extern gboolean g_proxy_supports_hostname(GProxy * proxy);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
