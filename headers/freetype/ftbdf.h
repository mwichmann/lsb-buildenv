#ifndef _FREETYPE_FTBDF_H_
#define _FREETYPE_FTBDF_H_

#include <GL/gl.h>

#ifdef __cplusplus
extern "C" {
#endif




#if defined __i386__
/* IA32 */
    typedef int FT_Int32;

#endif
#if defined __i386__
/* IA32 */
    typedef enum BDF_PropertyType_ {
	BDF_PROPERTY_TYPE_NONE = 0,
	BDF_PROPERTY_TYPE_ATOM = 1,
	BDF_PROPERTY_TYPE_INTEGER = 2,
	BDF_PROPERTY_TYPE_CARDINAL = 3
    } BDF_PropertyType;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned int FT_UInt32;

#endif
#if defined __i386__
/* IA32 */
    typedef struct BDF_PropertyRec_ BDF_PropertyRec;

#endif
#if defined __i386__
/* IA32 */

    struct BDF_PropertyRec_ {
	BDF_PropertyType type;
	union {
	    const char *atom;
	    FT_Int32 integer;
	    FT_UInt32 cardinal;
	} u;
    };

#endif

#ifdef __cplusplus
}
#endif
#endif
