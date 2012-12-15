#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSIMPLEACTION_H_
#define _GLIB_2_0_GIO_GSIMPLEACTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SIMPLE_ACTION	(g_simple_action_get_type ())
#define G_SIMPLE_ACTION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SIMPLE_ACTION, GSimpleAction))
#define G_IS_SIMPLE_ACTION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SIMPLE_ACTION))



/* Function prototypes */

    extern GType g_simple_action_get_type(void);
    extern GSimpleAction *g_simple_action_new(const gchar * name,
					      GVariantType *
					      parameter_type);
    extern GSimpleAction *g_simple_action_new_stateful(const gchar * name,
						       GVariantType *
						       parameter_type,
						       GVariant * state);
    extern void g_simple_action_set_enabled(GSimpleAction * simple,
					    gboolean enabled);
    extern void g_simple_action_set_state(GSimpleAction * simple,
					  GVariant * value);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
