#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSACTIONGROUP_H_
#define _GLIB_2_0_GIO_GDBUSACTIONGROUP_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_ACTION_GROUP	(g_dbus_action_group_get_type ())
#define G_DBUS_ACTION_GROUP_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_DBUS_ACTION_GROUP, GDBusActionGroupClass))
#define G_IS_DBUS_ACTION_GROUP_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_DBUS_ACTION_GROUP))
#define G_DBUS_ACTION_GROUP(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_DBUS_ACTION_GROUP, GDBusActionGroup))
#define G_IS_DBUS_ACTION_GROUP(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_DBUS_ACTION_GROUP))
#define G_DBUS_ACTION_GROUP_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_DBUS_ACTION_GROUP, GDBusActionGroupClass))



/* Function prototypes */

    extern GDBusActionGroup *g_dbus_action_group_get(GDBusConnection *
						     connection,
						     const gchar *
						     bus_name,
						     const gchar *
						     object_path);
    extern GType g_dbus_action_group_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
