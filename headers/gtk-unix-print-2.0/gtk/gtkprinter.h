#if (__LSB_VERSION__ >= 41 )
#ifndef _GTK_UNIX_PRINT_2_0_GTK_GTKPRINTER_H_
#define _GTK_UNIX_PRINT_2_0_GTK_GTKPRINTER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	GTK_PRINT_CAPABILITY_PAGE_SET = 1 << 0,
	GTK_PRINT_CAPABILITY_COPIES = 1 << 1,
	GTK_PRINT_CAPABILITY_COLLATE = 1 << 2,
	GTK_PRINT_CAPABILITY_REVERSE = 1 << 3,
	GTK_PRINT_CAPABILITY_SCALE = 1 << 4,
	GTK_PRINT_CAPABILITY_GENERATE_PDF = 1 << 5,
	GTK_PRINT_CAPABILITY_GENERATE_PS = 1 << 6,
	GTK_PRINT_CAPABILITY_PREVIEW = 1 << 7,
	GTK_PRINT_CAPABILITY_NUMBER_UP = 1 << 8,
	GTK_PRINT_CAPABILITY_NUMBER_UP_LAYOUT = 1 << 9
    } GtkPrintCapabilities;

    typedef struct _GtkPrinter GtkPrinter;

    typedef struct _GtkPrinterClass GtkPrinterClass;

    typedef struct _GtkPrinterPrivate GtkPrinterPrivate;

    typedef struct _GtkPrintBackend GtkPrintBackend;

    typedef gboolean(*GtkPrinterFunc) (GtkPrinter *, gpointer);

    struct _GtkPrinter {
	GObject parent_instance;
	GtkPrinterPrivate *priv;
    };

    struct _GtkPrinterClass {
	GObjectClass parent_class;
	void (*details_acquired) (GtkPrinter * printer, gboolean success);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
    };


/* Function prototypes */

    extern void gtk_enumerate_printers(GtkPrinterFunc func, gpointer data,
				       GDestroyNotify destroy,
				       gboolean wait);
    extern GType gtk_print_capabilities_get_type(void);
    extern gboolean gtk_printer_accepts_pdf(GtkPrinter * printer);
    extern gboolean gtk_printer_accepts_ps(GtkPrinter * printer);
    extern gint gtk_printer_compare(GtkPrinter * a, GtkPrinter * b);
    extern GtkPrintBackend *gtk_printer_get_backend(GtkPrinter * printer);
    extern const char *gtk_printer_get_description(GtkPrinter * printer);
    extern const char *gtk_printer_get_icon_name(GtkPrinter * printer);
    extern gint gtk_printer_get_job_count(GtkPrinter * printer);
    extern const char *gtk_printer_get_location(GtkPrinter * printer);
    extern const char *gtk_printer_get_name(GtkPrinter * printer);
    extern const char *gtk_printer_get_state_message(GtkPrinter * printer);
    extern GType gtk_printer_get_type(void);
    extern gboolean gtk_printer_is_active(GtkPrinter * printer);
    extern gboolean gtk_printer_is_default(GtkPrinter * printer);
    extern gboolean gtk_printer_is_virtual(GtkPrinter * printer);
    extern GtkPrinter *gtk_printer_new(const char *name,
				       GtkPrintBackend * backend,
				       gboolean virtual_);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
