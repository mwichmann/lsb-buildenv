#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GNETWORKMONITOR_H_
#define _GLIB_2_0_GIO_GNETWORKMONITOR_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_NETWORK_MONITOR	(g_network_monitor_get_type ())
#define G_NETWORK_MONITOR(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_NETWORK_MONITOR, GNetworkMonitor))
#define G_IS_NETWORK_MONITOR(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_NETWORK_MONITOR))
#define G_NETWORK_MONITOR_GET_INTERFACE(o)	(G_TYPE_INSTANCE_GET_INTERFACE ((o), G_TYPE_NETWORK_MONITOR, GNetworkMonitorInterface))
#define G_NETWORK_MONITOR_EXTENSION_POINT_NAME	"gio-network-monitor"


    typedef struct _GNetworkMonitorInterface GNetworkMonitorInterface;

    struct _GNetworkMonitorInterface {
	GTypeInterface g_iface;
	void (*network_changed) (GNetworkMonitor * monitor,
				 gboolean available);
	 gboolean(*can_reach) (GNetworkMonitor * monitor,
			       GSocketConnectable * connectable,
			       GCancellable * cancellable,
			       GError * *error);
	void (*can_reach_async) (GNetworkMonitor * monitor,
				 GSocketConnectable * connectable,
				 GCancellable * cancellable,
				 GAsyncReadyCallback callback,
				 gpointer user_data);
	 gboolean(*can_reach_finish) (GNetworkMonitor * monitor,
				      GAsyncResult * result,
				      GError * *error);
    };


/* Function prototypes */

    extern gboolean g_network_monitor_can_reach(GNetworkMonitor * monitor,
						GSocketConnectable *
						connectable,
						GCancellable * cancellable,
						GError * *error);
    extern void g_network_monitor_can_reach_async(GNetworkMonitor *
						  monitor,
						  GSocketConnectable *
						  connectable,
						  GCancellable *
						  cancellable,
						  GAsyncReadyCallback
						  callback,
						  gpointer user_data);
    extern gboolean g_network_monitor_can_reach_finish(GNetworkMonitor *
						       monitor,
						       GAsyncResult *
						       result,
						       GError * *error);
    extern GNetworkMonitor *g_network_monitor_get_default(void);
    extern gboolean g_network_monitor_get_network_available(GNetworkMonitor
							    * monitor);
    extern GType g_network_monitor_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
