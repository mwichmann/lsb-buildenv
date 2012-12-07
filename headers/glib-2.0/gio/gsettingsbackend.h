#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSETTINGSBACKEND_H_
#define _GLIB_2_0_GIO_GSETTINGSBACKEND_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SETTINGS_BACKEND	(g_settings_backend_get_type ())
#define G_SETTINGS_BACKEND_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SETTINGS_BACKEND, GSettingsBackendClass))
#define G_IS_SETTINGS_BACKEND_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SETTINGS_BACKEND))
#define G_SETTINGS_BACKEND(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SETTINGS_BACKEND, GSettingsBackend))
#define G_IS_SETTINGS_BACKEND(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SETTINGS_BACKEND))
#define G_SETTINGS_BACKEND_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SETTINGS_BACKEND, GSettingsBackendClass))
#define G_SETTINGS_BACKEND_EXTENSION_POINT_NAME	"gsettings-backend"


    typedef struct _GSettingsBackendPrivate GSettingsBackendPrivate;

    typedef struct _GSettingsBackendClass GSettingsBackendClass;

    struct _GSettingsBackendClass {
	GObjectClass parent_class;
	GVariant *(*read) (GSettingsBackend * backend, const gchar * key,
			   const GVariantType * expected_type,
			   gboolean default_value);
	 gboolean(*get_writable) (GSettingsBackend * backend,
				  const gchar * key);
	 gboolean(*write) (GSettingsBackend * backend, const gchar * key,
			   GVariant * value, gpointer origin_tag);
	 gboolean(*write_tree) (GSettingsBackend * backend, GTree * tree,
				gpointer origin_tag);
	void (*reset) (GSettingsBackend * backend, const gchar * key,
		       gpointer origin_tag);
	void (*subscribe) (GSettingsBackend * backend, const gchar * name);
	void (*unsubscribe) (GSettingsBackend * backend,
			     const gchar * name);
	void (*sync) (GSettingsBackend * backend);
	GPermission *(*get_permission) (GSettingsBackend * backend,
					const gchar * path);
	gpointer padding[24];
    };

    struct _GSettingsBackend {
	GObject parent_instance;
	GSettingsBackendPrivate *priv;
    };


/* Function prototypes */

    extern GSettingsBackend *g_keyfile_settings_backend_new(const gchar *
							    filename,
							    const gchar *
							    root_path,
							    const gchar *
							    root_group);
    extern GSettingsBackend *g_memory_settings_backend_new(void);
    extern GSettingsBackend *g_null_settings_backend_new(void);
    extern void g_settings_backend_changed(GSettingsBackend * backend,
					   const gchar * key,
					   gpointer origin_tag);
    extern void g_settings_backend_changed_tree(GSettingsBackend * backend,
						GTree * tree,
						gpointer origin_tag);
    extern void g_settings_backend_flatten_tree(GTree * tree,
						gchar * *path,
						const gchar * **keys,
						GVariant * **values);
    extern GSettingsBackend *g_settings_backend_get_default(void);
    extern GType g_settings_backend_get_type(void);
    extern void g_settings_backend_keys_changed(GSettingsBackend * backend,
						const gchar * path,
						const gchar * const *items,
						gpointer origin_tag);
    extern void g_settings_backend_path_changed(GSettingsBackend * backend,
						const gchar * path,
						gpointer origin_tag);
    extern void g_settings_backend_path_writable_changed(GSettingsBackend *
							 backend,
							 const gchar *
							 path);
    extern void g_settings_backend_writable_changed(GSettingsBackend *
						    backend,
						    const gchar * key);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
