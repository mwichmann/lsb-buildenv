#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSOBJECT_H_
#define _GLIB_2_0_GIO_GDBUSOBJECT_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_OBJECT	(g_dbus_object_get_type())
#define G_DBUS_OBJECT(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_OBJECT, GDBusObject))
#define G_IS_DBUS_OBJECT(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_OBJECT))
#define G_DBUS_OBJECT_GET_IFACE(o)	(G_TYPE_INSTANCE_GET_INTERFACE((o), G_TYPE_DBUS_OBJECT, GDBusObjectIface))


    typedef struct _GDBusObjectIface GDBusObjectIface;

    struct _GDBusObjectIface {
	GTypeInterface parent_iface;
	const gchar *(*get_object_path) (GDBusObject * object);
	GList *(*get_interfaces) (GDBusObject * object);
	GDBusInterface *(*get_interface) (GDBusObject * object,
					  const gchar * interface_name);
	void (*interface_added) (GDBusObject * object,
				 GDBusInterface * interface_);
	void (*interface_removed) (GDBusObject * object,
				   GDBusInterface * interface_);
    };


/* Function prototypes */

    extern GDBusInterface *g_dbus_object_get_interface(GDBusObject *
						       object,
						       const gchar *
						       interface_name);
    extern GList *g_dbus_object_get_interfaces(GDBusObject * object);
    extern const char *g_dbus_object_get_object_path(GDBusObject * object);
    extern GType g_dbus_object_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
