#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GRESOURCE_H_
#define _GLIB_2_0_GIO_GRESOURCE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_RESOURCE_ERROR	(g_resource_error_quark ())
#define G_TYPE_RESOURCE	(g_resource_get_type ())


    typedef struct _GStaticResource GStaticResource;

    struct _GStaticResource {
	const guint8 *data;
	gsize data_len;
	GResource *resource;
	GStaticResource *next;
	gpointer padding;
    };


/* Function prototypes */

    extern void g_resource_enumerate_children(GResource * resource,
					      const gchar * path,
					      GResourceLookupFlags
					      lookup_flags,
					      GError * *error);
    extern GQuark g_resource_error_quark(void);
    extern gboolean g_resource_get_info(GResource * resource,
					const gchar * path,
					GResourceLookupFlags lookup_flags,
					gsize * size, guint32 * flags,
					GError * *error);
    extern GType g_resource_get_type(void);
    extern GResource *g_resource_load(const gchar * filename,
				      GError * *error);
    extern GBytes *g_resource_lookup_data(GResource * resource,
					  const gchar * path,
					  GResourceLookupFlags
					  lookup_flags, GError * *error);
    extern GResource *g_resource_new_from_data(GBytes * data,
					       GError * *error);
    extern GInputStream *g_resource_open_stream(GResource * resource,
						const gchar * path,
						GResourceLookupFlags
						lookup_flags,
						GError * *error);
    extern GResource *g_resource_ref(GResource * resource);
    extern void g_resource_unref(GResource * resource);
    extern void g_resources_enumerate_children(const gchar * path,
					       GResourceLookupFlags
					       lookup_flags,
					       GError * *error);
    extern gboolean g_resources_get_info(const gchar * path,
					 GResourceLookupFlags lookup_flags,
					 gsize * size, guint32 * flags,
					 GError * *error);
    extern GBytes *g_resources_lookup_data(const gchar * path,
					   GResourceLookupFlags
					   lookup_flags, GError * *error);
    extern GInputStream *g_resources_open_stream(const gchar * path,
						 GResourceLookupFlags
						 lookup_flags,
						 GError * *error);
    extern void g_resources_register(GResource * resource);
    extern void g_resources_unregister(GResource * resource);
    extern void g_static_resource_fini(GStaticResource * static_resource);
    extern GResource *g_static_resource_get_resource(GStaticResource *
						     static_resource);
    extern void g_static_resource_init(GStaticResource * static_resource);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
