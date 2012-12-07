#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSIMPLEPERMISSION_H_
#define _GLIB_2_0_GIO_GSIMPLEPERMISSION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SIMPLE_PERMISSION	(g_simple_permission_get_type ())
#define G_SIMPLE_PERMISSION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SIMPLE_PERMISSION, GSimplePermission))
#define G_IS_SIMPLE_PERMISSION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SIMPLE_PERMISSION))



/* Function prototypes */

    extern GType g_simple_permission_get_type(void);
    extern GPermission *g_simple_permission_new(gboolean allowed);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
