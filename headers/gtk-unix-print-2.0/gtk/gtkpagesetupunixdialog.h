#if (__LSB_VERSION__ >= 41 )
#ifndef _GTK_UNIX_PRINT_2_0_GTK_GTKPAGESETUPUNIXDIALOG_H_
#define _GTK_UNIX_PRINT_2_0_GTK_GTKPAGESETUPUNIXDIALOG_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtk.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _GtkPageSetupUnixDialog GtkPageSetupUnixDialog;

    typedef struct _GtkPageSetupUnixDialogClass
	GtkPageSetupUnixDialogClass;

    typedef struct GtkPageSetupUnixDialogPrivate
	GtkPageSetupUnixDialogPrivate;

    struct _GtkPageSetupUnixDialog {
	GtkDialog parent_instance;
	GtkPageSetupUnixDialogPrivate *priv;
    };

    struct _GtkPageSetupUnixDialogClass {
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

    extern GtkPageSetup
	*gtk_page_setup_unix_dialog_get_page_setup(GtkPageSetupUnixDialog *
						   dialog);
    extern GtkPrintSettings
	*gtk_page_setup_unix_dialog_get_print_settings
	(GtkPageSetupUnixDialog * dialog);
    extern GType gtk_page_setup_unix_dialog_get_type(void);
    extern GtkWidget *gtk_page_setup_unix_dialog_new(const char *title,
						     GtkWindow * parent);
    extern void
	gtk_page_setup_unix_dialog_set_page_setup(GtkPageSetupUnixDialog *
						  dialog,
						  GtkPageSetup *
						  page_setup);
    extern void
	gtk_page_setup_unix_dialog_set_print_settings
	(GtkPageSetupUnixDialog * dialog,
	 GtkPrintSettings * print_settings);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
