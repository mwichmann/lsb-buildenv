#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GNETWORKSERVICE_H_
#define _GLIB_2_0_GIO_GNETWORKSERVICE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_NETWORK_SERVICE	(g_network_service_get_type ())
#define G_NETWORK_SERVICE_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_NETWORK_SERVICE, GNetworkServiceClass))
#define G_IS_NETWORK_SERVICE_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_NETWORK_SERVICE))
#define G_NETWORK_SERVICE(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_NETWORK_SERVICE, GNetworkService))
#define G_IS_NETWORK_SERVICE(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_NETWORK_SERVICE))
#define G_NETWORK_SERVICE_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_NETWORK_SERVICE, GNetworkServiceClass))


    typedef struct _GNetworkServiceClass GNetworkServiceClass;

    typedef struct _GNetworkServicePrivate GNetworkServicePrivate;

    struct _GNetworkService {
	GObject parent_instance;
	GNetworkServicePrivate *priv;
    };

    struct _GNetworkServiceClass {
	GObjectClass parent_class;
    };


/* Function prototypes */

    extern const gchar *g_network_service_get_domain(GNetworkService *
						     srv);
    extern const gchar *g_network_service_get_protocol(GNetworkService *
						       srv);
    extern const gchar *g_network_service_get_scheme(GNetworkService *
						     srv);
    extern const gchar *g_network_service_get_service(GNetworkService *
						      srv);
    extern GType g_network_service_get_type(void);
    extern GSocketConnectable *g_network_service_new(const gchar * service,
						     const gchar *
						     protocol,
						     const gchar * domain);
    extern void g_network_service_set_scheme(GNetworkService * srv,
					     const gchar * scheme);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
