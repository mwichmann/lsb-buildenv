#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSETTINGS_H_
#define _GLIB_2_0_GIO_GSETTINGS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsettingsschema.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SETTINGS	(g_settings_get_type ())
#define G_SETTINGS_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SETTINGS, GSettingsClass))
#define G_IS_SETTINGS_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SETTINGS))
#define G_SETTINGS(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SETTINGS, GSettings))
#define G_IS_SETTINGS(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SETTINGS))
#define G_SETTINGS_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SETTINGS, GSettingsClass))


    typedef struct _GSettingsPrivate GSettingsPrivate;

    typedef struct _GSettingsClass GSettingsClass;

    typedef GVariant *(*GSettingsBindSetMapping) (const GValue * value,
						  const GVariantType *
						  expected_type,
						  gpointer user_data);

    typedef gboolean(*GSettingsBindGetMapping) (GValue * value,
						GVariant * variant,
						gpointer user_data);

    typedef gboolean(*GSettingsGetMapping) (GVariant * value,
					    gpointer * result,
					    gpointer user_data);

    typedef enum {
	G_SETTINGS_BIND_DEFAULT,
	G_SETTINGS_BIND_GET = (1 << 0),
	G_SETTINGS_BIND_SET = (1 << 1),
	G_SETTINGS_BIND_NO_SENSITIVITY = (1 << 2),
	G_SETTINGS_BIND_GET_NO_CHANGES = (1 << 3),
	G_SETTINGS_BIND_INVERT_BOOLEAN = (1 << 4)
    } GSettingsBindFlags;

    struct _GSettingsClass {
	GObjectClass parent_class;
	void (*writable_changed) (GSettings * settings, const gchar * key);
	void (*changed) (GSettings * settings, const gchar * key);
	 gboolean(*writable_change_event) (GSettings * settings,
					   GQuark key);
	 gboolean(*change_event) (GSettings * settings,
				  const GQuark * keys, gint n_keys);
	gpointer padding[20];
    };

    struct _GSettings {
	GObject parent_instance;
	GSettingsPrivate *priv;
    };


/* Function prototypes */

    extern void g_settings_apply(GSettings * settings);
    extern void g_settings_bind(GSettings * settings, const gchar * key,
				void *object, const gchar * property,
				GSettingsBindFlags flags);
    extern void g_settings_bind_with_mapping(GSettings * settings,
					     const gchar * key,
					     void *object,
					     const gchar * property,
					     GSettingsBindFlags flags,
					     GSettingsBindGetMapping
					     get_mapping,
					     GSettingsBindSetMapping
					     set_mapping, void *user_data,
					     GDestroyNotify destroy);
    extern void g_settings_bind_writable(GSettings * settings,
					 const gchar * key, void *object,
					 const gchar * property,
					 gboolean inverted);
    extern GAction *g_settings_create_action(GSettings * settings,
					     const gchar * key);
    extern void g_settings_delay(GSettings * settings);
    extern void g_settings_get(GSettings * settings, const gchar * key,
			       const gchar * format, ...);
    extern gboolean g_settings_get_boolean(GSettings * settings,
					   const gchar * key);
    extern GSettings *g_settings_get_child(GSettings * settings,
					   const gchar * name);
    extern gdouble g_settings_get_double(GSettings * settings,
					 const gchar * key);
    extern gint g_settings_get_enum(GSettings * settings,
				    const gchar * key);
    extern guint g_settings_get_flags(GSettings * settings,
				      const gchar * key);
    extern gboolean g_settings_get_has_unapplied(GSettings * settings);
    extern gint g_settings_get_int(GSettings * settings,
				   const gchar * key);
    extern void *g_settings_get_mapped(GSettings * settings,
				       const gchar * key,
				       GSettingsGetMapping mapping,
				       void *user_data);
    extern GVariant *g_settings_get_range(GSettings * settings,
					  const gchar * key);
    extern gchar *g_settings_get_string(GSettings * settings,
					const gchar * key);
    extern gchar **g_settings_get_strv(GSettings * settings,
				       const gchar * key);
    extern GType g_settings_get_type(void);
    extern guint g_settings_get_uint(GSettings * settings,
				     const gchar * key);
    extern GVariant *g_settings_get_value(GSettings * settings,
					  const gchar * key);
    extern gboolean g_settings_is_writable(GSettings * settings,
					   const gchar * name);
    extern gchar **g_settings_list_children(GSettings * settings);
    extern gchar **g_settings_list_keys(GSettings * settings);
    extern const gchar *const *g_settings_list_relocatable_schemas(void);
    extern const gchar *const *g_settings_list_schemas(void);
    extern GSettings *g_settings_new(const gchar * schema_id);
    extern GSettings *g_settings_new_full(GSettingsSchema * schema,
					  GSettingsBackend * backend,
					  const gchar * path);
    extern GSettings *g_settings_new_with_backend(const gchar * schema_id,
						  GSettingsBackend *
						  backend);
    extern GSettings *g_settings_new_with_backend_and_path(const gchar *
							   schema_id,
							   GSettingsBackend
							   * backend,
							   const gchar *
							   path);
    extern GSettings *g_settings_new_with_path(const gchar * schema_id,
					       const gchar * path);
    extern gboolean g_settings_range_check(GSettings * settings,
					   const gchar * key,
					   GVariant * value);
    extern void g_settings_reset(GSettings * settings, const gchar * key);
    extern void g_settings_revert(GSettings * settings);
    extern gboolean g_settings_set(GSettings * settings, const gchar * key,
				   const gchar * format, ...);
    extern gboolean g_settings_set_boolean(GSettings * settings,
					   const gchar * key,
					   gboolean value);
    extern gboolean g_settings_set_double(GSettings * settings,
					  const gchar * key,
					  gdouble value);
    extern gboolean g_settings_set_enum(GSettings * settings,
					const gchar * key, gint value);
    extern gboolean g_settings_set_flags(GSettings * settings,
					 const gchar * key, guint value);
    extern gboolean g_settings_set_int(GSettings * settings,
				       const gchar * key, gint value);
    extern gboolean g_settings_set_string(GSettings * settings,
					  const gchar * key,
					  const gchar * value);
    extern gboolean g_settings_set_strv(GSettings * settings,
					const gchar * key,
					const gchar * const *value);
    extern gboolean g_settings_set_uint(GSettings * settings,
					const gchar * key, guint value);
    extern gboolean g_settings_set_value(GSettings * settings,
					 const gchar * key,
					 GVariant * value);
    extern void g_settings_sync(void);
    extern void g_settings_unbind(void *object, const gchar * property);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
