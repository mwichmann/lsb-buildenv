#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSINTERFACE_H_
#define _GLIB_2_0_GIO_GDBUSINTERFACE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_INTERFACE	(g_dbus_interface_get_type())
#define G_DBUS_INTERFACE(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_INTERFACE, GDBusInterface))
#define G_IS_DBUS_INTERFACE(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_INTERFACE))
#define G_DBUS_INTERFACE_GET_IFACE(o)	(G_TYPE_INSTANCE_GET_INTERFACE((o), G_TYPE_DBUS_INTERFACE, GDBusInterfaceIface))


    typedef struct _GDBusInterfaceIface GDBusInterfaceIface;

    struct _GDBusInterfaceIface {
	GTypeInterface parent_iface;
	GDBusInterfaceInfo *(*get_info) (GDBusInterface * interface_);
	GDBusObject *(*get_object) (GDBusInterface * interface_);
	void (*set_object) (GDBusInterface * interface_,
			    GDBusObject * object);
	GDBusObject *(*dup_object) (GDBusInterface * interface_);
    };


/* Function prototypes */

    extern GDBusObject *g_dbus_interface_dup_object(GDBusInterface *
						    interface_);
    extern GDBusInterfaceInfo *g_dbus_interface_get_info(GDBusInterface *
							 interface_);
    extern GDBusObject *g_dbus_interface_get_object(GDBusInterface *
						    interface_);
    extern GType g_dbus_interface_get_type(void);
    extern void g_dbus_interface_set_object(GDBusInterface * interface_,
					    GDBusObject * object);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
