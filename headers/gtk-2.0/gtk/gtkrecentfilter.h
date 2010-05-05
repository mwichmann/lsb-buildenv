#if (__LSB_VERSION__ >= 41 )
#ifndef _GTK_2_0_GTK_GTKRECENTFILTER_H_
#define _GTK_2_0_GTK_GTKRECENTFILTER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>

#ifdef __cplusplus
extern "C" {
#endif


#define __GTK_RECENT_FILTER_H__
#define GTK_TYPE_RECENT_FILTER	(gtk_recent_filter_get_type ())
#define GTK_RECENT_FILTER(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_FILTER, GtkRecentFilter))
#define GTK_IS_RECENT_FILTER(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_FILTER))


    typedef struct _GtkRecentFilter GtkRecentFilter;

    typedef struct _GtkRecentFilterInfo GtkRecentFilterInfo;

    typedef enum {
	GTK_RECENT_FILTER_URI,
	GTK_RECENT_FILTER_DISPLAY_NAME,
	GTK_RECENT_FILTER_MIME_TYPE,
	GTK_RECENT_FILTER_APPLICATION,
	GTK_RECENT_FILTER_GROUP,
	GTK_RECENT_FILTER_AGE
    } GtkRecentFilterFlags;

    typedef gboolean(*GtkRecentFilterFunc) (const GtkRecentFilterInfo *,
					    gpointer);

    struct _GtkRecentFilterInfo {
	GtkRecentFilterFlags contains;
	const char *uri;
	const char *display_name;
	const char *mime_type;
	const char **applications;
	const char **groups;
	gint age;
    };


/* Function prototypes */

    extern void gtk_recent_filter_add_age(GtkRecentFilter * filter,
					  gint days);
    extern void gtk_recent_filter_add_application(GtkRecentFilter * filter,
						  const char *application);
    extern void gtk_recent_filter_add_custom(GtkRecentFilter * filter,
					     GtkRecentFilterFlags needed,
					     GtkRecentFilterFunc func,
					     gpointer data,
					     GDestroyNotify data_destroy);
    extern void gtk_recent_filter_add_group(GtkRecentFilter * filter,
					    const char *group);
    extern void gtk_recent_filter_add_mime_type(GtkRecentFilter * filter,
						const char *mime_type);
    extern void gtk_recent_filter_add_pattern(GtkRecentFilter * filter,
					      const char *pattern);
    extern void gtk_recent_filter_add_pixbuf_formats(GtkRecentFilter *
						     filter);
    extern gboolean gtk_recent_filter_filter(GtkRecentFilter * filter,
					     const GtkRecentFilterInfo *
					     filter_info);
    extern const char *gtk_recent_filter_get_name(GtkRecentFilter *
						  filter);
    extern GtkRecentFilterFlags
	gtk_recent_filter_get_needed(GtkRecentFilter * filter);
    extern GType gtk_recent_filter_get_type(void);
    extern GtkRecentFilter *gtk_recent_filter_new(void);
    extern void gtk_recent_filter_set_name(GtkRecentFilter * filter,
					   const char *name);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
