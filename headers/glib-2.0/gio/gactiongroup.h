#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GACTIONGROUP_H_
#define _GLIB_2_0_GIO_GACTIONGROUP_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_ACTION_GROUP	(g_action_group_get_type ())
#define G_ACTION_GROUP(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_ACTION_GROUP, GActionGroup))
#define G_IS_ACTION_GROUP(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_ACTION_GROUP))
#define G_ACTION_GROUP_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_ACTION_GROUP, GActionGroupInterface))


    typedef struct _GActionGroupInterface GActionGroupInterface;

    struct _GActionGroupInterface {
	GTypeInterface g_iface;
	 gboolean(*has_action) (GActionGroup * action_group,
				const gchar * action_name);
	gchar **(*list_actions) (GActionGroup * action_group);
	 gboolean(*get_action_enabled) (GActionGroup * action_group,
					const gchar * action_name);
	const GVariantType *(*get_action_parameter_type) (GActionGroup *
							  action_group,
							  const gchar *
							  action_name);
	const GVariantType *(*get_action_state_type) (GActionGroup *
						      action_group,
						      const gchar *
						      action_name);
	GVariant *(*get_action_state_hint) (GActionGroup * action_group,
					    const gchar * action_name);
	GVariant *(*get_action_state) (GActionGroup * action_group,
				       const gchar * action_name);
	void (*change_action_state) (GActionGroup * action_group,
				     const gchar * action_name,
				     GVariant * value);
	void (*activate_action) (GActionGroup * action_group,
				 const gchar * action_name,
				 GVariant * parameter);
	void (*action_added) (GActionGroup * action_group,
			      const gchar * action_name);
	void (*action_removed) (GActionGroup * action_group,
				const gchar * action_name);
	void (*action_enabled_changed) (GActionGroup * action_group,
					const gchar * action_name,
					gboolean enabled);
	void (*action_state_changed) (GActionGroup * action_group,
				      const gchar * action_name,
				      GVariant * state);
	 gboolean(*query_action) (GActionGroup * action_group,
				  const gchar * action_name,
				  gboolean * enabled,
				  const GVariantType * parameter_type,
				  const GVariantType * state_type,
				  GVariant * *state_hint,
				  GVariant * *state);
    };


/* Function prototypes */

    extern void g_action_group_action_added(GActionGroup * action_group,
					    const char *action_name);
    extern void g_action_group_action_enabled_changed(GActionGroup *
						      action_group,
						      const char
						      *action_name,
						      gboolean enabled);
    extern void g_action_group_action_removed(GActionGroup * action_group,
					      const char *action_name);
    extern void g_action_group_action_state_changed(GActionGroup *
						    action_group,
						    const char
						    *action_name,
						    GVariant * state);
    extern void g_action_group_activate_action(GActionGroup * action_group,
					       const char *action_name,
					       GVariant * parameter);
    extern void g_action_group_change_action_state(GActionGroup *
						   action_group,
						   const char *action_name,
						   GVariant * value);
    extern gboolean g_action_group_get_action_enabled(GActionGroup *
						      action_group,
						      const char
						      *action_name);
    extern g_action_group_get_action_parameter_type(GActionGroup *
						    action_group,
						    const char
						    *action_name);
    extern GVariant *g_action_group_get_action_state(GActionGroup *
						     action_group,
						     const char
						     *action_name);
    extern GVariant *g_action_group_get_action_state_hint(GActionGroup *
							  action_group,
							  const char
							  *action_name);
    extern g_action_group_get_action_state_type(GActionGroup *
						action_group,
						const char *action_name);
    extern GType g_action_group_get_type(void);
    extern gboolean g_action_group_has_action(GActionGroup * action_group,
					      const char *action_name);
    extern gchar **g_action_group_list_actions(GActionGroup *
					       action_group);
    extern gboolean g_action_group_query_action(GActionGroup *
						action_group,
						const char *action_name,
						gboolean * enabled,
						const GVariantType *
						parameter_type,
						const GVariantType *
						state_type,
						GVariant * *state_hint,
						GVariant * *state);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
