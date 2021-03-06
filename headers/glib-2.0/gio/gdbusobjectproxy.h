#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSOBJECTPROXY_H_
#define _GLIB_2_0_GIO_GDBUSOBJECTPROXY_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_OBJECT_PROXY	(g_dbus_object_proxy_get_type ())
#define G_DBUS_OBJECT_PROXY_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DBUS_OBJECT_PROXY, GDBusObjectProxyClass))
#define G_IS_DBUS_OBJECT_PROXY_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DBUS_OBJECT_PROXY))
#define G_DBUS_OBJECT_PROXY(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_OBJECT_PROXY, GDBusObjectProxy))
#define G_IS_DBUS_OBJECT_PROXY(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_OBJECT_PROXY))
#define G_DBUS_OBJECT_PROXY_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DBUS_OBJECT_PROXY, GDBusObjectProxyClass))


    typedef struct _GDBusObjectProxyClass GDBusObjectProxyClass;

    typedef struct _GDBusObjectProxyPrivate GDBusObjectProxyPrivate;

    struct _GDBusObjectProxy {
	GObject parent_instance;
	GDBusObjectProxyPrivate *priv;
    };

    struct _GDBusObjectProxyClass {
	GObjectClass parent_class;
	gpointer padding[8];
    };


/* Function prototypes */

    extern GDBusConnection
	*g_dbus_object_proxy_get_connection(GDBusObjectProxy * proxy);
    extern GType g_dbus_object_proxy_get_type(void);
    extern GDBusObjectProxy *g_dbus_object_proxy_new(GDBusConnection *
						     connection,
						     const gchar *
						     object_path);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
