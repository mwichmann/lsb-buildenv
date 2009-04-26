#if (__LSB_VERSION__ >= 31 )
#ifndef _GLIB_2_0_GMODULE_H_
#define _GLIB_2_0_GMODULE_H_

#include <glib-2.0/glib.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_MODULE_EXPORT
#define G_MODULE_IMPORT	extern


    typedef struct _GModule GModule;

    typedef enum {
	G_MODULE_BIND_LAZY = 1,
	G_MODULE_BIND_LOCAL = 2,
	G_MODULE_BIND_MASK = 3
    } GModuleFlags;

    typedef void (*GModuleUnload) (GModule *);

    typedef const gchar *(*GModuleCheckInit) (GModule *);


/* Function prototypes */

    extern gchar *g_module_build_path(const gchar * directory,
				      const gchar * module_name);
    extern gboolean g_module_close(GModule * module);
    extern const gchar *g_module_error(void);
    extern void g_module_make_resident(GModule * module);
    extern const gchar *g_module_name(GModule * module);
    extern GModule *g_module_open(const gchar * file_name,
				  GModuleFlags flags);
    extern gboolean g_module_supported(void);
    extern gboolean g_module_symbol(GModule * module,
				    const gchar * symbol_name,
				    gpointer * symbol);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
