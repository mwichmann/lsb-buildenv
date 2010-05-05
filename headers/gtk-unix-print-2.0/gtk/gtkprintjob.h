#if (__LSB_VERSION__ >= 41 )
#ifndef _GTK_UNIX_PRINT_2_0_GTK_GTKPRINTJOB_H_
#define _GTK_UNIX_PRINT_2_0_GTK_GTKPRINTJOB_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gtk/gtk.h>
#include <cairo/cairo.h>
#include <gtk-2.0/gtk/gtkenums.h>
#include <gtk-unix-print-2.0/gtk/gtkprinter.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _GtkPrintJob GtkPrintJob;

    typedef struct _GtkPrintJobClass GtkPrintJobClass;

    typedef struct _GtkPrintJobPrivate GtkPrintJobPrivate;

    typedef void (*GtkPrintJobCompleteFunc) (GtkPrintJob *, gpointer,
					     GError *);

    struct _GtkPrintJob {
	GObject parent_instance;
	GtkPrintJobPrivate *priv;
	GtkPrintPages print_pages;
	GtkPageRange *page_ranges;
	gint num_page_ranges;
	GtkPageSet page_set;
	gint num_copies;
	gdouble scale;
	unsigned int rotate_to_orientation:1;
	unsigned int collate:1;
	unsigned int reverse:1;
	guint number_up;
	GtkNumberUpLayout number_up_layout;
    };

    struct _GtkPrintJobClass {
	GObjectClass parent_class;
	void (*status_changed) (void);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
    };


/* Function prototypes */

    extern GtkPrinter *gtk_print_job_get_printer(GtkPrintJob * job);
    extern GtkPrintSettings *gtk_print_job_get_settings(GtkPrintJob * job);
    extern GtkPrintStatus gtk_print_job_get_status(GtkPrintJob * job);
    extern cairo_surface_t *gtk_print_job_get_surface(GtkPrintJob * job,
						      GError * *error);
    extern const char *gtk_print_job_get_title(GtkPrintJob * job);
    extern gboolean gtk_print_job_get_track_print_status(GtkPrintJob *
							 job);
    extern GType gtk_print_job_get_type(void);
    extern GtkPrintJob *gtk_print_job_new(const char *title,
					  GtkPrinter * printer,
					  GtkPrintSettings * settings,
					  GtkPageSetup * page_setup);
    extern void gtk_print_job_send(GtkPrintJob * job,
				   GtkPrintJobCompleteFunc callback,
				   gpointer user_data,
				   GDestroyNotify dnotify);
    extern gboolean gtk_print_job_set_source_file(GtkPrintJob * job,
						  const char *filename,
						  GError * *error);
    extern void gtk_print_job_set_track_print_status(GtkPrintJob * job,
						     gboolean
						     track_status);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
