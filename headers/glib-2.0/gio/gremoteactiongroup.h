#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GREMOTEACTIONGROUP_H_
#define _GLIB_2_0_GIO_GREMOTEACTIONGROUP_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_REMOTE_ACTION_GROUP	(g_remote_action_group_get_type ())
#define G_REMOTE_ACTION_GROUP(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_REMOTE_ACTION_GROUP, GRemoteActionGroup))
#define G_IS_REMOTE_ACTION_GROUP(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_REMOTE_ACTION_GROUP))
#define G_REMOTE_ACTION_GROUP_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_REMOTE_ACTION_GROUP, GRemoteActionGroupInterface))


    typedef struct _GRemoteActionGroupInterface
	GRemoteActionGroupInterface;

    struct _GRemoteActionGroupInterface {
	GTypeInterface g_iface;
	void (*activate_action_full) (GRemoteActionGroup * resolver,
				      const gchar * action_name,
				      GVariant * parameter,
				      GVariant * platform_data);
	void (*change_action_state_full) (GRemoteActionGroup * resolver,
					  const gchar * action_name,
					  GVariant * value,
					  GVariant * platform_data);
    };


/* Function prototypes */

    extern void
	g_remote_action_group_activate_action_full(GRemoteActionGroup *
						   remote,
						   const gchar *
						   action_name,
						   GVariant * parameter,
						   GVariant *
						   platform_data);
    extern void
	g_remote_action_group_change_action_state_full(GRemoteActionGroup *
						       remote,
						       const gchar *
						       action_name,
						       GVariant * value,
						       GVariant *
						       platform_data);
    extern GType g_remote_action_group_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
