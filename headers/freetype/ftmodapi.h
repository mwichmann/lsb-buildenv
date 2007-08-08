#ifndef _FREETYPE_FTMODAPI_H_
#define _FREETYPE_FTMODAPI_H_

#include <GL/gl.h>
#include <freetype/ftlist.h>
#include <freetype/ftmm.h>
#include <freetype/ftsizes.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FT_MODULE_DRIVER_SCALABLE	0x100
#define FT_MODULE_DRIVER_NO_OUTLINES	0x200
#define FT_MODULE_DRIVER_HAS_HINTER	0x400
#define FT_MODULE_FONT_DRIVER	1
#define FT_MODULE_RENDERER	2
#define FT_MODULE_HINTER	4
#define FT_MODULE_STYLER	8
#define ft_module_driver_has_hinter	FT_MODULE_DRIVER_HAS_HINTER
#define ft_module_driver_no_outlines	FT_MODULE_DRIVER_NO_OUTLINES
#define ft_module_driver_scalable	FT_MODULE_DRIVER_SCALABLE
#define ft_module_font_driver	FT_MODULE_FONT_DRIVER
#define ft_module_hinter	FT_MODULE_HINTER
#define ft_module_renderer	FT_MODULE_RENDERER
#define ft_module_styler	FT_MODULE_STYLER


#if defined __i386__
/* IA32 */
    typedef struct FT_ModuleRec_ *FT_Module;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_Module_Class_ FT_Module_Class;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_LibraryRec_ *FT_Library;

#endif
#include <freetype/ftrender.h>
#if defined __i386__
/* IA32 */
    typedef void (*FT_DebugHook_Func) (void *);

#endif
#include <freetype/freetype.h>
#include <freetype/ftoutln.h>
#if defined __i386__
/* IA32 */



#endif

#ifdef __cplusplus
}
#endif
#endif
