#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GNATIVEVOLUMEMONITOR_H_
#define _GLIB_2_0_GIO_GNATIVEVOLUMEMONITOR_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gvolumemonitor.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_NATIVE_VOLUME_MONITOR	(g_native_volume_monitor_get_type ())
#define G_NATIVE_VOLUME_MONITOR_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_NATIVE_VOLUME_MONITOR, GNativeVolumeMonitorClass))
#define G_IS_NATIVE_VOLUME_MONITOR_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_NATIVE_VOLUME_MONITOR))
#define G_NATIVE_VOLUME_MONITOR(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_NATIVE_VOLUME_MONITOR, GNativeVolumeMonitor))
#define G_IS_NATIVE_VOLUME_MONITOR(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_NATIVE_VOLUME_MONITOR))
#define G_NATIVE_VOLUME_MONITOR_EXTENSION_POINT_NAME	"gio-native-volume-monitor"


    typedef struct _GNativeVolumeMonitor GNativeVolumeMonitor;

    typedef struct _GNativeVolumeMonitorClass GNativeVolumeMonitorClass;

    struct _GNativeVolumeMonitor {
	GVolumeMonitor parent_instance;
    };

    struct _GNativeVolumeMonitorClass {
	GVolumeMonitorClass parent_class;
	GMount *(*get_mount_for_mount_path) (const char *mount_path,
					     GCancellable * cancellable);
    };


/* Function prototypes */

    extern GType g_native_volume_monitor_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
