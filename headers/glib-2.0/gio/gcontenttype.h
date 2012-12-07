#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GCONTENTTYPE_H_
#define _GLIB_2_0_GIO_GCONTENTTYPE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern gboolean g_content_type_can_be_executable(const gchar * type);
    extern gboolean g_content_type_equals(const gchar * type1,
					  const gchar * type2);
    extern gchar *g_content_type_from_mime_type(const gchar * mime_type);
    extern gchar *g_content_type_get_description(const gchar * type);
    extern GIcon *g_content_type_get_icon(const gchar * type);
    extern gchar *g_content_type_get_mime_type(const gchar * type);
    extern gchar *g_content_type_guess(const gchar * filename,
				       const guchar * data,
				       gsize data_size,
				       gboolean * result_uncertain);
    extern gchar **g_content_type_guess_for_tree(GFile * root);
    extern gboolean g_content_type_is_a(const gchar * type,
					const gchar * supertype);
    extern gboolean g_content_type_is_unknown(const gchar * type);
    extern GList *g_content_types_get_registered(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
