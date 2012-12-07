#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSETTINGSSCHEMA_H_
#define _GLIB_2_0_GIO_GSETTINGSSCHEMA_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SETTINGS_SCHEMA	(g_settings_schema_get_type ())
#define G_TYPE_SETTINGS_SCHEMA_SOURCE	(g_settings_schema_source_get_type ())


    typedef struct _GSettingsSchemaSource GSettingsSchemaSource;

    typedef struct _GSettingsSchema GSettingsSchema;


/* Function prototypes */

    extern const gchar *g_settings_schema_get_id(GSettingsSchema * schema);
    extern const gchar *g_settings_schema_get_path(GSettingsSchema *
						   schema);
    extern GType g_settings_schema_get_type(void);
    extern GSettingsSchema *g_settings_schema_ref(GSettingsSchema *
						  schema);
    extern GSettingsSchemaSource
	*g_settings_schema_source_get_default(void);
    extern GType g_settings_schema_source_get_type(void);
    extern GSettingsSchema
	*g_settings_schema_source_lookup(GSettingsSchemaSource * source,
					 const gchar * schema_id,
					 gboolean recursive);
    extern GSettingsSchemaSource
	*g_settings_schema_source_new_from_directory(const gchar *
						     directory,
						     GSettingsSchemaSource
						     * parent,
						     gboolean trusted,
						     GError * *error);
    extern GSettingsSchemaSource
	*g_settings_schema_source_ref(GSettingsSchemaSource * source);
    extern void g_settings_schema_source_unref(GSettingsSchemaSource *
					       source);
    extern void g_settings_schema_unref(GSettingsSchema * schema);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
