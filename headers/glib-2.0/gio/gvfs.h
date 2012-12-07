#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GVFS_H_
#define _GLIB_2_0_GIO_GVFS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_VFS_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_VFS, GVfsClass))
#define G_IS_VFS_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_VFS))
#define G_VFS(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_VFS, GVfs))
#define G_IS_VFS(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_VFS))
#define G_VFS_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_VFS, GVfsClass))
#define G_TYPE_VFS	(g_vfs_get_type ())
#define G_VFS_EXTENSION_POINT_NAME	"gio-vfs"


    typedef struct _GVfsClass GVfsClass;

    struct _GVfs {
	GObject parent_instance;
    };

    struct _GVfsClass {
	GObjectClass parent_class;
	 gboolean(*is_active) (GVfs * vfs);
	GFile *(*get_file_for_path) (GVfs * vfs, const char *path);
	GFile *(*get_file_for_uri) (GVfs * vfs, const char *uri);
	const gchar *const *(*get_supported_uri_schemes) (GVfs * vfs);
	GFile *(*parse_name) (GVfs * vfs, const char *parse_name);
	void (*local_file_add_info) (GVfs * vfs, const char *filename,
				     guint64 device,
				     GFileAttributeMatcher *
				     attribute_matcher, GFileInfo * info,
				     GCancellable * cancellable,
				     gpointer * extra_data,
				     GDestroyNotify * free_extra_data);
	void (*add_writable_namespaces) (GVfs * vfs,
					 GFileAttributeInfoList * list);
	 gboolean(*local_file_set_attributes) (GVfs * vfs,
					       const char *filename,
					       GFileInfo * info,
					       GFileQueryInfoFlags flags,
					       GCancellable * cancellable,
					       GError * *error);
	void (*local_file_removed) (GVfs * vfs, const char *filename);
	void (*local_file_moved) (GVfs * vfs, const char *source,
				  const char *dest);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
	void (*_g_reserved6) (void);
	void (*_g_reserved7) (void);
    };


/* Function prototypes */

    extern GVfs *g_vfs_get_default(void);
    extern GFile *g_vfs_get_file_for_path(GVfs * vfs, const char *path);
    extern GFile *g_vfs_get_file_for_uri(GVfs * vfs, const char *uri);
    extern GVfs *g_vfs_get_local(void);
    extern const char *const *g_vfs_get_supported_uri_schemes(GVfs * vfs);
    extern GType g_vfs_get_type(void);
    extern gboolean g_vfs_is_active(GVfs * vfs);
    extern GFile *g_vfs_parse_name(GVfs * vfs, const char *parse_name);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
