#ifndef _QBUTTONGROUP_H_
#define _QBUTTONGROUP_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftrender.h>
#include <freetype/ftmm.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Module FT_Get_Module(FT_Library, const char *);
    extern FT_Error FT_Done_Library(FT_Library);
    extern void FT_Set_Debug_Hook(FT_Library, FT_UInt, FT_DebugHook_Func);
    extern void FT_Add_Default_Modules(FT_Library);
    extern FT_Error FT_New_Library(FT_Memory, FT_Library *);
    extern FT_Error FT_Remove_Module(FT_Library, FT_Module);
    extern FT_Error FT_Add_Module(FT_Library, const FT_Module_Class *);
#ifdef __cplusplus
}
#endif
#endif
