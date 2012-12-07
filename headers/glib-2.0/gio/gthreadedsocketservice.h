#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTHREADEDSOCKETSERVICE_H_
#define _GLIB_2_0_GIO_GTHREADEDSOCKETSERVICE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsocketlistener.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gsocketservice.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_THREADED_SOCKET_SERVICE	(g_threaded_socket_service_get_type ())
#define G_THREADED_SOCKET_SERVICE_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_THREADED_SOCKET_SERVICE, GThreadedSocketServiceClass))
#define G_IS_THREADED_SOCKET_SERVICE_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_THREADED_SOCKET_SERVICE))
#define G_THREADED_SOCKET_SERVICE(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_THREADED_SOCKET_SERVICE, GThreadedSocketService))
#define G_IS_THREADED_SOCKET_SERVICE(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_THREADED_SOCKET_SERVICE))
#define G_THREADED_SOCKET_SERVICE_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_THREADED_SOCKET_SERVICE, GThreadedSocketServiceClass))


    typedef struct _GThreadedSocketServicePrivate
	GThreadedSocketServicePrivate;

    typedef struct _GThreadedSocketServiceClass
	GThreadedSocketServiceClass;

    struct _GThreadedSocketServiceClass {
	GSocketServiceClass parent_class;
	 gboolean(*run) (GThreadedSocketService * service,
			 GSocketConnection * connection,
			 GObject * source_object);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };

    struct _GThreadedSocketService {
	GSocketService parent_instance;
	GThreadedSocketServicePrivate *priv;
    };


/* Function prototypes */

    extern GType g_threaded_socket_service_get_type(void);
    extern GSocketService *g_threaded_socket_service_new(int max_threads);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
