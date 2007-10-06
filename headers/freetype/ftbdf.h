#ifndef _FREETYPE_FTBDF_H_
#define _FREETYPE_FTBDF_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/tttables.h>
#include <freetype/ftglyph.h>
#include <freetype/fttypes.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftimage.h>
#include <freetype/ftstroke.h>
#include <freetype/ftsynth.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef int FT_Int32;

#include <freetype/freetype.h>
    typedef enum BDF_PropertyType_ {
	BDF_PROPERTY_TYPE_NONE = 0,
	BDF_PROPERTY_TYPE_ATOM = 1,
	BDF_PROPERTY_TYPE_INTEGER = 2,
	BDF_PROPERTY_TYPE_CARDINAL = 3
    } BDF_PropertyType;

    typedef unsigned int FT_UInt32;

    typedef struct BDF_PropertyRec_ BDF_PropertyRec;


    struct BDF_PropertyRec_ {
	BDF_PropertyType type;
	union {
	    const char *atom;
	    FT_Int32 integer;
	    FT_UInt32 cardinal;
	} u;
    };


    extern FT_Error FT_Get_BDF_Property(FT_Face, const char *,
					BDF_PropertyRec *);
    extern FT_Error FT_Get_BDF_Charset_ID(FT_Face, const char **,
					  const char **);
#ifdef __cplusplus
}
#endif
#endif