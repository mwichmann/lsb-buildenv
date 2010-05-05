#if (__LSB_VERSION__ >= 41 )
#ifndef _GTK_2_0_GTK_GTKPRINTOPERATIONPREVIEW_H_
#define _GTK_2_0_GTK_GTKPRINTOPERATIONPREVIEW_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>

#ifdef __cplusplus
extern "C" {
#endif


#define __GTK_PRINT_OPERATION_PREVIEW_H__
#define GTK_TYPE_PRINT_OPERATION_PREVIEW	(gtk_print_operation_preview_get_type ())
#define GTK_PRINT_OPERATION_PREVIEW(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINT_OPERATION_PREVIEW, GtkPrintOperationPreview))
#define GTK_IS_PRINT_OPERATION_PREVIEW(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINT_OPERATION_PREVIEW))
#define GTK_PRINT_OPERATION_PREVIEW_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_PRINT_OPERATION_PREVIEW, GtkPrintOperationPreviewIface))


    typedef struct _GtkPrintOperationPreview GtkPrintOperationPreview;

    typedef struct _GtkPrintOperationPreviewIface
	GtkPrintOperationPreviewIface;

    struct _GtkPrintOperationPreviewIface {
	GTypeInterface g_iface;
	void (*ready) (void);
	void (*got_page_size) (void);
	void (*render_page) (void);
	 gboolean(*is_selected) (void);
	void (*end_preview) (void);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
    };


/* Function prototypes */

    extern void
	gtk_print_operation_preview_end_preview(GtkPrintOperationPreview *
						preview);
    extern GType gtk_print_operation_preview_get_type(void);
    extern gboolean
	gtk_print_operation_preview_is_selected(GtkPrintOperationPreview *
						preview, gint page_nr);
    extern void
	gtk_print_operation_preview_render_page(GtkPrintOperationPreview *
						preview, gint page_nr);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
