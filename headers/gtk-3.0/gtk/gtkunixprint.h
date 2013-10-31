#if (__LSB_VERSION__ >= 50 )
#ifndef _GTK_3_0_GTK_GTKUNIXPRINT_H_
#define _GTK_3_0_GTK_GTKUNIXPRINT_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <gtk-3.0/gtk/gtk.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern void gtk_enumerate_printers(GtkPrinterFunc func, gpointer,
				       GDestroyNotify, gboolean);
    extern GtkPageSetup
	*gtk_page_setup_unix_dialog_get_page_setup(GtkPageSetupUnixDialog *
						   dialog);
    extern GtkPrintSettings
	*gtk_page_setup_unix_dialog_get_print_settings
	(GtkPageSetupUnixDialog * dialog);
    extern GType gtk_page_setup_unix_dialog_get_type(void);
    extern GtkWidget *gtk_page_setup_unix_dialog_new(const char *title,
						     GtkWindow *);
    extern void
	gtk_page_setup_unix_dialog_set_page_setup(GtkPageSetupUnixDialog *
						  dialog, GtkPageSetup *);
    extern void
	gtk_page_setup_unix_dialog_set_print_settings
	(GtkPageSetupUnixDialog * dialog, GtkPrintSettings *);
    extern GType gtk_print_capabilities_get_type(void);
    extern gboolean gtk_printer_accepts_pdf(GtkPrinter * printer);
    extern gboolean gtk_printer_accepts_ps(GtkPrinter * printer);
    extern gint gtk_printer_compare(GtkPrinter * a, GtkPrinter *);
    extern GtkPrintBackend *gtk_printer_get_backend(GtkPrinter * printer);
    extern GtkPrintCapabilities gtk_printer_get_capabilities(GtkPrinter *
							     printer);
    extern GtkPageSetup *gtk_printer_get_default_page_size(GtkPrinter *
							   printer);
    extern const char *gtk_printer_get_description(GtkPrinter * printer);
    extern gboolean gtk_printer_get_hard_margins(GtkPrinter * printer,
						 gdouble *, gdouble *,
						 gdouble *, gdouble *);
    extern const char *gtk_printer_get_icon_name(GtkPrinter * printer);
    extern gint gtk_printer_get_job_count(GtkPrinter * printer);
    extern const char *gtk_printer_get_location(GtkPrinter * printer);
    extern const char *gtk_printer_get_name(GtkPrinter * printer);
    extern const char *gtk_printer_get_state_message(GtkPrinter * printer);
    extern GType gtk_printer_get_type(void);
    extern gboolean gtk_printer_has_details(GtkPrinter * printer);
    extern gboolean gtk_printer_is_accepting_jobs(GtkPrinter * printer);
    extern gboolean gtk_printer_is_active(GtkPrinter * printer);
    extern gboolean gtk_printer_is_default(GtkPrinter * printer);
    extern gboolean gtk_printer_is_paused(GtkPrinter * printer);
    extern gboolean gtk_printer_is_virtual(GtkPrinter * printer);
    extern GList *gtk_printer_list_papers(GtkPrinter * printer);
    extern GtkPrinter *gtk_printer_new(const char *name, GtkPrintBackend *,
				       gboolean);
    extern void gtk_printer_request_details(GtkPrinter * printer);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
