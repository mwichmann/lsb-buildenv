#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSOBJECTMANAGER_H_
#define _GLIB_2_0_GIO_GDBUSOBJECTMANAGER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_OBJECT_MANAGER	(g_dbus_object_manager_get_type())
#define G_DBUS_OBJECT_MANAGER(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_OBJECT_MANAGER, GDBusObjectManager))
#define G_IS_DBUS_OBJECT_MANAGER(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_OBJECT_MANAGER))
#define G_DBUS_OBJECT_MANAGER_GET_IFACE(o)	(G_TYPE_INSTANCE_GET_INTERFACE((o), G_TYPE_DBUS_OBJECT_MANAGER, GDBusObjectManagerIface))


    typedef struct _GDBusObjectManagerIface GDBusObjectManagerIface;

    struct _GDBusObjectManagerIface {
	GTypeInterface parent_iface;
	const gchar *(*get_object_path) (GDBusObjectManager * manager);
	GList *(*get_objects) (GDBusObjectManager * manager);
	GDBusObject *(*get_object) (GDBusObjectManager * manager,
				    const gchar * object_path);
	GDBusInterface *(*get_interface) (GDBusObjectManager * manager,
					  const gchar * object_path,
					  const gchar * interface_name);
	void (*object_added) (GDBusObjectManager * manager,
			      GDBusObject * object);
	void (*object_removed) (GDBusObjectManager * manager,
				GDBusObject * object);
	void (*interface_added) (GDBusObjectManager * manager,
				 GDBusObject * object,
				 GDBusInterface * interface_);
	void (*interface_removed) (GDBusObjectManager * manager,
				   GDBusObject * object,
				   GDBusInterface * interface_);
    };


/* Function prototypes */

    extern GDBusInterface
	*g_dbus_object_manager_get_interface(GDBusObjectManager * manager,
					     const gchar * object_path,
					     const gchar * interface_name);
    extern GDBusObject *g_dbus_object_manager_get_object(GDBusObjectManager
							 * manager,
							 const gchar *
							 object_path);
    extern const char
	*g_dbus_object_manager_get_object_path(GDBusObjectManager *
					       manager);
    extern GList *g_dbus_object_manager_get_objects(GDBusObjectManager *
						    manager);
    extern GType g_dbus_object_manager_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
