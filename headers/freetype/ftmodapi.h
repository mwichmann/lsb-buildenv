#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTMODAPI_H_
#define _FREETYPE_FTMODAPI_H_

#include <freetype/ftlist.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define FT_MODULE_DRIVER_SCALABLE	0x100
#define FT_MODULE_DRIVER_NO_OUTLINES	0x200
#define FT_MODULE_DRIVER_HAS_HINTER	0x400
#define FT_MODULE_FONT_DRIVER	1
#define FT_MODULE_RENDERER	2
#define FT_MODULE_HINTER	4
#define FT_MODULE_STYLER	8
#endif				/* __LSB_VERSION__ >= 3.2 */



#if __LSB_VERSION__ >= 32
    typedef FT_Error(*FT_Module_Constructor) (FT_Module);

    typedef void (*FT_Module_Destructor) (FT_Module);

    typedef FT_Pointer FT_Module_Interface;

#include <freetype/ftoutln.h>
    typedef FT_Module_Interface(*FT_Module_Requester) (FT_Module,
						       const char *);

    typedef struct FT_Module_Class_ FT_Module_Class;

    typedef void (*FT_DebugHook_Func) (void *);

#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 32
    struct FT_Module_Class_ {
	FT_ULong module_flags;
	FT_Long module_size;
	const FT_String *module_name;
	FT_Fixed module_version;
	FT_Fixed module_requires;
	const void *module_interface;
	FT_Module_Constructor module_init;
	FT_Module_Destructor module_done;
	FT_Module_Requester get_interface;
    };

#endif				/* __LSB_VERSION__ >= 3.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 32
    extern void FT_Add_Default_Modules(FT_Library);
    extern FT_Error FT_Add_Module(FT_Library, const FT_Module_Class *);
    extern FT_Error FT_Done_Library(FT_Library);
    extern FT_Module FT_Get_Module(FT_Library, const char *);
    extern FT_Error FT_New_Library(FT_Memory, FT_Library *);
    extern FT_Error FT_Remove_Module(FT_Library, FT_Module);
    extern void FT_Set_Debug_Hook(FT_Library, FT_UInt, FT_DebugHook_Func);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
