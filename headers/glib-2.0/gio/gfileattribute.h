#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GFILEATTRIBUTE_H_
#define _GLIB_2_0_GIO_GFILEATTRIBUTE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    struct _GFileAttributeInfo {
	char *name;
	GFileAttributeType type;
	GFileAttributeInfoFlags flags;
    };

    struct _GFileAttributeInfoList {
	GFileAttributeInfo *infos;
	int n_infos;
    };


/* Function prototypes */

    extern void g_file_attribute_info_list_add(GFileAttributeInfoList *
					       list, const char *name,
					       GFileAttributeType type,
					       GFileAttributeInfoFlags
					       flags);
    extern GFileAttributeInfoList
	*g_file_attribute_info_list_dup(GFileAttributeInfoList * list);
    extern GType g_file_attribute_info_list_get_type(void);
    extern const struct _GFileAttributeInfo
	*g_file_attribute_info_list_lookup(GFileAttributeInfoList * list,
					   const char *name);
    extern GFileAttributeInfoList *g_file_attribute_info_list_new(void);
    extern GFileAttributeInfoList
	*g_file_attribute_info_list_ref(GFileAttributeInfoList * list);
    extern void g_file_attribute_info_list_unref(GFileAttributeInfoList *
						 list);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
