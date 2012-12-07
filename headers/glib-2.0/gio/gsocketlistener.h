#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSOCKETLISTENER_H_
#define _GLIB_2_0_GIO_GSOCKETLISTENER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SOCKET_LISTENER	(g_socket_listener_get_type ())
#define G_SOCKET_LISTENER_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SOCKET_LISTENER, GSocketListenerClass))
#define G_IS_SOCKET_LISTENER_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SOCKET_LISTENER))
#define G_SOCKET_LISTENER(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SOCKET_LISTENER, GSocketListener))
#define G_IS_SOCKET_LISTENER(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SOCKET_LISTENER))
#define G_SOCKET_LISTENER_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SOCKET_LISTENER, GSocketListenerClass))


    typedef struct _GSocketListenerPrivate GSocketListenerPrivate;

    typedef struct _GSocketListenerClass GSocketListenerClass;

    struct _GSocketListenerClass {
	GObjectClass parent_class;
	void (*changed) (GSocketListener * listener);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
	void (*_g_reserved6) (void);
    };

    struct _GSocketListener {
	GObject parent_instance;
	GSocketListenerPrivate *priv;
    };


/* Function prototypes */

    extern GSocketConnection *g_socket_listener_accept(GSocketListener *
						       listener,
						       GObject *
						       *source_object,
						       GCancellable *
						       cancellable,
						       GError * *error);
    extern void g_socket_listener_accept_async(GSocketListener * listener,
					       GCancellable * cancellable,
					       GAsyncReadyCallback
					       callback,
					       gpointer user_data);
    extern GSocketConnection
	*g_socket_listener_accept_finish(GSocketListener * listener,
					 GAsyncResult * result,
					 GObject * *source_object,
					 GError * *error);
    extern GSocket *g_socket_listener_accept_socket(GSocketListener *
						    listener,
						    GObject *
						    *source_object,
						    GCancellable *
						    cancellable,
						    GError * *error);
    extern void g_socket_listener_accept_socket_async(GSocketListener *
						      listener,
						      GCancellable *
						      cancellable,
						      GAsyncReadyCallback
						      callback,
						      gpointer user_data);
    extern GSocket *g_socket_listener_accept_socket_finish(GSocketListener
							   * listener,
							   GAsyncResult *
							   result,
							   GObject *
							   *source_object,
							   GError *
							   *error);
    extern gboolean g_socket_listener_add_address(GSocketListener *
						  listener,
						  GSocketAddress * address,
						  GSocketType type,
						  GSocketProtocol protocol,
						  GObject * source_object,
						  GSocketAddress *
						  *effective_address,
						  GError * *error);
    extern guint16 g_socket_listener_add_any_inet_port(GSocketListener *
						       listener,
						       GObject *
						       source_object,
						       GError * *error);
    extern gboolean g_socket_listener_add_inet_port(GSocketListener *
						    listener, guint16 port,
						    GObject *
						    source_object,
						    GError * *error);
    extern gboolean g_socket_listener_add_socket(GSocketListener *
						 listener,
						 GSocket * socket,
						 GObject * source_object,
						 GError * *error);
    extern void g_socket_listener_close(GSocketListener * listener);
    extern GType g_socket_listener_get_type(void);
    extern GSocketListener *g_socket_listener_new(void);
    extern void g_socket_listener_set_backlog(GSocketListener * listener,
					      int listen_backlog);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
