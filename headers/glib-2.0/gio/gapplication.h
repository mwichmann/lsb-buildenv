#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GAPPLICATION_H_
#define _GLIB_2_0_GIO_GAPPLICATION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_APPLICATION	(g_application_get_type ())
#define G_APPLICATION_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_APPLICATION, GApplicationClass))
#define G_IS_APPLICATION_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_APPLICATION))
#define G_APPLICATION(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_APPLICATION, GApplication))
#define G_IS_APPLICATION(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_APPLICATION))
#define G_APPLICATION_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_APPLICATION, GApplicationClass))


    typedef struct _GApplicationPrivate GApplicationPrivate;

    typedef struct _GApplicationClass GApplicationClass;

    struct _GApplication {
	GObject parent_instance;
	GApplicationPrivate *priv;
    };

    struct _GApplicationClass {
	GObjectClass parent_class;
	void (*startup) (GApplication * application);
	void (*activate) (GApplication * application);
	void (*open) (GApplication * application, GFile * *files,
		      gint n_files, const gchar * hint);
	int (*command_line) (GApplication * application,
			     GApplicationCommandLine * command_line);
	 gboolean(*local_command_line) (GApplication * application,
					gchar * **arguments,
					int *exit_status);
	void (*before_emit) (GApplication * application,
			     GVariant * platform_data);
	void (*after_emit) (GApplication * application,
			    GVariant * platform_data);
	void (*add_platform_data) (GApplication * application,
				   GVariantBuilder * builder);
	void (*quit_mainloop) (GApplication * application);
	void (*run_mainloop) (GApplication * application);
	void (*shutdown) (GApplication * application);
	gpointer padding[11];
    };


/* Function prototypes */

    extern void g_application_activate(GApplication * application);
    extern const char *g_application_get_application_id(GApplication *
							application);
    extern GApplication *g_application_get_default(void);
    extern GApplicationFlags g_application_get_flags(GApplication *
						     application);
    extern guint g_application_get_inactivity_timeout(GApplication *
						      application);
    extern gboolean g_application_get_is_registered(GApplication *
						    application);
    extern gboolean g_application_get_is_remote(GApplication *
						application);
    extern GType g_application_get_type(void);
    extern void g_application_hold(GApplication * application);
    extern gboolean g_application_id_is_valid(const char *application_id);
    extern GApplication *g_application_new(const char *application_id,
					   GApplicationFlags flags);
    extern void g_application_open(GApplication * application,
				   GFile * *files, gint n_files,
				   const char *hint);
    extern void g_application_quit(GApplication * application);
    extern gboolean g_application_register(GApplication * application,
					   GCancellable * cancellable,
					   GError * *error);
    extern void g_application_release(GApplication * application);
    extern int g_application_run(GApplication * application, int argc,
				 char **argv);
    extern void g_application_set_action_group(GApplication * application,
					       GActionGroup *
					       action_group)
	LSB_DECL_DEPRECATED;
    extern void g_application_set_application_id(GApplication *
						 application,
						 const char
						 *application_id);
    extern void g_application_set_default(GApplication * application);
    extern void g_application_set_flags(GApplication * application,
					GApplicationFlags flags);
    extern void g_application_set_inactivity_timeout(GApplication *
						     application,
						     guint
						     inactivity_timeout);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
