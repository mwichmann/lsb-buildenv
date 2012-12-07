#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSOCKETSERVICE_H_
#define _GLIB_2_0_GIO_GSOCKETSERVICE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsocketlistener.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SOCKET_SERVICE	(g_socket_service_get_type ())
#define G_SOCKET_SERVICE_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SOCKET_SERVICE, GSocketServiceClass))
#define G_IS_SOCKET_SERVICE_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SOCKET_SERVICE))
#define G_SOCKET_SERVICE(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SOCKET_SERVICE, GSocketService))
#define G_IS_SOCKET_SERVICE(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SOCKET_SERVICE))
#define G_SOCKET_SERVICE_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SOCKET_SERVICE, GSocketServiceClass))


    typedef struct _GSocketServicePrivate GSocketServicePrivate;

    typedef struct _GSocketServiceClass GSocketServiceClass;

    struct _GSocketServiceClass {
	GSocketListenerClass parent_class;
	 gboolean(*incoming) (GSocketService * service,
			      GSocketConnection * connection,
			      GObject * source_object);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
	void (*_g_reserved6) (void);
    };

    struct _GSocketService {
	GSocketListener parent_instance;
	GSocketServicePrivate *priv;
    };


/* Function prototypes */

    extern GType g_socket_service_get_type(void);
    extern gboolean g_socket_service_is_active(GSocketService * service);
    extern GSocketService *g_socket_service_new(void);
    extern void g_socket_service_start(GSocketService * service);
    extern void g_socket_service_stop(GSocketService * service);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
