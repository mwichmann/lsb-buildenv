#if (__LSB_VERSION__ >= 50 )
#ifndef _GIO_UNIX_2_0_GIO_GDESKTOPAPPINFO_H_
#define _GIO_UNIX_2_0_GIO_GDESKTOPAPPINFO_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gio.h>

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


#define G_TYPE_DESKTOP_APP_INFO	(g_desktop_app_info_get_type ())
#define G_TYPE_DESKTOP_APP_INFO_LOOKUP	(g_desktop_app_info_lookup_get_type ())	/* DEPRECATED */
#define G_DESKTOP_APP_INFO_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DESKTOP_APP_INFO, GDesktopAppInfoClass))
#define G_IS_DESKTOP_APP_INFO_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DESKTOP_APP_INFO))
#define G_DESKTOP_APP_INFO(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DESKTOP_APP_INFO, GDesktopAppInfo))
#define G_DESKTOP_APP_INFO_LOOKUP(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_DESKTOP_APP_INFO_LOOKUP, GDesktopAppInfoLookup))	/* DEPRECATED */
#define G_IS_DESKTOP_APP_INFO(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DESKTOP_APP_INFO))
#define G_IS_DESKTOP_APP_INFO_LOOKUP(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_DESKTOP_APP_INFO_LOOKUP))	/* DEPRECATED */
#define G_DESKTOP_APP_INFO_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DESKTOP_APP_INFO, GDesktopAppInfoClass))
#define G_DESKTOP_APP_INFO_LOOKUP_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_DESKTOP_APP_INFO_LOOKUP, GDesktopAppInfoLookupIface))	/* DEPRECATED */
#define G_DESKTOP_APP_INFO_LOOKUP_EXTENSION_POINT_NAME	"gio-desktop-app-info-lookup"	/* DEPRECATED */


    typedef struct _GDesktopAppInfo GDesktopAppInfo;

    typedef struct _GDesktopAppInfoClass GDesktopAppInfoClass;

    typedef struct _GDesktopAppInfoLookup GDesktopAppInfoLookup;

    typedef struct _GDesktopAppInfoLookupIface GDesktopAppInfoLookupIface;

    typedef void (*GDesktopAppLaunchCallback) (GDesktopAppInfo * appinfo,
					       GPid pid,
					       gpointer user_data);

    struct _GDesktopAppInfoClass {
	GObjectClass parent_class;
    };

    struct _GDesktopAppInfoLookupIface {
	GTypeInterface g_iface;
	GAppInfo *(*get_default_for_uri_scheme) (GDesktopAppInfoLookup *
						 lookup,
						 const char *uri_scheme);
    };


/* Function prototypes */

    extern const char *g_desktop_app_info_get_categories(GDesktopAppInfo *
							 info);
    extern const char *g_desktop_app_info_get_filename(GDesktopAppInfo *
						       info);
    extern const char *g_desktop_app_info_get_generic_name(GDesktopAppInfo
							   * info);
    extern gboolean g_desktop_app_info_get_is_hidden(GDesktopAppInfo *
						     info);
    extern const char *const
	*g_desktop_app_info_get_keywords(GDesktopAppInfo * info);
    extern gboolean g_desktop_app_info_get_nodisplay(GDesktopAppInfo *
						     info);
    extern gboolean g_desktop_app_info_get_show_in(GDesktopAppInfo * info,
						   const char
						   *desktop_env);
    extern GType g_desktop_app_info_get_type(void);
    extern gboolean
	g_desktop_app_info_launch_uris_as_manager(GDesktopAppInfo *
						  appinfo, GList * uris,
						  GAppLaunchContext *
						  launch_context,
						  GSpawnFlags spawn_flags,
						  GSpawnChildSetupFunc
						  user_setup,
						  gpointer user_setup_data,
						  GDesktopAppLaunchCallback
						  pid_callback,
						  gpointer
						  pid_callback_data,
						  GError * *error);
    extern GAppInfo
	*g_desktop_app_info_lookup_get_default_for_uri_scheme
	(GDesktopAppInfoLookup * lookup,
	 const char *uri_scheme) LSB_DECL_DEPRECATED;
    extern GType g_desktop_app_info_lookup_get_type(void)
	LSB_DECL_DEPRECATED;
    extern GDesktopAppInfo *g_desktop_app_info_new(const char *desktop_id);
    extern GDesktopAppInfo *g_desktop_app_info_new_from_filename(const char
								 *filename);
    extern GDesktopAppInfo *g_desktop_app_info_new_from_keyfile(GKeyFile *
								key_file);
    extern void g_desktop_app_info_set_desktop_env(const char
						   *desktop_env);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
