#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GAPPLICATIONCOMMANDLINE_H_
#define _GLIB_2_0_GIO_GAPPLICATIONCOMMANDLINE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_APPLICATION_COMMAND_LINE	(g_application_command_line_get_type ())
#define G_APPLICATION_COMMAND_LINE_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_APPLICATION_COMMAND_LINE, GApplicationCommandLineClass))
#define G_IS_APPLICATION_COMMAND_LINE_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_APPLICATION_COMMAND_LINE))
#define G_APPLICATION_COMMAND_LINE(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_APPLICATION_COMMAND_LINE, GApplicationCommandLine))
#define G_IS_APPLICATION_COMMAND_LINE(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_APPLICATION_COMMAND_LINE))
#define G_APPLICATION_COMMAND_LINE_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_APPLICATION_COMMAND_LINE, GApplicationCommandLineClass))


    typedef struct _GApplicationCommandLinePrivate
	GApplicationCommandLinePrivate;

    typedef struct _GApplicationCommandLineClass
	GApplicationCommandLineClass;

    struct _GApplicationCommandLine {
	GObject parent_instance;
	GApplicationCommandLinePrivate *priv;
    };

    struct _GApplicationCommandLineClass {
	GObjectClass parent_class;
	void (*print_literal) (GApplicationCommandLine * cmdline,
			       const gchar * message);
	void (*printerr_literal) (GApplicationCommandLine * cmdline,
				  const gchar * message);
	gpointer padding[12];
    };


/* Function prototypes */

    extern gchar
	**g_application_command_line_get_arguments(GApplicationCommandLine
						   * cmdline, int *argc);
    extern const char
	*g_application_command_line_get_cwd(GApplicationCommandLine *
					    cmdline);
    extern const char *const
	*g_application_command_line_get_environ(GApplicationCommandLine *
						cmdline);
    extern int
	g_application_command_line_get_exit_status(GApplicationCommandLine
						   * cmdline);
    extern gboolean
	g_application_command_line_get_is_remote(GApplicationCommandLine *
						 cmdline);
    extern GVariant
	*g_application_command_line_get_platform_data
	(GApplicationCommandLine * cmdline);
    extern GType g_application_command_line_get_type(void);
    extern const char
	*g_application_command_line_getenv(GApplicationCommandLine *
					   cmdline, const char *name);
    extern void g_application_command_line_print(GApplicationCommandLine *
						 cmdline,
						 const char *format, ...);
    extern void g_application_command_line_printerr(GApplicationCommandLine
						    * cmdline,
						    const char *format,
						    ...);
    extern void
	g_application_command_line_set_exit_status(GApplicationCommandLine
						   * cmdline,
						   int exit_status);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
