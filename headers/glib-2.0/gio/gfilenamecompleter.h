#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GFILENAMECOMPLETER_H_
#define _GLIB_2_0_GIO_GFILENAMECOMPLETER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_FILENAME_COMPLETER	(g_filename_completer_get_type ())
#define G_FILENAME_COMPLETER_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILENAME_COMPLETER, GFilenameCompleterClass))
#define G_IS_FILENAME_COMPLETER_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILENAME_COMPLETER))
#define G_FILENAME_COMPLETER(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILENAME_COMPLETER, GFilenameCompleter))
#define G_IS_FILENAME_COMPLETER(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILENAME_COMPLETER))
#define G_FILENAME_COMPLETER_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILENAME_COMPLETER, GFilenameCompleterClass))


    typedef struct _GFilenameCompleterClass GFilenameCompleterClass;

    struct _GFilenameCompleterClass {
	GObjectClass parent_class;
	void (*got_completion_data) (GFilenameCompleter *
				     filename_completer);
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
    };


/* Function prototypes */

    extern char
	*g_filename_completer_get_completion_suffix(GFilenameCompleter *
						    completer,
						    const char
						    *initial_text);
    extern void g_filename_completer_get_completions(GFilenameCompleter *
						     completer,
						     const char
						     *initial_text);
    extern GType g_filename_completer_get_type(void);
    extern GFilenameCompleter *g_filename_completer_new(void);
    extern void g_filename_completer_set_dirs_only(GFilenameCompleter *
						   completer,
						   gboolean dirs_only);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
