#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSIMPLEACTIONGROUP_H_
#define _GLIB_2_0_GIO_GSIMPLEACTIONGROUP_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gactionmap.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SIMPLE_ACTION_GROUP	(g_simple_action_group_get_type ())
#define G_SIMPLE_ACTION_GROUP_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SIMPLE_ACTION_GROUP, GSimpleActionGroupClass))
#define G_IS_SIMPLE_ACTION_GROUP_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SIMPLE_ACTION_GROUP))
#define G_SIMPLE_ACTION_GROUP(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SIMPLE_ACTION_GROUP, GSimpleActionGroup))
#define G_IS_SIMPLE_ACTION_GROUP(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SIMPLE_ACTION_GROUP))
#define G_SIMPLE_ACTION_GROUP_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SIMPLE_ACTION_GROUP, GSimpleActionGroupClass))


    typedef struct _GSimpleActionGroupPrivate GSimpleActionGroupPrivate;

    typedef struct _GSimpleActionGroupClass GSimpleActionGroupClass;

    struct _GSimpleActionGroup {
	GObject parent_instance;
	GSimpleActionGroupPrivate *priv;
    };

    struct _GSimpleActionGroupClass {
	GObjectClass parent_class;
	gpointer padding[12];
    };


/* Function prototypes */

    extern void g_simple_action_group_add_entries(GSimpleActionGroup *
						  simple,
						  const GActionEntry *
						  entries, gint n_entries,
						  gpointer user_data);
    extern GType g_simple_action_group_get_type(void);
    extern void g_simple_action_group_insert(GSimpleActionGroup * simple,
					     GAction * action);
    extern GAction *g_simple_action_group_lookup(GSimpleActionGroup *
						 simple,
						 const gchar *
						 action_name);
    extern GSimpleActionGroup *g_simple_action_group_new(void);
    extern void g_simple_action_group_remove(GSimpleActionGroup * simple,
					     const gchar * action_name);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
