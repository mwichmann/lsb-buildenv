#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSUTILS_H_
#define _GLIB_2_0_GIO_GDBUSUTILS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern gchar *g_dbus_generate_guid(void);
    extern GVariant *g_dbus_gvalue_to_gvariant(const GValue * gvalue,
					       const GVariantType * type);
    extern void g_dbus_gvariant_to_gvalue(GVariant * value,
					  GValue * out_gvalue);
    extern gboolean g_dbus_is_guid(const gchar * string);
    extern gboolean g_dbus_is_interface_name(const gchar * string);
    extern gboolean g_dbus_is_member_name(const gchar * string);
    extern gboolean g_dbus_is_name(const gchar * string);
    extern gboolean g_dbus_is_unique_name(const gchar * string);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
