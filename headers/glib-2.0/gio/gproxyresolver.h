#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GPROXYRESOLVER_H_
#define _GLIB_2_0_GIO_GPROXYRESOLVER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_PROXY_RESOLVER	(g_proxy_resolver_get_type ())
#define G_PROXY_RESOLVER(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_PROXY_RESOLVER, GProxyResolver))
#define G_IS_PROXY_RESOLVER(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_PROXY_RESOLVER))
#define G_PROXY_RESOLVER_GET_IFACE(o)	(G_TYPE_INSTANCE_GET_INTERFACE ((o), G_TYPE_PROXY_RESOLVER, GProxyResolverInterface))
#define G_PROXY_RESOLVER_EXTENSION_POINT_NAME	"gio-proxy-resolver"


    typedef struct _GProxyResolverInterface GProxyResolverInterface;

    struct _GProxyResolverInterface {
	GTypeInterface g_iface;
	 gboolean(*is_supported) (GProxyResolver * resolver);
	gchar **(*lookup) (GProxyResolver * resolver, const gchar * uri,
			   GCancellable * cancellable, GError * *error);
	void (*lookup_async) (GProxyResolver * resolver, const gchar * uri,
			      GCancellable * cancellable,
			      GAsyncReadyCallback callback,
			      gpointer user_data);
	gchar **(*lookup_finish) (GProxyResolver * resolver,
				  GAsyncResult * result, GError * *error);
    };


/* Function prototypes */

    extern GProxyResolver *g_proxy_resolver_get_default(void);
    extern GType g_proxy_resolver_get_type(void);
    extern gboolean g_proxy_resolver_is_supported(GProxyResolver *
						  resolver);
    extern gchar **g_proxy_resolver_lookup(GProxyResolver * resolver,
					   const gchar * uri,
					   GCancellable * cancellable,
					   GError * *error);
    extern void g_proxy_resolver_lookup_async(GProxyResolver * resolver,
					      const gchar * uri,
					      GCancellable * cancellable,
					      GAsyncReadyCallback callback,
					      gpointer user_data);
    extern gchar **g_proxy_resolver_lookup_finish(GProxyResolver *
						  resolver,
						  GAsyncResult * result,
						  GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
