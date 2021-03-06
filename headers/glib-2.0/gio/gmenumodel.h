#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GMENUMODEL_H_
#define _GLIB_2_0_GIO_GMENUMODEL_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_MENU_ATTRIBUTE_ITER	(g_menu_attribute_iter_get_type ())
#define G_TYPE_MENU_LINK_ITER	(g_menu_link_iter_get_type ())
#define G_TYPE_MENU_MODEL	(g_menu_model_get_type ())
#define G_MENU_ATTRIBUTE_ITER_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_MENU_ATTRIBUTE_ITER, GMenuAttributeIterClass))
#define G_MENU_LINK_ITER_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_MENU_LINK_ITER, GMenuLinkIterClass))
#define G_MENU_MODEL_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_MENU_MODEL, GMenuModelClass))
#define G_IS_MENU_ATTRIBUTE_ITER_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_MENU_ATTRIBUTE_ITER))
#define G_IS_MENU_LINK_ITER_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_MENU_LINK_ITER))
#define G_IS_MENU_MODEL_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_MENU_MODEL))
#define G_MENU_ATTRIBUTE_ITER(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_MENU_ATTRIBUTE_ITER, GMenuAttributeIter))
#define G_MENU_LINK_ITER(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_MENU_LINK_ITER, GMenuLinkIter))
#define G_MENU_MODEL(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_MENU_MODEL, GMenuModel))
#define G_IS_MENU_ATTRIBUTE_ITER(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_MENU_ATTRIBUTE_ITER))
#define G_IS_MENU_LINK_ITER(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_MENU_LINK_ITER))
#define G_IS_MENU_MODEL(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_MENU_MODEL))
#define G_MENU_ATTRIBUTE_ITER_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_MENU_ATTRIBUTE_ITER, GMenuAttributeIterClass))
#define G_MENU_LINK_ITER_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_MENU_LINK_ITER, GMenuLinkIterClass))
#define G_MENU_MODEL_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_MENU_MODEL, GMenuModelClass))
#define G_MENU_ATTRIBUTE_ACTION	"action"
#define G_MENU_ATTRIBUTE_LABEL	"label"
#define G_MENU_LINK_SECTION	"section"
#define G_MENU_LINK_SUBMENU	"submenu"
#define G_MENU_ATTRIBUTE_TARGET	"target"


    typedef struct _GMenuModelPrivate GMenuModelPrivate;

    typedef struct _GMenuModelClass GMenuModelClass;

    typedef struct _GMenuAttributeIterPrivate GMenuAttributeIterPrivate;

    typedef struct _GMenuAttributeIterClass GMenuAttributeIterClass;

    typedef struct _GMenuAttributeIter GMenuAttributeIter;

    typedef struct _GMenuLinkIterPrivate GMenuLinkIterPrivate;

    typedef struct _GMenuLinkIterClass GMenuLinkIterClass;

    typedef struct _GMenuLinkIter GMenuLinkIter;

    struct _GMenuModel {
	GObject parent_instance;
	GMenuModelPrivate *priv;
    };

    struct _GMenuModelClass {
	GObjectClass parent_class;
	 gboolean(*is_mutable) (GMenuModel * model);
	 gint(*get_n_items) (GMenuModel * model);
	void (*get_item_attributes) (GMenuModel * model, gint item_index,
				     GHashTable * *attributes);
	GMenuAttributeIter *(*iterate_item_attributes) (GMenuModel * model,
							gint item_index);
	GVariant *(*get_item_attribute_value) (GMenuModel * model,
					       gint item_index,
					       const gchar * attribute,
					       const GVariantType *
					       expected_type);
	void (*get_item_links) (GMenuModel * model, gint item_index,
				GHashTable * *attributes);
	GMenuLinkIter *(*iterate_item_links) (GMenuModel * model,
					      gint item_index);
	GMenuModel *(*get_item_link) (GMenuModel * model, gint item_index,
				      const gchar * link);
    };

    struct _GMenuAttributeIterClass {
	GObjectClass parent_class;
	 gboolean(*get_next) (GMenuAttributeIter * iter,
			      const gchar * *out_type, GVariant * *value);
    };

    struct _GMenuLinkIterClass {
	GObjectClass parent_class;
	 gboolean(*get_next) (GMenuLinkIter * iter,
			      const gchar * *out_name,
			      GMenuModel * *value);
    };

    struct _GMenuAttributeIter {
	GObject parent_instance;
	GMenuAttributeIterPrivate *priv;
    };

    struct _GMenuLinkIter {
	GObject parent_instance;
	GMenuLinkIterPrivate *priv;
    };


/* Function prototypes */

    extern const char *g_menu_attribute_iter_get_name(GMenuAttributeIter *
						      iter);
    extern gboolean g_menu_attribute_iter_get_next(GMenuAttributeIter *
						   iter,
						   const gchar * *out_name,
						   GVariant * *value);
    extern GType g_menu_attribute_iter_get_type(void);
    extern GVariant *g_menu_attribute_iter_get_value(GMenuAttributeIter *
						     iter);
    extern gboolean g_menu_attribute_iter_next(GMenuAttributeIter * iter);
    extern const char *g_menu_link_iter_get_name(GMenuLinkIter * iter);
    extern gboolean g_menu_link_iter_get_next(GMenuLinkIter * iter,
					      const gchar * *out_link,
					      GMenuModel * *value);
    extern GType g_menu_link_iter_get_type(void);
    extern GMenuModel *g_menu_link_iter_get_value(GMenuLinkIter * iter);
    extern gboolean g_menu_link_iter_next(GMenuLinkIter * iter);
    extern gboolean g_menu_model_get_item_attribute(GMenuModel * model,
						    gint item_index,
						    const gchar *
						    attribute,
						    const gchar *
						    format_string, ...);
    extern GVariant *g_menu_model_get_item_attribute_value(GMenuModel *
							   model,
							   gint item_index,
							   const gchar *
							   attribute,
							   const
							   GVariantType *
							   expected_type);
    extern GMenuModel *g_menu_model_get_item_link(GMenuModel * model,
						  gint item_index,
						  const gchar * link);
    extern gint g_menu_model_get_n_items(GMenuModel * model);
    extern GType g_menu_model_get_type(void);
    extern gboolean g_menu_model_is_mutable(GMenuModel * model);
    extern void g_menu_model_items_changed(GMenuModel * model,
					   gint position, gint removed,
					   gint added);
    extern GMenuAttributeIter
	*g_menu_model_iterate_item_attributes(GMenuModel * model,
					      gint item_index);
    extern GMenuLinkIter *g_menu_model_iterate_item_links(GMenuModel *
							  model,
							  gint item_index);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
