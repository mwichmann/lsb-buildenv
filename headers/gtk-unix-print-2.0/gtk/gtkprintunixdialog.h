#if (__LSB_VERSION__ >= 41 )
#ifndef _GTK_UNIX_PRINT_2_0_GTK_GTKPRINTUNIXDIALOG_H_
#define _GTK_UNIX_PRINT_2_0_GTK_GTKPRINTUNIXDIALOG_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-unix-print-2.0/gtk/gtkprinter.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _GtkPrintUnixDialog GtkPrintUnixDialog;

    typedef struct _GtkPrintUnixDialogClass GtkPrintUnixDialogClass;

    typedef struct GtkPrintUnixDialogPrivate GtkPrintUnixDialogPrivate;

    struct _GtkPrintUnixDialog {
	GtkDialog parent_instance;
	GtkPrintUnixDialogPrivate *priv;
    };

    struct _GtkPrintUnixDialogClass {
	GtkDialogClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
    };


/* Function prototypes */

    extern void gtk_print_unix_dialog_add_custom_tab(GtkPrintUnixDialog *
						     dialog,
						     GtkWidget * child,
						     GtkWidget *
						     tab_label);
    extern gint gtk_print_unix_dialog_get_current_page(GtkPrintUnixDialog *
						       dialog);
    extern GtkPageSetup
	*gtk_print_unix_dialog_get_page_setup(GtkPrintUnixDialog * dialog);
    extern GtkPrinter
	*gtk_print_unix_dialog_get_selected_printer(GtkPrintUnixDialog *
						    dialog);
    extern GtkPrintSettings
	*gtk_print_unix_dialog_get_settings(GtkPrintUnixDialog * dialog);
    extern GType gtk_print_unix_dialog_get_type(void);
    extern GtkWidget *gtk_print_unix_dialog_new(const char *title,
						GtkWindow * parent);
    extern void gtk_print_unix_dialog_set_current_page(GtkPrintUnixDialog *
						       dialog,
						       gint current_page);
    extern void
	gtk_print_unix_dialog_set_manual_capabilities(GtkPrintUnixDialog *
						      dialog,
						      GtkPrintCapabilities
						      capabilities);
    extern void gtk_print_unix_dialog_set_page_setup(GtkPrintUnixDialog *
						     dialog,
						     GtkPageSetup *
						     page_setup);
    extern void gtk_print_unix_dialog_set_settings(GtkPrintUnixDialog *
						   dialog,
						   GtkPrintSettings *
						   settings);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
