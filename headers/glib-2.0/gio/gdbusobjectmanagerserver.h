#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSOBJECTMANAGERSERVER_H_
#define _GLIB_2_0_GIO_GDBUSOBJECTMANAGERSERVER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_OBJECT_MANAGER_SERVER	(g_dbus_object_manager_server_get_type ())
#define G_DBUS_OBJECT_MANAGER_SERVER_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DBUS_OBJECT_MANAGER_SERVER, GDBusObjectManagerServerClass))
#define G_IS_DBUS_OBJECT_MANAGER_SERVER_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DBUS_OBJECT_MANAGER_SERVER))
#define G_DBUS_OBJECT_MANAGER_SERVER(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_OBJECT_MANAGER_SERVER, GDBusObjectManagerServer))
#define G_IS_DBUS_OBJECT_MANAGER_SERVER(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_OBJECT_MANAGER_SERVER))
#define G_DBUS_OBJECT_MANAGER_SERVER_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DBUS_OBJECT_MANAGER_SERVER, GDBusObjectManagerServerClass))


    typedef struct _GDBusObjectManagerServerClass
	GDBusObjectManagerServerClass;

    typedef struct _GDBusObjectManagerServerPrivate
	GDBusObjectManagerServerPrivate;

    struct _GDBusObjectManagerServer {
	GObject parent_instance;
	GDBusObjectManagerServerPrivate *priv;
    };

    struct _GDBusObjectManagerServerClass {
	GObjectClass parent_class;
	gpointer padding[8];
    };


/* Function prototypes */

    extern void
	g_dbus_object_manager_server_export(GDBusObjectManagerServer *
					    manager,
					    GDBusObjectSkeleton * object);
    extern void
	g_dbus_object_manager_server_export_uniquely
	(GDBusObjectManagerServer * manager, GDBusObjectSkeleton * object);
    extern GDBusConnection
	*g_dbus_object_manager_server_get_connection
	(GDBusObjectManagerServer * manager);
    extern GType g_dbus_object_manager_server_get_type(void);
    extern GDBusObjectManagerServer *g_dbus_object_manager_server_new(const
								      gchar
								      *
								      object_path);
    extern void
	g_dbus_object_manager_server_set_connection
	(GDBusObjectManagerServer * manager, GDBusConnection * connection);
    extern gboolean
	g_dbus_object_manager_server_unexport(GDBusObjectManagerServer *
					      manager,
					      const gchar * object_path);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
