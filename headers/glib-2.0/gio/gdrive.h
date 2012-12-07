#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDRIVE_H_
#define _GLIB_2_0_GIO_GDRIVE_H_

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


#define G_TYPE_DRIVE	(g_drive_get_type ())
#define G_DRIVE(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_DRIVE, GDrive))
#define G_IS_DRIVE(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_DRIVE))
#define G_DRIVE_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_DRIVE, GDriveIface))


    typedef struct _GDriveIface GDriveIface;

    struct _GDriveIface {
	GTypeInterface g_iface;
	void (*changed) (GDrive * drive);
	void (*disconnected) (GDrive * drive);
	void (*eject_button) (GDrive * drive);
	char *(*get_name) (GDrive * drive);
	GIcon *(*get_icon) (GDrive * drive);
	 gboolean(*has_volumes) (GDrive * drive);
	GList *(*get_volumes) (GDrive * drive);
	 gboolean(*is_media_removable) (GDrive * drive);
	 gboolean(*has_media) (GDrive * drive);
	 gboolean(*is_media_check_automatic) (GDrive * drive);
	 gboolean(*can_eject) (GDrive * drive);
	 gboolean(*can_poll_for_media) (GDrive * drive);
	void (*eject) (GDrive * drive, GMountUnmountFlags flags,
		       GCancellable * cancellable,
		       GAsyncReadyCallback callback, gpointer user_data);
	 gboolean(*eject_finish) (GDrive * drive, GAsyncResult * result,
				  GError * *error);
	void (*poll_for_media) (GDrive * drive, GCancellable * cancellable,
				GAsyncReadyCallback callback,
				gpointer user_data);
	 gboolean(*poll_for_media_finish) (GDrive * drive,
					   GAsyncResult * result,
					   GError * *error);
	char *(*get_identifier) (GDrive * drive, GDrive * drive,
				 const char *kind);
	char **(*enumerate_identifiers) (GDrive * drive);
	 GDriveStartStopType(*get_start_stop_type) (GDrive * drive);
	 gboolean(*can_start) (GDrive * drive);
	 gboolean(*can_start_degraded) (GDrive * drive);
	void (*start) (GDrive * drive, GDriveStartFlags flags,
		       GMountOperation mount_operation,,
		       GCancellable * cancellable,,
		       GAsyncReadyCallback callback, gpointer user_data);
	 gboolean(*start_finish) (GDrive * drive, GAsyncResult * result,
				  GError * *error);
	 gboolean(*can_stop) (GDrive * drive);
	void (*stop) (GDrive * drive, GMountUnmountFlags flags,
		      GMountOperation * mount_operation,
		      GCancellable * cancellable,
		      GAsyncReadyCallback callback, gpointer user_data);
	 gboolean(*stop_finish) (GDrive * drive, GAsyncResult * result,
				 GError * *error);
	void (*stop_button) (GDrive * drive);
	void (*eject_with_operation) (GDrive * drive,
				      GMountUnmountFlags flags,
				      GMountOperation * mount_operation,
				      GCancellable * cancellable,
				      GAsyncReadyCallback callback,
				      gpointer user_data);
	 gboolean(*eject_with_operation_finish) (GDrive * drive,
						 GAsyncResult * result,
						 GError * *error);
	const gchar *(*get_sort_key) (GDrive * drive);
    };


/* Function prototypes */

    extern gboolean g_drive_can_eject(GDrive * drive);
    extern gboolean g_drive_can_poll_for_media(GDrive * drive);
    extern gboolean g_drive_can_start(GDrive * drive);
    extern gboolean g_drive_can_start_degraded(GDrive * drive);
    extern gboolean g_drive_can_stop(GDrive * drive);
    extern void g_drive_eject(GDrive * drive, GMountUnmountFlags flags,
			      GCancellable * cancellable,
			      GAsyncReadyCallback callback,
			      gpointer user_data) LSB_DECL_DEPRECATED;
    extern gboolean g_drive_eject_finish(GDrive * drive,
					 GAsyncResult * result,
					 GError *
					 *error) LSB_DECL_DEPRECATED;
    extern void g_drive_eject_with_operation(GDrive * drive,
					     GMountUnmountFlags flags,
					     GMountOperation *
					     mount_operation,
					     GCancellable * cancellable,
					     GAsyncReadyCallback callback,
					     gpointer user_data);
    extern gboolean g_drive_eject_with_operation_finish(GDrive * drive,
							GAsyncResult *
							result,
							GError * *error);
    extern void g_drive_enumerate_identifiers(GDrive * drive);
    extern GIcon *g_drive_get_icon(GDrive * drive);
    extern char *g_drive_get_identifier(GDrive * drive, const char *kind);
    extern char *g_drive_get_name(GDrive * drive);
    extern const char *g_drive_get_sort_key(GDrive * drive);
    extern GDriveStartStopType g_drive_get_start_stop_type(GDrive * drive);
    extern GType g_drive_get_type(void);
    extern GList *g_drive_get_volumes(GDrive * drive);
    extern gboolean g_drive_has_media(GDrive * drive);
    extern gboolean g_drive_has_volumes(GDrive * drive);
    extern gboolean g_drive_is_media_check_automatic(GDrive * drive);
    extern gboolean g_drive_is_media_removable(GDrive * drive);
    extern void g_drive_poll_for_media(GDrive * drive,
				       GCancellable * cancellable,
				       GAsyncReadyCallback callback,
				       gpointer user_data);
    extern gboolean g_drive_poll_for_media_finish(GDrive * drive,
						  GAsyncResult * result,
						  GError * *error);
    extern void g_drive_start(GDrive * drive, GDriveStartFlags flags,
			      GMountOperation * mount_operation,
			      GCancellable * cancellable,
			      GAsyncReadyCallback callback,
			      gpointer user_data);
    extern gboolean g_drive_start_finish(GDrive * drive,
					 GAsyncResult * result,
					 GError * *error);
    extern void g_drive_stop(GDrive * drive, GMountUnmountFlags flags,
			     GMountOperation * mount_operation,
			     GCancellable * cancellable,
			     GAsyncReadyCallback callback,
			     gpointer user_data);
    extern gboolean g_drive_stop_finish(GDrive * drive,
					GAsyncResult * result,
					GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
