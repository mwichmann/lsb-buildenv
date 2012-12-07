#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GVOLUME_H_
#define _GLIB_2_0_GIO_GVOLUME_H_

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


#define G_VOLUME(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_VOLUME, GVolume))
#define G_IS_VOLUME(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_VOLUME))
#define G_VOLUME_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_VOLUME, GVolumeIface))
#define G_TYPE_VOLUME	(g_volume_get_type ())
#define G_VOLUME_IDENTIFIER_KIND_CLASS	"class"
#define G_VOLUME_IDENTIFIER_KIND_HAL_UDI	"hal-udi"
#define G_VOLUME_IDENTIFIER_KIND_LABEL	"label"
#define G_VOLUME_IDENTIFIER_KIND_NFS_MOUNT	"nfs-mount"
#define G_VOLUME_IDENTIFIER_KIND_UNIX_DEVICE	"unix-device"
#define G_VOLUME_IDENTIFIER_KIND_UUID	"uuid"


    typedef struct _GVolumeIface GVolumeIface;

    struct _GVolumeIface {
	GTypeInterface g_iface;
	void (*changed) (GVolume * volume);
	void (*removed) (GVolume * volume);
	char *(*get_name) (GVolume * volume);
	GIcon *(*get_icon) (GVolume * volume);
	char *(*get_uuid) (GVolume * volume);
	GDrive *(*get_drive) (GVolume * volume);
	GMount *(*get_mount) (GVolume * volume);
	 gboolean(*can_mount) (GVolume * volume);
	 gboolean(*can_eject) (GVolume * volume);
	void (*mount_fn) (GVolume * volume, GMountMountFlags flags,
			  GMountOperation * mount_operation,
			  GCancellable * cancellable,
			  GAsyncReadyCallback callback,
			  gpointer user_data);
	 gboolean(*mount_finish) (GVolume * volume, GAsyncResult * result,
				  GError * *error);
	void (*eject) (GVolume * volume, GMountUnmountFlags flags,
		       GCancellable * cancellable,
		       GAsyncReadyCallback callback, gpointer user_data);
	 gboolean(*eject_finish) (GVolume * volume, GAsyncResult * result,
				  GError * *error);
	char *(*get_identifier) (GVolume * volume, const char *kind);
	char **(*enumerate_identifiers) (GVolume * volume);
	 gboolean(*should_automount) (GVolume * volume);
	GFile *(*get_activation_root) (GVolume * volume);
	void (*eject_with_operation) (GVolume * volume,
				      GMountUnmountFlags flags,
				      GMountOperation * mount_operation,
				      GCancellable * cancellable,
				      GAsyncReadyCallback callback,
				      gpointer user_data);
	 gboolean(*eject_with_operation_finish) (GVolume * volume,
						 GAsyncResult * result,
						 GError * *error);
	const char *(*get_sort_key) (GVolume * volume);
    };


/* Function prototypes */

    extern gboolean g_volume_can_eject(GVolume * volume);
    extern gboolean g_volume_can_mount(GVolume * volume);
    extern void g_volume_eject(GVolume * volume, GMountUnmountFlags flags,
			       GCancellable * cancellable,
			       GAsyncReadyCallback callback,
			       gpointer user_data) LSB_DECL_DEPRECATED;
    extern gboolean g_volume_eject_finish(GVolume * volume,
					  GAsyncResult * result,
					  GError *
					  *error) LSB_DECL_DEPRECATED;
    extern void g_volume_eject_with_operation(GVolume * volume,
					      GMountUnmountFlags flags,
					      GMountOperation *
					      mount_operation,
					      GCancellable * cancellable,
					      GAsyncReadyCallback callback,
					      gpointer user_data);
    extern gboolean g_volume_eject_with_operation_finish(GVolume * volume,
							 GAsyncResult *
							 result,
							 GError * *error);
    extern void g_volume_enumerate_identifiers(GVolume * volume);
    extern GFile *g_volume_get_activation_root(GVolume * volume);
    extern GDrive *g_volume_get_drive(GVolume * volume);
    extern GIcon *g_volume_get_icon(GVolume * volume);
    extern char *g_volume_get_identifier(GVolume * volume,
					 const char *kind);
    extern GMount *g_volume_get_mount(GVolume * volume);
    extern char *g_volume_get_name(GVolume * volume);
    extern const char *g_volume_get_sort_key(GVolume * volume);
    extern GType g_volume_get_type(void);
    extern char *g_volume_get_uuid(GVolume * volume);
    extern void g_volume_mount(GVolume * volume, GMountMountFlags flags,
			       GMountOperation * mount_operation,
			       GCancellable * cancellable,
			       GAsyncReadyCallback callback,
			       gpointer user_data);
    extern gboolean g_volume_mount_finish(GVolume * volume,
					  GAsyncResult * result,
					  GError * *error);
    extern gboolean g_volume_should_automount(GVolume * volume);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
