#if (__LSB_VERSION__ >= 50 )
#ifndef _GIO_UNIX_2_0_GIO_GUNIXMOUNTS_H_
#define _GIO_UNIX_2_0_GIO_GUNIXMOUNTS_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gio.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_UNIX_MOUNT_MONITOR_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_UNIX_MOUNT_MONITOR, GUnixMountMonitorClass))
#define G_IS_UNIX_MOUNT_MONITOR_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_UNIX_MOUNT_MONITOR))
#define G_UNIX_MOUNT_MONITOR(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_UNIX_MOUNT_MONITOR, GUnixMountMonitor))
#define G_IS_UNIX_MOUNT_MONITOR(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_UNIX_MOUNT_MONITOR))
#define G_TYPE_UNIX_MOUNT_MONITOR	(g_unix_mount_monitor_get_type ())


    typedef struct _GUnixMountEntry GUnixMountEntry;

    typedef struct _GUnixMountPoint GUnixMountPoint;

    typedef struct _GUnixMountMonitor GUnixMountMonitor;

    typedef struct _GUnixMountMonitorClass GUnixMountMonitorClass;


/* Function prototypes */

    extern gboolean g_unix_is_mount_path_system_internal(const char
							 *mount_path);
    extern GUnixMountEntry *g_unix_mount_at(const char *mount_path,
					    guint64 * time_read);
    extern gint g_unix_mount_compare(GUnixMountEntry * mount1,
				     GUnixMountEntry * mount2);
    extern void g_unix_mount_free(GUnixMountEntry * mount_entry);
    extern const char *g_unix_mount_get_device_path(GUnixMountEntry *
						    mount_entry);
    extern const char *g_unix_mount_get_fs_type(GUnixMountEntry *
						mount_entry);
    extern const char *g_unix_mount_get_mount_path(GUnixMountEntry *
						   mount_entry);
    extern gboolean g_unix_mount_guess_can_eject(GUnixMountEntry *
						 mount_entry);
    extern GIcon *g_unix_mount_guess_icon(GUnixMountEntry * mount_entry);
    extern char *g_unix_mount_guess_name(GUnixMountEntry * mount_entry);
    extern gboolean g_unix_mount_guess_should_display(GUnixMountEntry *
						      mount_entry);
    extern gboolean g_unix_mount_is_readonly(GUnixMountEntry *
					     mount_entry);
    extern gboolean g_unix_mount_is_system_internal(GUnixMountEntry *
						    mount_entry);
    extern GType g_unix_mount_monitor_get_type(void);
    extern GUnixMountMonitor *g_unix_mount_monitor_new(void);
    extern void g_unix_mount_monitor_set_rate_limit(GUnixMountMonitor *
						    mount_monitor,
						    int limit_msec);
    extern gint g_unix_mount_point_compare(GUnixMountPoint * mount1,
					   GUnixMountPoint * mount2);
    extern void g_unix_mount_point_free(GUnixMountPoint * mount_point);
    extern const char *g_unix_mount_point_get_device_path(GUnixMountPoint *
							  mount_point);
    extern const char *g_unix_mount_point_get_fs_type(GUnixMountPoint *
						      mount_point);
    extern const char *g_unix_mount_point_get_mount_path(GUnixMountPoint *
							 mount_point);
    extern const char *g_unix_mount_point_get_options(GUnixMountPoint *
						      mount_point);
    extern gboolean g_unix_mount_point_guess_can_eject(GUnixMountPoint *
						       mount_point);
    extern GIcon *g_unix_mount_point_guess_icon(GUnixMountPoint *
						mount_point);
    extern char *g_unix_mount_point_guess_name(GUnixMountPoint *
					       mount_point);
    extern gboolean g_unix_mount_point_is_loopback(GUnixMountPoint *
						   mount_point);
    extern gboolean g_unix_mount_point_is_readonly(GUnixMountPoint *
						   mount_point);
    extern gboolean g_unix_mount_point_is_user_mountable(GUnixMountPoint *
							 mount_point);
    extern gboolean g_unix_mount_points_changed_since(guint64 time);
    extern GList *g_unix_mount_points_get(guint64 * time_read);
    extern gboolean g_unix_mounts_changed_since(guint64 time);
    extern GList *g_unix_mounts_get(guint64 * time_read);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
