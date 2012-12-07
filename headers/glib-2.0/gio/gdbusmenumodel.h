#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSMENUMODEL_H_
#define _GLIB_2_0_GIO_GDBUSMENUMODEL_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_MENU_MODEL	(g_dbus_menu_model_get_type ())
#define G_DBUS_MENU_MODEL(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_DBUS_MENU_MODEL, GDBusMenuModel))
#define G_IS_DBUS_MENU_MODEL(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_DBUS_MENU_MODEL))


    typedef struct _GDBusMenuModel GDBusMenuModel;


/* Function prototypes */

    extern GDBusMenuModel *g_dbus_menu_model_get(GDBusConnection *
						 connection,
						 const gchar * bus_name,
						 const gchar *
						 object_path);
    extern GType g_dbus_menu_model_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
