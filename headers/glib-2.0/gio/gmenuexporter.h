#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GMENUEXPORTER_H_
#define _GLIB_2_0_GIO_GMENUEXPORTER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern guint g_dbus_connection_export_menu_model(GDBusConnection *
						     connection,
						     const gchar *
						     object_path,
						     GMenuModel * menu,
						     GError * *error);
    extern void g_dbus_connection_unexport_menu_model(GDBusConnection *
						      connection,
						      guint export_id);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
