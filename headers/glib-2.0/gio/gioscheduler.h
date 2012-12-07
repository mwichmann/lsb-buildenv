#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GIOSCHEDULER_H_
#define _GLIB_2_0_GIO_GIOSCHEDULER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern void g_io_scheduler_cancel_all_jobs(void);
    extern gboolean g_io_scheduler_job_send_to_mainloop(GIOSchedulerJob *
							job,
							GSourceFunc func,
							gpointer user_data,
							GDestroyNotify
							notify);
    extern void g_io_scheduler_job_send_to_mainloop_async(GIOSchedulerJob *
							  job,
							  GSourceFunc func,
							  gpointer
							  user_data,
							  GDestroyNotify
							  notify);
    extern void g_io_scheduler_push_job(GIOSchedulerJobFunc job_func,
					gpointer user_data,
					GDestroyNotify notify,
					gint io_priority,
					GCancellable * cancellable);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
