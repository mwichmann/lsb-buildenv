#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GACTION_H_
#define _GLIB_2_0_GIO_GACTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_ACTION	(g_action_get_type ())
#define G_ACTION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_ACTION, GAction))
#define G_IS_ACTION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_ACTION))
#define G_ACTION_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_ACTION, GActionInterface))
#define SA_STACK	SA_ONSTACK


    typedef struct _GActionInterface GActionInterface;

    struct _GActionInterface {
	GTypeInterface g_iface;
	const gchar *get_name;
	const GVariantType(*get_parameter_type) (GAction * action);
	const GVariantType(*get_state_type) (GAction * action);
	GVariant *(*get_state_hint) (GAction * action);
	 gboolean(*get_enabled) (GAction * action);
	GVariant *(*get_state) (GAction * action);
	void (*change_state) (GAction * action, GVariant * value);
	void (*activate) (GAction * action, GVariant * parameter);
    };


/* Function prototypes */

    extern void g_action_activate(GAction * action, GVariant * parameter);
    extern void g_action_change_state(GAction * action, GVariant * value);
    extern gboolean g_action_get_enabled(GAction * action);
    extern const char *g_action_get_name(GAction * action);
    extern GVariantType *g_action_get_parameter_type(GAction * action);
    extern GVariant *g_action_get_state(GAction * action);
    extern GVariant *g_action_get_state_hint(GAction * action);
    extern GVariantType *g_action_get_state_type(GAction * action);
    extern GType g_action_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
