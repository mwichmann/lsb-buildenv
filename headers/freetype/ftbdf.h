#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTBDF_H_
#define _FREETYPE_FTBDF_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef enum BDF_PropertyType_ {
	BDF_PROPERTY_TYPE_NONE = 0,
	BDF_PROPERTY_TYPE_ATOM = 1,
	BDF_PROPERTY_TYPE_INTEGER = 2,
	BDF_PROPERTY_TYPE_CARDINAL = 3
    } BDF_PropertyType;

    typedef struct BDF_PropertyRec_ BDF_PropertyRec;


    struct BDF_PropertyRec_ {
	BDF_PropertyType type;
	union {
	    const char *atom;
	    FT_Int32 integer;
	    FT_UInt32 cardinal;
	} u;
    };


/* Function prototypes */

    extern FT_Error FT_Get_BDF_Charset_ID(FT_Face, const char **,
					  const char **);
    extern FT_Error FT_Get_BDF_Property(FT_Face, const char *,
					BDF_PropertyRec *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
