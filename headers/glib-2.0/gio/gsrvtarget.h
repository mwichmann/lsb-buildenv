#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSRVTARGET_H_
#define _GLIB_2_0_GIO_GSRVTARGET_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SRV_TARGET	(g_srv_target_get_type ())



/* Function prototypes */

    extern GSrvTarget *g_srv_target_copy(GSrvTarget * target);
    extern void g_srv_target_free(GSrvTarget * target);
    extern const char *g_srv_target_get_hostname(GSrvTarget * target);
    extern guint16 g_srv_target_get_port(GSrvTarget * target);
    extern guint16 g_srv_target_get_priority(GSrvTarget * target);
    extern GType g_srv_target_get_type(void);
    extern guint16 g_srv_target_get_weight(GSrvTarget * target);
    extern GList *g_srv_target_list_sort(GList * targets);
    extern GSrvTarget *g_srv_target_new(const gchar * hostname,
					guint16 port, guint16 priority,
					guint16 weight);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
