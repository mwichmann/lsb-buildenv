#ifndef _FREETYPE_FTTRIGON_H_
#define _FREETYPE_FTTRIGON_H_

#include <GL/gl.h>
#include <freetype/ftoutln.h>
#include <freetype/ftpfr.h>
#include <freetype/ftsizes.h>
#include <freetype/ftstroke.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FT_ANGLE_PI	( 180L << 16 )
#define FT_ANGLE_2PI	( FT_ANGLE_PI * 2 )
#define FT_ANGLE_PI2	( FT_ANGLE_PI / 2 )
#define FT_ANGLE_PI4	( FT_ANGLE_PI / 4 )



    extern FT_Angle FT_Angle_Diff(FT_Angle, FT_Angle);
    extern FT_Fixed FT_Vector_Length(FT_Vector *);
    extern void FT_Vector_Rotate(FT_Vector *, FT_Angle);
    extern void FT_Vector_From_Polar(FT_Vector *, FT_Fixed, FT_Angle);
    extern void FT_Vector_Unit(FT_Vector *, FT_Angle);
    extern FT_Fixed FT_Tan(FT_Angle);
    extern FT_Fixed FT_Sin(FT_Angle);
    extern FT_Angle FT_Atan2(FT_Fixed, FT_Fixed);
    extern FT_Fixed FT_Cos(FT_Angle);
    extern void FT_Vector_Polarize(FT_Vector *, FT_Fixed *, FT_Angle *);
#ifdef __cplusplus
}
#endif
#endif
