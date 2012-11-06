#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBPNG15_PNGCONF_H_
#define _LIBPNG15_PNGCONF_H_

#include <stdio.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FAR
#define FARDATA
#define PNGCAPI
#define PNG_EMPTY
#define PNG_IMPEXP
#define PNG_REMOVED(ordinal, type, name, args, attributes)
#define PNG_FUNCTION(type, name, args, attributes)	attributes type name args
#define PNG_CONST	const
#define PNGAPI	PNGCAPI
#define PNGCBAPI	PNGCAPI
#define PNG_EXPORT(ordinal, type, name, args)	PNG_EXPORTA(ordinal, type, name, args, PNG_EMPTY)
#define PNG_EXPORTA(ordinal, type, name, args, attributes)	PNG_FUNCTION(PNG_EXPORT_TYPE(type),(PNGAPI name),PNGARG(args), extern attributes)
#define PNG_EXPORT_TYPE(type)	PNG_IMPEXP type
#define PNG_CALLBACK(type, name, args)	type (PNGCBAPI name) PNGARG(args)
#define png_sizeof(x)	(sizeof (x))


    typedef const void *png_const_voidp;

    typedef const png_byte *png_const_bytep;

    typedef const png_uint_32 *png_const_uint_32p;

    typedef const png_int_32 *png_const_int_32p;

    typedef const png_uint_16 *png_const_uint_16p;

    typedef const png_int_16 *png_const_int_16p;

    typedef const png_fixed_point *png_const_fixed_point_p;

    typedef png_size_t *png_size_tp;

    typedef const png_size_t *png_const_size_tp;

    typedef png_size_t png_alloc_size_t;

    typedef unsigned long int png_uint_32;

    typedef long int png_int_32;

    typedef unsigned short png_uint_16;

    typedef short png_int_16;

    typedef unsigned char png_byte;

    typedef size_t png_size_t;

    typedef void *png_voidp;

    typedef png_byte *png_bytep;

    typedef png_uint_32 *png_uint_32p;

    typedef png_int_32 *png_int_32p;

    typedef png_uint_16 *png_uint_16p;

    typedef png_int_16 *png_int_16p;

    typedef char *png_charp;

    typedef const char *png_const_charp;

    typedef png_fixed_point *png_fixed_pointp;

    typedef FILE *png_FILE_p;

    typedef double *png_doublep;

    typedef const double *png_const_doublep;

    typedef png_byte **png_bytepp;

    typedef png_uint_32 **png_uint_32pp;

    typedef png_int_32 **png_int_32pp;

    typedef png_uint_16 **png_uint_16pp;

    typedef png_int_16 **png_int_16pp;

    typedef const char **png_const_charpp;

    typedef char **png_charpp;

    typedef png_fixed_point **png_fixed_point_pp;

    typedef double **png_doublepp;

    typedef char ***png_charppp;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
