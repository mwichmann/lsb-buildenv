#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GMENU_H_
#define _GLIB_2_0_GIO_GMENU_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_MENU	(g_menu_get_type ())
#define G_TYPE_MENU_ITEM	(g_menu_item_get_type ())
#define G_MENU(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_MENU, GMenu))
#define G_MENU_ITEM(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_MENU_ITEM, GMenuItem))
#define G_IS_MENU(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_MENU))
#define G_IS_MENU_ITEM(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_MENU_ITEM))


    typedef struct _GMenuItem GMenuItem;

    typedef struct _GMenu GMenu;


/* Function prototypes */

    extern void g_menu_append(GMenu * menu, const gchar * label,
			      const gchar * detailed_action);
    extern void g_menu_append_item(GMenu * menu, GMenuItem * item);
    extern void g_menu_append_section(GMenu * menu, const gchar * label,
				      GMenuModel * section);
    extern void g_menu_append_submenu(GMenu * menu, const gchar * label,
				      GMenuModel * submenu);
    extern void g_menu_freeze(GMenu * menu);
    extern GType g_menu_get_type(void);
    extern void g_menu_insert(GMenu * menu, gint position,
			      const gchar * label,
			      const gchar * detailed_action);
    extern void g_menu_insert_item(GMenu * menu, gint position,
				   GMenuItem * item);
    extern void g_menu_insert_section(GMenu * menu, gint position,
				      const gchar * label,
				      GMenuModel * section);
    extern void g_menu_insert_submenu(GMenu * menu, gint position,
				      const gchar * label,
				      GMenuModel * submenu);
    extern GType g_menu_item_get_type(void);
    extern GMenuItem *g_menu_item_new(const gchar * label,
				      const gchar * detailed_action);
    extern GMenuItem *g_menu_item_new_section(const gchar * label,
					      GMenuModel * section);
    extern GMenuItem *g_menu_item_new_submenu(const gchar * label,
					      GMenuModel * submenu);
    extern void g_menu_item_set_action_and_target(GMenuItem * menu_item,
						  const gchar * action,
						  const gchar *
						  format_string, ...);
    extern void g_menu_item_set_action_and_target_value(GMenuItem *
							menu_item,
							const gchar *
							action,
							GVariant *
							target_value);
    extern void g_menu_item_set_attribute(GMenuItem * menu_item,
					  const gchar * attribute,
					  const gchar * format_string,
					  ...);
    extern void g_menu_item_set_attribute_value(GMenuItem * menu_item,
						const gchar * attribute,
						GVariant * value);
    extern void g_menu_item_set_detailed_action(GMenuItem * menu_item,
						const gchar *
						detailed_action);
    extern void g_menu_item_set_label(GMenuItem * menu_item,
				      const gchar * label);
    extern void g_menu_item_set_link(GMenuItem * menu_item,
				     const gchar * link,
				     GMenuModel * model);
    extern void g_menu_item_set_section(GMenuItem * menu_item,
					GMenuModel * section);
    extern void g_menu_item_set_submenu(GMenuItem * menu_item,
					GMenuModel * submenu);
    extern GMenu *g_menu_new(void);
    extern void g_menu_prepend(GMenu * menu, const gchar * label,
			       const gchar * detailed_action);
    extern void g_menu_prepend_item(GMenu * menu, GMenuItem * item);
    extern void g_menu_prepend_section(GMenu * menu, const gchar * label,
				       GMenuModel * section);
    extern void g_menu_prepend_submenu(GMenu * menu, const gchar * label,
				       GMenuModel * submenu);
    extern void g_menu_remove(GMenu * menu, gint position);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
