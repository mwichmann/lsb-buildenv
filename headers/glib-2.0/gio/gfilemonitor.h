#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GFILEMONITOR_H_
#define _GLIB_2_0_GIO_GFILEMONITOR_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_FILE_MONITOR	(g_file_monitor_get_type ())
#define G_FILE_MONITOR_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILE_MONITOR, GFileMonitorClass))
#define G_IS_FILE_MONITOR_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILE_MONITOR))
#define G_FILE_MONITOR(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILE_MONITOR, GFileMonitor))
#define G_IS_FILE_MONITOR(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILE_MONITOR))
#define G_FILE_MONITOR_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILE_MONITOR, GFileMonitorClass))


    typedef struct _GFileMonitorClass GFileMonitorClass;

    typedef struct _GFileMonitorPrivate GFileMonitorPrivate;

    struct _GFileMonitor {
	GObject parent_instance;
	GFileMonitorPrivate *priv;
    };

    struct _GFileMonitorClass {
	GObjectClass parent_class;
	void (*changed) (GFileMonitor * monitor, GFile * file,
			 GFile * other_file, GFileMonitorEvent event_type);
	 gboolean(*cancel) (GFileMonitor * monitor);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern gboolean g_file_monitor_cancel(GFileMonitor * monitor);
    extern void g_file_monitor_emit_event(GFileMonitor * monitor,
					  GFile * child,
					  GFile * other_file,
					  GFileMonitorEvent event_type);
    extern GType g_file_monitor_get_type(void);
    extern gboolean g_file_monitor_is_cancelled(GFileMonitor * monitor);
    extern void g_file_monitor_set_rate_limit(GFileMonitor * monitor,
					      gint limit_msecs);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
