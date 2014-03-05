#if (__LSB_VERSION__ >= 41 )
#ifndef _GTK_2_0_GTK_GTKTEXTBUFFERRICHTEXT_H_
#define _GTK_2_0_GTK_GTKTEXTBUFFERRICHTEXT_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtk.h>

#ifdef __cplusplus
extern "C" {
#endif


#define __GTK_TEXT_BUFFER_RICH_TEXT_H__


    typedef guint8 *(*GtkTextBufferSerializeFunc) (GtkTextBuffer *,
						   GtkTextBuffer *,
						   const struct
						   _GtkTextIter *,
						   const struct
						   _GtkTextIter *, gsize *,
						   gpointer);

    typedef gboolean(*GtkTextBufferDeserializeFunc) (GtkTextBuffer *,
						     GtkTextBuffer *,
						     GtkTextIter *,
						     const unsigned char *,
						     gsize, gboolean,
						     gpointer, GError * *);


/* Function prototypes */

    extern gboolean gtk_text_buffer_deserialize(GtkTextBuffer *
						register_buffer,
						GtkTextBuffer *
						content_buffer,
						struct _GdkAtom *format,
						GtkTextIter * iter,
						const unsigned char *data,
						gsize length,
						GError * *error);
    extern gboolean
	gtk_text_buffer_deserialize_get_can_create_tags(GtkTextBuffer *
							buffer,
							GdkAtom format);
    extern void
	gtk_text_buffer_deserialize_set_can_create_tags(GtkTextBuffer *
							buffer,
							GdkAtom format,
							gboolean
							can_create_tags);
    extern struct _GdkAtom
	**gtk_text_buffer_get_deserialize_formats(GtkTextBuffer * buffer,
						  gint * n_formats);
    extern struct _GdkAtom
	**gtk_text_buffer_get_serialize_formats(GtkTextBuffer * buffer,
						gint * n_formats);
    extern GdkAtom
	gtk_text_buffer_register_deserialize_format(GtkTextBuffer * buffer,
						    const char *mime_type,
						    GtkTextBufferDeserializeFunc
						    function,
						    gpointer user_data,
						    GDestroyNotify
						    user_data_destroy);
    extern GdkAtom
	gtk_text_buffer_register_deserialize_tagset(GtkTextBuffer * buffer,
						    const char
						    *tagset_name);
    extern GdkAtom gtk_text_buffer_register_serialize_format(GtkTextBuffer
							     * buffer,
							     const char
							     *mime_type,
							     GtkTextBufferSerializeFunc
							     function,
							     gpointer
							     user_data,
							     GDestroyNotify
							     user_data_destroy);
    extern GdkAtom gtk_text_buffer_register_serialize_tagset(GtkTextBuffer
							     * buffer,
							     const char
							     *tagset_name);
    extern guint8 *gtk_text_buffer_serialize(GtkTextBuffer *
					     register_buffer,
					     GtkTextBuffer *
					     content_buffer,
					     struct _GdkAtom *format,
					     const struct _GtkTextIter
					     *start,
					     const struct _GtkTextIter
					     *end, gsize * length);
    extern void gtk_text_buffer_unregister_deserialize_format(GtkTextBuffer
							      * buffer,
							      GdkAtom
							      format);
    extern void gtk_text_buffer_unregister_serialize_format(GtkTextBuffer *
							    buffer,
							    GdkAtom
							    format);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
