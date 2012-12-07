#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GVOLUMEMONITOR_H_
#define _GLIB_2_0_GIO_GVOLUMEMONITOR_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
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


#define G_VOLUME_MONITOR_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_VOLUME_MONITOR, GVolumeMonitorClass))
#define G_IS_VOLUME_MONITOR_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_VOLUME_MONITOR))
#define G_VOLUME_MONITOR(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_VOLUME_MONITOR, GVolumeMonitor))
#define G_IS_VOLUME_MONITOR(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_VOLUME_MONITOR))
#define G_VOLUME_MONITOR_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_VOLUME_MONITOR, GVolumeMonitorClass))
#define G_TYPE_VOLUME_MONITOR	(g_volume_monitor_get_type ())
#define G_VOLUME_MONITOR_EXTENSION_POINT_NAME	"gio-volume-monitor"


    typedef struct _GVolumeMonitorClass GVolumeMonitorClass;

    struct _GVolumeMonitor {
	GObject parent_instance;
	gpointer priv;
    };

    struct _GVolumeMonitorClass {
	GObjectClass parent_class;
	void (*volume_added) (GVolumeMonitor * volume_monitor,
			      GVolume * volume);
	void (*volume_removed) (GVolumeMonitor * volume_monitor,
				GVolume * volume);
	void (*volume_changed) (GVolumeMonitor * volume_monitor,
				GVolume * volume);
	void (*mount_added) (GVolumeMonitor * volume_monitor,
			     GMount * mount);
	void (*mount_removed) (GVolumeMonitor * volume_monitor,
			       GMount * mount);
	void (*mount_pre_unmount) (GVolumeMonitor * volume_monitor,
				   GMount * mount);
	void (*mount_changed) (GVolumeMonitor * volume_monitor,
			       GMount * mount);
	void (*drive_connected) (GVolumeMonitor * volume_monitor,
				 GDrive * drive);
	void (*drive_disconnected) (GVolumeMonitor * volume_monitor,
				    GDrive * drive);
	void (*drive_changed) (GVolumeMonitor * volume_monitor,
			       GDrive * drive);
	 gboolean(*is_supported) (void);
	GList *(*get_connected_drives) (GVolumeMonitor * volume_monitor);
	GList *(*get_volumes) (GVolumeMonitor * volume_monitor);
	GList *(*get_mounts) (GVolumeMonitor * volume_monitor);
	GVolume *(*get_volume_for_uuid) (GVolumeMonitor * volume_monitor,
					 const char *uuid);
	GMount *(*get_mount_for_uuid) (GVolumeMonitor * volume_monitor,
				       const char *uuid);
	GVolume *(*adopt_orphan_mount) (GMount * mount,
					GVolumeMonitor * volume_monitor);
	void (*drive_eject_button) (GVolumeMonitor * volume_monitor,
				    GDrive * drive);
	void (*drive_stop_button) (GVolumeMonitor * volume_monitor,
				   GDrive * drive);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
	void (*_g_reserved6) (void);
    };


/* Function prototypes */

    extern GVolume *g_volume_monitor_adopt_orphan_mount(GMount *
							mount)
	LSB_DECL_DEPRECATED;
    extern GVolumeMonitor *g_volume_monitor_get(void);
    extern GList *g_volume_monitor_get_connected_drives(GVolumeMonitor *
							volume_monitor);
    extern GMount *g_volume_monitor_get_mount_for_uuid(GVolumeMonitor *
						       volume_monitor,
						       const char *uuid);
    extern GList *g_volume_monitor_get_mounts(GVolumeMonitor *
					      volume_monitor);
    extern GType g_volume_monitor_get_type(void);
    extern GVolume *g_volume_monitor_get_volume_for_uuid(GVolumeMonitor *
							 volume_monitor,
							 const char *uuid);
    extern GList *g_volume_monitor_get_volumes(GVolumeMonitor *
					       volume_monitor);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
