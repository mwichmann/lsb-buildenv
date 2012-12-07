#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GMOUNT_H_
#define _GLIB_2_0_GIO_GMOUNT_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_MOUNT	(g_mount_get_type ())
#define G_MOUNT(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_MOUNT, GMount))
#define G_IS_MOUNT(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_MOUNT))
#define G_MOUNT_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_MOUNT, GMountIface))



/* Function prototypes */

    extern gboolean g_mount_can_eject(GMount * mount);
    extern gboolean g_mount_can_unmount(GMount * mount);
    extern void g_mount_eject(GMount * mount, GMountUnmountFlags flags,
			      GCancellable * cancellable,
			      GAsyncReadyCallback callback,
			      gpointer user_data) LSB_DECL_DEPRECATED;
    extern gboolean g_mount_eject_finish(GMount * mount,
					 GAsyncResult * result,
					 GError *
					 *error) LSB_DECL_DEPRECATED;
    extern void g_mount_eject_with_operation(GMount * mount,
					     GMountUnmountFlags flags,
					     GMountOperation *
					     mount_operation,
					     GCancellable * cancellable,
					     GAsyncReadyCallback callback,
					     gpointer user_data);
    extern gboolean g_mount_eject_with_operation_finish(GMount * mount,
							GAsyncResult *
							result,
							GError * *error);
    extern GFile *g_mount_get_default_location(GMount * mount);
    extern GDrive *g_mount_get_drive(GMount * mount);
    extern GIcon *g_mount_get_icon(GMount * mount);
    extern char *g_mount_get_name(GMount * mount);
    extern GFile *g_mount_get_root(GMount * mount);
    extern const char *g_mount_get_sort_key(GMount * mount);
    extern GType g_mount_get_type(void);
    extern char *g_mount_get_uuid(GMount * mount);
    extern GVolume *g_mount_get_volume(GMount * mount);
    extern void g_mount_guess_content_type(GMount * mount,
					   gboolean force_rescan,
					   GCancellable * cancellable,
					   GAsyncReadyCallback callback,
					   gpointer user_data);
    extern gchar **g_mount_guess_content_type_finish(GMount * mount,
						     GAsyncResult * result,
						     GError * *error);
    extern gchar **g_mount_guess_content_type_sync(GMount * mount,
						   gboolean force_rescan,
						   GCancellable *
						   cancellable,
						   GError * *error);
    extern gboolean g_mount_is_shadowed(GMount * mount);
    extern void g_mount_remount(GMount * mount, GMountMountFlags flags,
				GMountOperation * mount_operation,
				GCancellable * cancellable,
				GAsyncReadyCallback callback,
				gpointer user_data);
    extern gboolean g_mount_remount_finish(GMount * mount,
					   GAsyncResult * result,
					   GError * *error);
    extern void g_mount_shadow(GMount * mount);
    extern void g_mount_unmount(GMount * mount, GMountUnmountFlags flags,
				GCancellable * cancellable,
				GAsyncReadyCallback callback,
				gpointer user_data) LSB_DECL_DEPRECATED;
    extern gboolean g_mount_unmount_finish(GMount * mount,
					   GAsyncResult * result,
					   GError *
					   *error) LSB_DECL_DEPRECATED;
    extern void g_mount_unmount_with_operation(GMount * mount,
					       GMountUnmountFlags flags,
					       GMountOperation *
					       mount_operation,
					       GCancellable * cancellable,
					       GAsyncReadyCallback
					       callback,
					       gpointer user_data);
    extern gboolean g_mount_unmount_with_operation_finish(GMount * mount,
							  GAsyncResult *
							  result,
							  GError * *error);
    extern void g_mount_unshadow(GMount * mount);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
