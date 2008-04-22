#if (__LSB_VERSION__ >= 31 )
#ifndef _GLIB_2_0_GMODULE_H_
#define _GLIB_2_0_GMODULE_H_

#include <glib-2.0/glib.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
#define G_MODULE_EXPORT
#define G_MODULE_IMPORT	extern
#endif				/* __LSB_VERSION__ >= 3.1 */



#if __LSB_VERSION__ >= 31
    typedef struct _GModule GModule;

    typedef enum {
	G_MODULE_BIND_LAZY = 1,
	G_MODULE_BIND_LOCAL = 2,
	G_MODULE_BIND_MASK = 3
    } GModuleFlags;

    typedef void (*GModuleUnload) (GModule *);

    typedef const gchar *(*GModuleCheckInit) (GModule *);

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31


#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern gchar *g_module_build_path(const gchar *, const gchar *);
    extern gboolean g_module_close(GModule *);
    extern const gchar *g_module_error(void);
    extern void g_module_make_resident(GModule *);
    extern const gchar *g_module_name(GModule *);
    extern GModule *g_module_open(const gchar *, GModuleFlags);
    extern gboolean g_module_supported(void);
    extern gboolean g_module_symbol(GModule *, const gchar *, gpointer *);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
