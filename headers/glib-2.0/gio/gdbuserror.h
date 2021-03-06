#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSERROR_H_
#define _GLIB_2_0_GIO_GDBUSERROR_H_

#include <stdarg.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_DBUS_ERROR	g_dbus_error_quark()


    struct _GDBusErrorEntry {
	gint error_code;
	const gchar *dbus_error_name;
    };


/* Function prototypes */

    extern gchar *g_dbus_error_encode_gerror(const GError * error);
    extern gchar *g_dbus_error_get_remote_error(const GError * error);
    extern gboolean g_dbus_error_is_remote_error(const GError * error);
    extern GError *g_dbus_error_new_for_dbus_error(const gchar *
						   dbus_error_name,
						   const gchar *
						   dbus_error_message);
    extern GQuark g_dbus_error_quark(void);
    extern gboolean g_dbus_error_register_error(GQuark error_domain,
						gint error_code,
						const gchar *
						dbus_error_name);
    extern void g_dbus_error_register_error_domain(const gchar *
						   error_domain_quark_name,
						   volatile gsize *
						   quark_volatile,
						   const GDBusErrorEntry *
						   entries,
						   guint num_entries);
    extern void g_dbus_error_set_dbus_error(GError * *error,
					    const gchar * dbus_error_name,
					    const gchar *
					    dbus_error_message,
					    const gchar * format, ...);
    extern void g_dbus_error_set_dbus_error_valist(GError * *error,
						   const gchar *
						   dbus_error_name,
						   const gchar *
						   dbus_error_message,
						   const gchar * format,
						   va_list var_args);
    extern gboolean g_dbus_error_strip_remote_error(GError * error);
    extern gboolean g_dbus_error_unregister_error(GQuark error_domain,
						  gint error_code,
						  const gchar *
						  dbus_error_name);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
