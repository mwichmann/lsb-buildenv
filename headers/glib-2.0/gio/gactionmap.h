#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GACTIONMAP_H_
#define _GLIB_2_0_GIO_GACTIONMAP_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_ACTION_MAP	(g_action_map_get_type ())
#define G_ACTION_MAP(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_ACTION_MAP, GActionMap))
#define G_IS_ACTION_MAP(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_ACTION_MAP))
#define G_ACTION_MAP_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_ACTION_MAP, GActionMapInterface))


    typedef struct _GActionMapInterface GActionMapInterface;

    typedef struct _GActionEntry GActionEntry;

    struct _GActionMapInterface {
	GTypeInterface g_iface;
	GAction *(*lookup_action) (GActionMap * action_map,
				   const gchar * action_name);
	void (*add_action) (GActionMap * action_map, GAction * action);
	void (*remove_action) (GActionMap * action_map,
			       const gchar * action_name);
    };

    struct _GActionEntry {
	const gchar *name;
	void (*activate) (GSimpleAction * action, GVariant * parameter,
			  gpointer user_data);
	const gchar *parameter_type;
	const gchar *state;
	void (*change_state) (GSimpleAction * action, GVariant * value,
			      gpointer user_data);
	gsize padding[3];
    };


/* Function prototypes */

    extern void g_action_map_add_action(GActionMap * action_map,
					GAction * action);
    extern void g_action_map_add_action_entries(GActionMap * action_map,
						const GActionEntry *
						entries, gint n_entries,
						gpointer user_data);
    extern GType g_action_map_get_type(void);
    extern GAction *g_action_map_lookup_action(GActionMap * action_map,
					       const char *action_name);
    extern void g_action_map_remove_action(GActionMap * action_map,
					   const char *action_name);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
