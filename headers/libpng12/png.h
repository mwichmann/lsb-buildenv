#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBPNG12_PNG_H_
#define _LIBPNG12_PNG_H_

#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>
#include <zlib.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FARDATA
#define PNGAPI
#define PNG_1_2_X
#define PNG_EASY_ACCESS_SUPPORTED
#define PNG_ERROR_NUMBERS_SUPPORTED
#define PNG_FIXED_POINT_SUPPORTED
#define PNG_FLOATING_POINT_SUPPORTED
#define PNG_FREE_ME_SUPPORTED
#define PNG_HANDLE_AS_UNKNOWN_SUPPORTED
#define PNG_IMPEXP
#define PNG_INFO_IMAGE_SUPPORTED
#define PNG_MMX_CODE_SUPPORTED
#define PNG_MNG_FEATURES_SUPPORTED
#define PNG_NO_READ_iTXt
#define PNG_NO_WRITE_iTXt
#define PNG_PROGRESSIVE_READ_SUPPORTED
#define PNG_READ_16_TO_8_SUPPORTED
#define PNG_READ_ANCILLARY_CHUNKS_SUPPORTED
#define PNG_READ_BACKGROUND_SUPPORTED
#define PNG_READ_BGR_SUPPORTED
#define PNG_READ_COMPOSITE_NODIV_SUPPORTED
#define PNG_READ_DITHER_SUPPORTED
#define PNG_READ_EMPTY_PLTE_SUPPORTED
#define PNG_READ_EXPAND_SUPPORTED
#define PNG_READ_FILLER_SUPPORTED
#define PNG_READ_GAMMA_SUPPORTED
#define PNG_READ_GRAY_TO_RGB_SUPPORTED
#define PNG_READ_INTERLACING_SUPPORTED
#define PNG_READ_INVERT_ALPHA_SUPPORTED
#define PNG_READ_INVERT_SUPPORTED
#define PNG_READ_OPT_PLTE_SUPPORTED
#define PNG_READ_PACKSWAP_SUPPORTED
#define PNG_READ_PACK_SUPPORTED
#define PNG_READ_RGB_TO_GRAY_SUPPORTED
#define PNG_READ_SHIFT_SUPPORTED
#define PNG_READ_STRIP_ALPHA_SUPPORTED
#define PNG_READ_SUPPORTED
#define PNG_READ_SWAP_ALPHA_SUPPORTED
#define PNG_READ_SWAP_SUPPORTED
#define PNG_READ_TEXT_SUPPORTED
#define PNG_READ_TRANSFORMS_SUPPORTED
#define PNG_READ_UNKNOWN_CHUNKS_SUPPORTED
#define PNG_READ_USER_CHUNKS_SUPPORTED
#define PNG_READ_USER_TRANSFORM_SUPPORTED
#define PNG_READ_bKGD_SUPPORTED
#define PNG_READ_cHRM_SUPPORTED
#define PNG_READ_gAMA_SUPPORTED
#define PNG_READ_hIST_SUPPORTED
#define PNG_READ_iCCP_SUPPORTED
#define PNG_READ_oFFs_SUPPORTED
#define PNG_READ_pCAL_SUPPORTED
#define PNG_READ_pHYs_SUPPORTED
#define PNG_READ_sBIT_SUPPORTED
#define PNG_READ_sCAL_SUPPORTED
#define PNG_READ_sPLT_SUPPORTED
#define PNG_READ_sRGB_SUPPORTED
#define PNG_READ_tEXt_SUPPORTED
#define PNG_READ_tIME_SUPPORTED
#define PNG_READ_tRNS_SUPPORTED
#define PNG_READ_zTXt_SUPPORTED
#define PNG_SETJMP_SUPPORTED
#define PNG_SET_USER_LIMITS_SUPPORTED
#define PNG_TEXT_SUPPORTED
#define PNG_TIME_RFC1123_SUPPORTED
#define PNG_UNKNOWN_CHUNKS_SUPPORTED
#define PNG_USER_CHUNKS_SUPPORTED
#define PNG_USER_MEM_SUPPORTED
#define PNG_USER_TRANSFORM_PTR_SUPPORTED
#define PNG_USE_GLOBAL_ARRAYS
#define PNG_WRITE_ANCILLARY_CHUNKS_SUPPORTED
#define PNG_WRITE_BGR_SUPPORTED
#define PNG_WRITE_EMPTY_PLTE_SUPPORTED
#define PNG_WRITE_FILLER_SUPPORTED
#define PNG_WRITE_FLUSH_SUPPORTED
#define PNG_WRITE_INTERLACING_SUPPORTED
#define PNG_WRITE_INVERT_ALPHA_SUPPORTED
#define PNG_WRITE_INVERT_SUPPORTED
#define PNG_WRITE_PACKSWAP_SUPPORTED
#define PNG_WRITE_PACK_SUPPORTED
#define PNG_WRITE_SHIFT_SUPPORTED
#define PNG_WRITE_SUPPORTED
#define PNG_WRITE_SWAP_ALPHA_SUPPORTED
#define PNG_WRITE_SWAP_SUPPORTED
#define PNG_WRITE_TEXT_SUPPORTED
#define PNG_WRITE_TRANSFORMS_SUPPORTED
#define PNG_WRITE_UNKNOWN_CHUNKS_SUPPORTED
#define PNG_WRITE_USER_TRANSFORM_SUPPORTED
#define PNG_WRITE_WEIGHTED_FILTER_SUPPORTED
#define PNG_WRITE_bKGD_SUPPORTED
#define PNG_WRITE_cHRM_SUPPORTED
#define PNG_WRITE_gAMA_SUPPORTED
#define PNG_WRITE_hIST_SUPPORTED
#define PNG_WRITE_iCCP_SUPPORTED
#define PNG_WRITE_oFFs_SUPPORTED
#define PNG_WRITE_pCAL_SUPPORTED
#define PNG_WRITE_pHYs_SUPPORTED
#define PNG_WRITE_sBIT_SUPPORTED
#define PNG_WRITE_sCAL_SUPPORTED
#define PNG_WRITE_sPLT_SUPPORTED
#define PNG_WRITE_sRGB_SUPPORTED
#define PNG_WRITE_tEXt_SUPPORTED
#define PNG_WRITE_tIME_SUPPORTED
#define PNG_WRITE_tRNS_SUPPORTED
#define PNG_WRITE_zTXt_SUPPORTED
#define PNG_bKGD_SUPPORTED
#define PNG_cHRM_SUPPORTED
#define PNG_gAMA_SUPPORTED
#define PNG_hIST_SUPPORTED
#define PNG_iCCP_SUPPORTED
#define PNG_oFFs_SUPPORTED
#define PNG_pCAL_SUPPORTED
#define PNG_pHYs_SUPPORTED
#define PNG_sBIT_SUPPORTED
#define PNG_sCAL_SUPPORTED
#define PNG_sPLT_SUPPORTED
#define PNG_sRGB_SUPPORTED
#define PNG_tEXt_SUPPORTED
#define PNG_tIME_SUPPORTED
#define PNG_tRNS_SUPPORTED
#define PNG_zTXt_SUPPORTED
#define PNG_MMX_READ_FLAGS	 \
	( PNG_ASM_FLAG_MMX_READ_COMBINE_ROW | PNG_ASM_FLAG_MMX_READ_INTERLACE \
	| PNG_ASM_FLAG_MMX_READ_FILTER_SUB | PNG_ASM_FLAG_MMX_READ_FILTER_UP | \
	PNG_ASM_FLAG_MMX_READ_FILTER_AVG | PNG_ASM_FLAG_MMX_READ_FILTER_PAETH \
	)
#define PNG_MMX_FLAGS	 \
	( PNG_ASM_FLAG_MMX_SUPPORT_COMPILED | PNG_ASM_FLAG_MMX_SUPPORT_IN_CPU \
	| PNG_MMX_READ_FLAGS | PNG_MMX_WRITE_FLAGS )
#define PNG_ALL_FILTERS	 \
	(PNG_FILTER_NONE | PNG_FILTER_SUB | PNG_FILTER_UP | PNG_FILTER_AVG | \
	PNG_FILTER_PAETH)
#define png_composite(composite,fg,alpha,bg)	 \
	{ png_uint_16 temp = (png_uint_16)((png_uint_16)(fg) * \
	(png_uint_16)(alpha) + (png_uint_16)(bg)*(png_uint_16)(255 - \
	(png_uint_16)(alpha)) + (png_uint_16)128); (composite) = \
	(png_byte)((temp + (temp >> 8)) >> 8); }
#define png_composite_16(composite,fg,alpha,bg)	 \
	{ png_uint_32 temp = (png_uint_32)((png_uint_32)(fg) * \
	(png_uint_32)(alpha) + (png_uint_32)(bg)*(png_uint_32)(65535L - \
	(png_uint_32)(alpha)) + (png_uint_32)32768L); (composite) = \
	(png_uint_16)((temp + (temp >> 16)) >> 16); }
#define PNG_HEADER_VERSION_STRING	" libpng version 1.2.8 - December 3, 2004 (header)\n"
#define PNG_LIBPNG_VER_STRING	"1.2.8"
#define PNG_MMX_WRITE_FLAGS	( 0 )
#define png_jmpbuf(png_ptr)	((png_ptr)->jmpbuf)
#define PNG_SIZE_MAX	((png_size_t)(-1))
#define PNG_UINT_32_MAX	((png_uint_32)(-1))
#define PNG_UINT_31_MAX	((png_uint_32)0x7fffffffL)
#define int_p_NULL	(int *)NULL
#define png_bytep_NULL	(png_bytep)NULL
#define png_bytepp_NULL	(png_bytepp)NULL
#define PNG_COLOR_TYPE_GRAY_ALPHA	(PNG_COLOR_MASK_ALPHA)
#define PNG_COLOR_TYPE_RGB_ALPHA	(PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_ALPHA)
#define PNG_COLOR_TYPE_PALETTE	(PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_PALETTE)
#define PNG_COLOR_TYPE_RGB	(PNG_COLOR_MASK_COLOR)
#define png_doublep_NULL	(png_doublep)NULL
#define png_error_ptr_NULL	(png_error_ptr)NULL
#define png_flush_ptr_NULL	(png_flush_ptr)NULL
#define png_infopp_NULL	(png_infopp)NULL
#define png_rw_ptr_NULL	(png_rw_ptr)NULL
#define png_structp_NULL	(png_structp)NULL
#define png_uint_16p_NULL	(png_uint_16p)NULL
#define png_voidp_NULL	(png_voidp)NULL
#define CVT_PTR(ptr)	(ptr)
#define CVT_PTR_NOCHECK(ptr)	(ptr)
#define PNG_TEXT_COMPRESSION_NONE	-1
#define PNG_TEXT_COMPRESSION_zTXt_WR	-2
#define PNG_TEXT_COMPRESSION_NONE_WR	-3
#define PNG_BACKGROUND_GAMMA_UNKNOWN	0
#define PNG_COLOR_TYPE_GRAY	0
#define PNG_COMPRESSION_TYPE_BASE	0
#define PNG_CRC_DEFAULT	0
#define PNG_EQUATION_LINEAR	0
#define PNG_FILLER_BEFORE	0
#define PNG_FILTER_HEURISTIC_DEFAULT	0
#define PNG_FILTER_TYPE_BASE	0
#define PNG_FILTER_VALUE_NONE	0
#define PNG_HANDLE_CHUNK_AS_DEFAULT	0
#define PNG_INTERLACE_NONE	0
#define PNG_LIBPNG_VER_BUILD	0
#define PNG_LIBPNG_VER_SONUM	0
#define PNG_OFFSET_PIXEL	0
#define PNG_RESOLUTION_UNKNOWN	0
#define PNG_SCALE_UNKNOWN	0
#define PNG_TEXT_COMPRESSION_zTXt	0
#define PNG_sRGB_INTENT_PERCEPTUAL	0
#define PNG_NO_FILTERS	0x00
#define PNG_TRANSFORM_IDENTITY	0x0000
#define PNG_INFO_gAMA	0x0001
#define PNG_TRANSFORM_STRIP_16	0x0001
#define PNG_INFO_sBIT	0x0002
#define PNG_TRANSFORM_STRIP_ALPHA	0x0002
#define PNG_INFO_cHRM	0x0004
#define PNG_TRANSFORM_PACKING	0x0004
#define PNG_FREE_HIST	0x0008
#define PNG_INFO_PLTE	0x0008
#define PNG_TRANSFORM_PACKSWAP	0x0008
#define PNG_FREE_ICCP	0x0010
#define PNG_INFO_tRNS	0x0010
#define PNG_TRANSFORM_EXPAND	0x0010
#define PNG_FREE_SPLT	0x0020
#define PNG_INFO_bKGD	0x0020
#define PNG_TRANSFORM_INVERT_MONO	0x0020
#define PNG_FREE_ROWS	0x0040
#define PNG_INFO_hIST	0x0040
#define PNG_TRANSFORM_SHIFT	0x0040
#define PNG_FREE_PCAL	0x0080
#define PNG_INFO_pHYs	0x0080
#define PNG_TRANSFORM_BGR	0x0080
#define PNG_ASM_FLAG_MMX_SUPPORT_COMPILED	0x01
#define PNG_FLAG_MNG_EMPTY_PLTE	0x01
#define PNG_FREE_SCAL	0x0100
#define PNG_INFO_oFFs	0x0100
#define PNG_TRANSFORM_SWAP_ALPHA	0x0100
#define PNG_ASM_FLAG_MMX_SUPPORT_IN_CPU	0x02
#define PNG_FREE_UNKN	0x0200
#define PNG_INFO_tIME	0x0200
#define PNG_TRANSFORM_SWAP_ENDIAN	0x0200
#define PNG_ASM_FLAG_MMX_READ_COMBINE_ROW	0x04
#define PNG_FLAG_MNG_FILTER_64	0x04
#define PNG_FREE_LIST	0x0400
#define PNG_INFO_pCAL	0x0400
#define PNG_TRANSFORM_INVERT_ALPHA	0x0400
#define PNG_ALL_MNG_FEATURES	0x05
#define PNG_ASM_FLAG_MMX_READ_INTERLACE	0x08
#define PNG_FILTER_NONE	0x08
#define PNG_INFO_sRGB	0x0800
#define PNG_TRANSFORM_STRIP_FILLER	0x0800
#define PNG_ASM_FLAG_MMX_READ_FILTER_SUB	0x10
#define PNG_FILTER_SUB	0x10
#define PNG_FREE_PLTE	0x1000
#define PNG_INFO_iCCP	0x1000
#define PNG_ASM_FLAG_MMX_READ_FILTER_UP	0x20
#define PNG_FILTER_UP	0x20
#define PNG_FREE_TRNS	0x2000
#define PNG_INFO_sPLT	0x2000
#define PNG_ASM_FLAG_MMX_READ_FILTER_AVG	0x40
#define PNG_FILTER_AVG	0x40
#define PNG_FREE_TEXT	0x4000
#define PNG_INFO_sCAL	0x4000
#define PNG_FREE_MUL	0x4220
#define PNG_FREE_ALL	0x7fff
#define PNG_ASM_FLAG_MMX_READ_FILTER_PAETH	0x80
#define PNG_FILTER_PAETH	0x80
#define PNG_ASM_FLAGS_INITIALIZED	0x80000000
#define PNG_INFO_IDAT	0x8000L
#define PNG_BACKGROUND_GAMMA_SCREEN	1
#define PNG_COLOR_MASK_PALETTE	1
#define PNG_CRC_ERROR_QUIT	1
#define PNG_DESTROY_WILL_FREE_DATA	1
#define PNG_EQUATION_BASE_E	1
#define PNG_FILLER_AFTER	1
#define PNG_FILTER_HEURISTIC_UNWEIGHTED	1
#define PNG_FILTER_VALUE_SUB	1
#define PNG_HANDLE_CHUNK_NEVER	1
#define PNG_INTERLACE_ADAM7	1
#define PNG_ITXT_COMPRESSION_NONE	1
#define PNG_LIBPNG_BUILD_ALPHA	1
#define PNG_LIBPNG_VER_MAJOR	1
#define PNG_OFFSET_MICROMETER	1
#define PNG_RESOLUTION_METER	1
#define PNG_SCALE_METER	1
#define PNG_SELECT_READ	1
#define PNG_SET_WILL_FREE_DATA	1
#define PNG_sRGB_INTENT_RELATIVE	1
#define PNG_USER_HEIGHT_MAX	1000000L
#define PNG_USER_WIDTH_MAX	1000000L
#define PNG_LIBPNG_VER	10208
#define PNG_LIBPNG_VER_DLLNUM	13
#define PNG_LIBPNG_BUILD_PRIVATE	16
#define PNG_BACKGROUND_GAMMA_FILE	2
#define PNG_COLOR_MASK_COLOR	2
#define PNG_CRC_WARN_DISCARD	2
#define PNG_EQUATION_ARBITRARY	2
#define PNG_FILTER_HEURISTIC_WEIGHTED	2
#define PNG_FILTER_VALUE_UP	2
#define PNG_HANDLE_CHUNK_IF_SAFE	2
#define PNG_INTERLACE_LAST	2
#define PNG_ITXT_COMPRESSION_zTXt	2
#define PNG_LIBPNG_BUILD_BETA	2
#define PNG_LIBPNG_VER_MINOR	2
#define PNG_OFFSET_LAST	2
#define PNG_RESOLUTION_LAST	2
#define PNG_SCALE_RADIAN	2
#define PNG_SELECT_WRITE	2
#define PNG_USER_WILL_FREE_DATA	2
#define PNG_sRGB_INTENT_SATURATION	2
#define PNG_MAX_PALETTE_LENGTH	256
#define PNG_BACKGROUND_GAMMA_UNIQUE	3
#define PNG_CRC_WARN_USE	3
#define PNG_EQUATION_HYPERBOLIC	3
#define PNG_FILTER_HEURISTIC_LAST	3
#define PNG_FILTER_VALUE_AVG	3
#define PNG_HANDLE_CHUNK_ALWAYS	3
#define PNG_LIBPNG_BUILD_RC	3
#define PNG_SCALE_LAST	3
#define PNG_TEXT_COMPRESSION_LAST	3
#define PNG_sRGB_INTENT_ABSOLUTE	3
#define PNG_LIBPNG_BUILD_SPECIAL	32
#define PNG_COLOR_MASK_ALPHA	4
#define PNG_CRC_QUIET_USE	4
#define PNG_EQUATION_LAST	4
#define PNG_FILTER_VALUE_PAETH	4
#define PNG_LIBPNG_BUILD_STABLE	4
#define PNG_sRGB_INTENT_LAST	4
#define PNG_CRC_NO_CHANGE	5
#define PNG_FILTER_VALUE_LAST	5
#define PNG_INTRAPIXEL_DIFFERENCING	64
#define PNG_LIBPNG_BUILD_RELEASE_STATUS_MASK	7
#define PNG_KEYWORD_MAX_LENGTH	79
#define PNG_LIBPNG_BUILD_PATCH	8
#define PNG_LIBPNG_VER_RELEASE	8
#define PNG_ZBUF_SIZE	8192
#define PNG_ABORT()	abort()
#define PNG_CONST	const
#define PNG_EXPORT_VAR(type)	extern PNG_IMPEXP type
#define png_memcmp	memcmp
#define png_memcpy	memcpy
#define png_memset	memset
#define PNG_COLOR_TYPE_GA	PNG_COLOR_TYPE_GRAY_ALPHA
#define PNG_COLOR_TYPE_RGBA	PNG_COLOR_TYPE_RGB_ALPHA
#define PNG_COMPRESSION_TYPE_DEFAULT	PNG_COMPRESSION_TYPE_BASE
#define PNG_FILTER_TYPE_DEFAULT	PNG_FILTER_TYPE_BASE
#define PNG_EXPORT(type,symbol)	PNG_IMPEXP type PNGAPI symbol
#define PNG_LIBPNG_BUILD_TYPE	PNG_LIBPNG_BUILD_BASE_TYPE
#define PNG_LIBPNG_BUILD_BASE_TYPE	PNG_LIBPNG_BUILD_STABLE
#define PNG_MAX_UINT	PNG_UINT_31_MAX
#define png_sizeof(x)	sizeof (x)
#define png_strcpy	strcpy
#define png_strlen	strlen
#define png_strncpy	strncpy
#if __LSB_VERSION__ < 40
#define PNG_ASSEMBLER_CODE_SUPPORTED
#endif				/* __LSB_VERSION__ < 4.0 */

#if __LSB_VERSION__ >= 40
#define png_info_init(info_ptr)	 \
	png_info_init_3(&info_ptr, png_sizeof(png_info));
#endif				/* __LSB_VERSION__ >= 4.0 */



    typedef struct png_sPLT_entry_struct png_sPLT_entry;

    typedef png_sPLT_entry *png_sPLT_entryp;

    typedef png_sPLT_entry **png_sPLT_entrypp;

    typedef struct png_sPLT_struct png_sPLT_t;

    typedef png_sPLT_t *png_sPLT_tp;

    typedef png_sPLT_t **png_sPLT_tpp;

    typedef struct png_unknown_chunk_t png_unknown_chunk;

    typedef png_unknown_chunk *png_unknown_chunkp;

    typedef struct png_struct_def png_struct;

    typedef png_struct *png_structp;

    typedef struct png_info_struct png_info;

    typedef png_info *png_infop;

    typedef void *png_voidp;

    typedef void (*png_progressive_info_ptr) (png_structp, png_infop);

    typedef unsigned char png_byte;

    typedef png_byte *png_bytep;

    typedef unsigned long int png_uint_32;

    typedef void (*png_progressive_row_ptr) (png_structp, png_bytep,
					     png_uint_32, int);

    typedef void (*png_progressive_end_ptr) (png_structp, png_infop);

    typedef struct png_color_8_struct png_color_8;

    typedef png_color_8 *png_color_8p;

    typedef long int png_int_32;

    typedef char *png_charp;

    typedef size_t png_size_t;

    typedef struct png_text_struct png_text;

    typedef png_text *png_textp;

    typedef png_byte **png_bytepp;

    typedef unsigned short png_uint_16;

    typedef struct png_color_16_struct png_color_16;

    typedef png_color_16 *png_color_16p;

    typedef struct png_color_struct png_color;

    typedef png_color *png_colorp;

    typedef const char *png_const_charp;

    typedef void (*png_error_ptr) (png_structp, png_const_charp);

    typedef void (*png_rw_ptr) (png_structp, png_bytep, png_size_t);

    typedef struct png_time_struct png_time;

    typedef png_time *png_timep;

    typedef png_uint_16 *png_uint_16p;

    typedef void (*png_flush_ptr) (png_structp);

    typedef char **png_charpp;

    typedef png_struct **png_structpp;

    typedef png_info **png_infopp;

    typedef FILE *png_FILE_p;

    typedef struct png_row_info_struct png_row_info;

    typedef png_row_info *png_row_infop;

    typedef png_structp version_1_2_8;

    typedef png_uint_32 *png_uint_32p;

    typedef png_uint_16 **png_uint_16pp;

    typedef png_int_32 png_fixed_point;

    typedef double *png_doublep;

    typedef charf *png_zcharp;

    typedef png_fixed_point *png_fixed_point_p;

    typedef png_int_32 *png_int_32p;

    typedef z_stream *png_zstreamp;

    typedef short png_int_16;

    typedef png_int_16 *png_int_16p;

    typedef png_int_16 **png_int_16pp;

    typedef png_int_32 **png_int_32pp;

    typedef png_uint_32 **png_uint_32pp;

    typedef charf **png_zcharpp;

    typedef char ***png_charppp;

    typedef const char **png_const_charpp;

    typedef double **png_doublepp;

    typedef png_colorp *png_colorpp;

    typedef png_color_16p *png_color_16pp;

    typedef png_color_8p *png_color_8pp;

    typedef png_fixed_point **png_fixed_point_pp;

    typedef png_row_info **png_row_infopp;

    typedef png_textp *png_textpp;

    typedef png_timep *png_timepp;

    typedef void (*png_user_transform_ptr) (png_structp, png_row_infop,
					    png_bytep);

    typedef void (*png_read_status_ptr) (png_structp, png_uint_32, int);

    typedef void (*png_write_status_ptr) (png_structp, png_uint_32, int);

    typedef int (*png_user_chunk_ptr) (png_structp, png_unknown_chunkp);

    typedef png_voidp(*png_malloc_ptr) (png_structp, png_size_t);

    typedef void (*png_free_ptr) (png_structp, png_voidp);

#if __LSB_VERSION__ >= 40
    typedef png_unknown_chunk **png_unknown_chunkpp;

#endif				/* __LSB_VERSION__ >= 4.0 */

    struct png_sPLT_struct {
	png_charp name;
	png_byte depth;
	png_sPLT_entryp entries;
	png_int_32 nentries;
    };

    struct png_sPLT_entry_struct {
	png_uint_16 red;
	png_uint_16 green;
	png_uint_16 blue;
	png_uint_16 alpha;
	png_uint_16 frequency;
    };

    struct png_unknown_chunk_t {
	png_byte name[5];
	png_byte *data;
	png_size_t size;
	png_byte location;
    };

    struct png_color_8_struct {
	png_byte red;
	png_byte green;
	png_byte blue;
	png_byte gray;
	png_byte alpha;
    };

    struct png_color_16_struct {
	png_byte index;
	png_uint_16 red;
	png_uint_16 green;
	png_uint_16 blue;
	png_uint_16 gray;
    };

    struct png_time_struct {
	png_uint_16 year;
	png_byte month;
	png_byte day;
	png_byte hour;
	png_byte minute;
	png_byte second;
    };

    struct png_row_info_struct {
	png_uint_32 width;
	png_uint_32 rowbytes;
	png_byte color_type;
	png_byte bit_depth;
	png_byte channels;
	png_byte pixel_depth;
    };

    struct png_struct_def {
	struct __jmp_buf_tag jmpbuf[1];
#if __LSB_VERSION__ < 50
	png_error_ptr error_fn;
	png_error_ptr warning_fn;
	png_voidp error_ptr;
	png_rw_ptr write_data_fn;
	png_rw_ptr read_data_fn;
	png_voidp io_ptr;
	png_user_transform_ptr read_user_transform_fn;
	png_user_transform_ptr write_user_transform_fn;
	png_voidp user_transform_ptr;
	png_byte user_transform_depth;
	png_byte user_transform_channels;
	png_uint_32 mode;
	png_uint_32 flags;
	png_uint_32 transformations;
	z_stream zstream;
	png_bytep zbuf;
	png_size_t zbuf_size;
	int zlib_level;
	int zlib_method;
	int zlib_window_bits;
	int zlib_mem_level;
	int zlib_strategy;
	png_uint_32 width;
	png_uint_32 height;
	png_uint_32 num_rows;
	png_uint_32 usr_width;
	png_uint_32 rowbytes;
	png_uint_32 irowbytes;
	png_uint_32 iwidth;
	png_uint_32 row_number;
	png_bytep prev_row;
	png_bytep row_buf;
	png_bytep sub_row;
	png_bytep up_row;
	png_bytep avg_row;
	png_bytep paeth_row;
	png_row_info row_info;
	png_uint_32 idat_size;
	png_uint_32 crc;
	png_colorp palette;
	png_uint_16 num_palette;
	png_uint_16 num_trans;
	png_byte chunk_name[5];
	png_byte compression;
	png_byte filter;
	png_byte interlaced;
	png_byte pass;
	png_byte do_filter;
	png_byte color_type;
	png_byte bit_depth;
	png_byte usr_bit_depth;
	png_byte pixel_depth;
	png_byte channels;
	png_byte usr_channels;
	png_byte sig_bytes;
	png_uint_16 filler;
	png_byte background_gamma_type;
	float background_gamma;
	png_color_16 background;
	png_color_16 background_1;
	png_flush_ptr output_flush_fn;
	png_uint_32 flush_dist;
	png_uint_32 flush_rows;
	int gamma_shift;
	float gamma;
	float screen_gamma;
	png_bytep gamma_table;
	png_bytep gamma_from_1;
	png_bytep gamma_to_1;
	png_uint_16pp gamma_16_table;
	png_uint_16pp gamma_16_from_1;
	png_uint_16pp gamma_16_to_1;
	png_color_8 sig_bit;
	png_color_8 shift;
	png_bytep trans;
	png_color_16 trans_values;
	png_read_status_ptr read_row_fn;
	png_write_status_ptr write_row_fn;
	png_progressive_info_ptr info_fn;
	png_progressive_row_ptr row_fn;
	png_progressive_end_ptr end_fn;
	png_bytep save_buffer_ptr;
	png_bytep save_buffer;
	png_bytep current_buffer_ptr;
	png_bytep current_buffer;
	png_uint_32 push_length;
	png_uint_32 skip_length;
	png_size_t save_buffer_size;
	png_size_t save_buffer_max;
	png_size_t buffer_size;
	png_size_t current_buffer_size;
	int process_mode;
	int cur_palette;
	png_size_t current_text_size;
	png_size_t current_text_left;
	png_charp current_text;
	png_charp current_text_ptr;
	png_bytep palette_lookup;
	png_bytep dither_index;
	png_uint_16p hist;
	png_byte heuristic_method;
	png_byte num_prev_filters;
	png_bytep prev_filters;
	png_uint_16p filter_weights;
	png_uint_16p inv_filter_weights;
	png_uint_16p filter_costs;
	png_uint_16p inv_filter_costs;
	png_charp time_buffer;
	png_uint_32 free_me;
	png_voidp user_chunk_ptr;
	png_user_chunk_ptr read_user_chunk_fn;
	int num_chunk_list;
	png_bytep chunk_list;
	png_byte rgb_to_gray_status;
	png_uint_16 rgb_to_gray_red_coeff;
	png_uint_16 rgb_to_gray_green_coeff;
	png_uint_16 rgb_to_gray_blue_coeff;
	png_uint_32 mng_features_permitted;
	png_fixed_point int_gamma;
	png_byte filter_type;
	png_voidp mem_ptr;
	png_malloc_ptr malloc_fn;
	png_free_ptr free_fn;
	png_bytep big_row_buf;
	png_bytep dither_sort;
	png_bytep index_to_palette;
	png_bytep palette_to_index;
	png_byte compression_type;
	png_uint_32 user_width_max;
	png_uint_32 user_height_max;
#endif				/* __LSB_VERSION__ < 50 */
    };

    struct png_info_struct {
	png_uint_32 width;
	png_uint_32 height;
	png_uint_32 valid;
	png_uint_32 rowbytes;
	png_colorp palette;
	png_uint_16 num_palette;
	png_uint_16 num_trans;
	png_byte bit_depth;
	png_byte color_type;
	png_byte compression_type;
	png_byte filter_type;
	png_byte interlace_type;
	png_byte channels;
	png_byte pixel_depth;
	png_byte spare_byte;
	png_byte signature[8];
	float gamma;
	png_byte srgb_intent;
	int num_text;
	int max_text;
	png_textp text;
	png_time mod_time;
	png_color_8 sig_bit;
	png_bytep trans;
	png_color_16 trans_values;
	png_color_16 background;
	png_int_32 x_offset;
	png_int_32 y_offset;
	png_byte offset_unit_type;
	png_uint_32 x_pixels_per_unit;
	png_uint_32 y_pixels_per_unit;
	png_byte phys_unit_type;
	png_uint_16p hist;
	float x_white;
	float y_white;
	float x_red;
	float y_red;
	float x_green;
	float y_green;
	float x_blue;
	float y_blue;
	png_charp pcal_purpose;
	png_int_32 pcal_X0;
	png_int_32 pcal_X1;
	png_charp pcal_units;
	png_charpp pcal_params;
	png_byte pcal_type;
	png_byte pcal_nparams;
	png_uint_32 free_me;
	png_unknown_chunkp unknown_chunks;
	png_size_t unknown_chunks_num;
	png_charp iccp_name;
	png_charp iccp_profile;
	png_uint_32 iccp_proflen;
	png_byte iccp_compression;
	png_sPLT_tp splt_palettes;
	png_uint_32 splt_palettes_num;
	png_byte scal_unit;
	double scal_pixel_width;
	double scal_pixel_height;
	png_charp scal_s_width;
	png_charp scal_s_height;
	png_bytepp row_pointers;
	png_fixed_point int_gamma;
	png_fixed_point int_x_white;
	png_fixed_point int_y_white;
	png_fixed_point int_x_red;
	png_fixed_point int_y_red;
	png_fixed_point int_x_green;
	png_fixed_point int_y_green;
	png_fixed_point int_x_blue;
	png_fixed_point int_y_blue;
    };

    struct png_text_struct {
	int compression;
	png_charp key;
	png_charp text;
	png_size_t text_length;
    };

    struct png_color_struct {
	png_byte red;
	png_byte green;
	png_byte blue;
    };


/* Function prototypes */

    extern png_uint_32 png_access_version_number(void);
    extern png_infop png_create_info_struct(png_structp png_ptr);
    extern png_structp png_create_read_struct(png_const_charp user_png_ver,
					      png_voidp error_ptr,
					      png_error_ptr error_fn,
					      png_error_ptr warn_fn);
    extern png_structp png_create_write_struct(png_const_charp
					       user_png_ver,
					       png_voidp error_ptr,
					       png_error_ptr error_fn,
					       png_error_ptr warn_fn);
    extern void png_destroy_read_struct(png_structpp png_ptr_ptr,
					png_infopp info_ptr_ptr,
					png_infopp end_info_ptr_ptr);
    extern void png_destroy_write_struct(png_structpp png_ptr_ptr,
					 png_infopp info_ptr_ptr);
    extern void png_error(png_structp png_ptr,
			  png_const_charp error_message);
    extern void png_free(png_structp png_ptr, png_voidp ptr);
    extern png_uint_32 png_get_IHDR(png_structp png_ptr,
				    png_infop info_ptr,
				    png_uint_32 * width,
				    png_uint_32 * height, int *bit_depth,
				    int *color_type, int *interlace_method,
				    int *compression_method,
				    int *filter_method);
    extern png_uint_32 png_get_PLTE(png_structp png_ptr,
				    png_infop info_ptr,
				    png_colorp * palette,
				    int *num_palette);
    extern png_uint_32 png_get_bKGD(png_structp png_ptr,
				    png_infop info_ptr,
				    png_color_16p * background);
    extern png_byte png_get_bit_depth(png_structp png_ptr,
				      png_infop info_ptr);
    extern png_uint_32 png_get_cHRM(png_structp png_ptr,
				    png_infop info_ptr, double *white_x,
				    double *white_y, double *red_x,
				    double *red_y, double *green_x,
				    double *green_y, double *blue_x,
				    double *blue_y);
    extern png_byte png_get_channels(png_structp png_ptr,
				     png_infop info_ptr);
    extern png_byte png_get_color_type(png_structp png_ptr,
				       png_infop info_ptr);
    extern png_voidp png_get_error_ptr(png_structp png_ptr);
    extern png_uint_32 png_get_gAMA(png_structp png_ptr,
				    png_infop info_ptr,
				    double *file_gamma);
    extern png_uint_32 png_get_hIST(png_structp png_ptr,
				    png_infop info_ptr,
				    png_uint_16p * hist);
    extern png_uint_32 png_get_iCCP(png_structp png_ptr,
				    png_infop info_ptr, png_charpp name,
				    int *compression_type,
				    png_charpp profile,
				    png_uint_32 * proflen);
    extern png_uint_32 png_get_image_height(png_structp png_ptr,
					    png_infop info_ptr);
    extern png_uint_32 png_get_image_width(png_structp png_ptr,
					   png_infop info_ptr);
    extern png_byte png_get_interlace_type(png_structp png_ptr,
					   png_infop info_ptr);
    extern png_voidp png_get_io_ptr(png_structp png_ptr);
    extern png_charp png_get_libpng_ver(png_structp png_ptr);
    extern png_uint_32 png_get_oFFs(png_structp png_ptr,
				    png_infop info_ptr,
				    png_int_32 * offset_x,
				    png_int_32 * offset_y, int *unit_type);
    extern png_uint_32 png_get_pHYs(png_structp png_ptr,
				    png_infop info_ptr,
				    png_uint_32 * res_x,
				    png_uint_32 * res_y, int *unit_type);
    extern png_voidp png_get_progressive_ptr(png_structp png_ptr);
    extern png_uint_32 png_get_rowbytes(png_structp png_ptr,
					png_infop info_ptr);
    extern png_bytepp png_get_rows(png_structp png_ptr,
				   png_infop info_ptr);
    extern png_uint_32 png_get_sBIT(png_structp png_ptr,
				    png_infop info_ptr,
				    png_color_8p * sig_bit);
    extern png_uint_32 png_get_sRGB(png_structp png_ptr,
				    png_infop info_ptr, int *intent);
    extern png_uint_32 png_get_tIME(png_structp png_ptr,
				    png_infop info_ptr,
				    png_timep * mod_time);
    extern png_uint_32 png_get_tRNS(png_structp png_ptr,
				    png_infop info_ptr, png_bytep * trans,
				    int *num_trans,
				    png_color_16p * trans_values);
    extern png_uint_32 png_get_text(png_structp png_ptr,
				    png_infop info_ptr,
				    png_textp * text_ptr, int *num_text);
    extern png_uint_32 png_get_valid(png_structp png_ptr,
				     png_infop info_ptr, png_uint_32 flag);
    extern png_int_32 png_get_x_offset_pixels(png_structp png_ptr,
					      png_infop info_ptr);
    extern png_uint_32 png_get_x_pixels_per_meter(png_structp png_ptr,
						  png_infop info_ptr);
    extern png_int_32 png_get_y_offset_pixels(png_structp png_ptr,
					      png_infop info_ptr);
    extern png_uint_32 png_get_y_pixels_per_meter(png_structp png_ptr,
						  png_infop info_ptr);
    extern void png_init_io(png_structp png_ptr, png_FILE_p fp);
    extern const char png_libpng_ver[18];
    extern png_voidp png_malloc(png_structp png_ptr, png_uint_32 size);
    extern void png_process_data(png_structp png_ptr, png_infop info_ptr,
				 png_bytep buffer, png_size_t buffer_size);
    extern void png_progressive_combine_row(png_structp png_ptr,
					    png_bytep old_row,
					    png_bytep new_row);
    extern void png_read_end(png_structp png_ptr, png_infop info_ptr);
    extern void png_read_image(png_structp png_ptr, png_bytepp image);
    extern void png_read_info(png_structp png_ptr, png_infop info_ptr);
    extern void png_read_png(png_structp png_ptr, png_infop info_ptr,
			     int transforms, voidp params);
    extern void png_read_row(png_structp png_ptr, png_bytep row,
			     png_bytep display_row);
    extern void png_read_rows(png_structp png_ptr, png_bytepp row,
			      png_bytepp display_row,
			      png_uint_32 num_rows);
    extern void png_read_update_info(png_structp png_ptr,
				     png_infop info_ptr);
    extern void png_set_IHDR(png_structp png_ptr, png_infop info_ptr,
			     png_uint_32 width, png_uint_32 height,
			     int bit_depth, int color_type,
			     int interlace_method, int compression_method,
			     int filter_method);
    extern void png_set_PLTE(png_structp png_ptr, png_infop info_ptr,
			     png_colorp palette, int num_palette);
    extern void png_set_bKGD(png_structp png_ptr, png_infop info_ptr,
			     png_color_16p background);
    extern void png_set_background(png_structp png_ptr,
				   png_color_16p background_color,
				   int background_gamma_code,
				   int need_expand,
				   double background_gamma);
    extern void png_set_bgr(png_structp png_ptr);
    extern void png_set_cHRM(png_structp png_ptr, png_infop info_ptr,
			     double white_x, double white_y, double red_x,
			     double red_y, double green_x, double green_y,
			     double blue_x, double blue_y);
    extern void png_set_compression_level(png_structp png_ptr, int level);
    extern void png_set_dither(png_structp png_ptr, png_colorp palette,
			       int num_palette, int maximum_colors,
			       png_uint_16p histogram, int full_dither);
    extern void png_set_error_fn(png_structp png_ptr, png_voidp error_ptr,
				 png_error_ptr error_fn,
				 png_error_ptr warning_fn);
    extern void png_set_expand(png_structp png_ptr);
    extern void png_set_filler(png_structp png_ptr, png_uint_32 filler,
			       int flags);
    extern void png_set_filter(png_structp png_ptr, int method,
			       int filters);
    extern void png_set_gAMA(png_structp png_ptr, png_infop info_ptr,
			     double file_gamma);
    extern void png_set_gamma(png_structp png_ptr, double screen_gamma,
			      double default_file_gamma);
    extern void png_set_gray_to_rgb(png_structp png_ptr);
    extern void png_set_hIST(png_structp png_ptr, png_infop info_ptr,
			     png_uint_16p hist);
    extern void png_set_iCCP(png_structp png_ptr, png_infop info_ptr,
			     png_charp name, int compression_type,
			     png_charp profile, png_uint_32 proflen);
    extern int png_set_interlace_handling(png_structp png_ptr);
    extern void png_set_invert_mono(png_structp png_ptr);
    extern void png_set_oFFs(png_structp png_ptr, png_infop info_ptr,
			     png_int_32 offset_x, png_int_32 offset_y,
			     int unit_type);
    extern void png_set_pHYs(png_structp png_ptr, png_infop info_ptr,
			     png_uint_32 res_x, png_uint_32 res_y,
			     int unit_type);
    extern void png_set_packing(png_structp png_ptr);
    extern void png_set_packswap(png_structp png_ptr);
    extern void png_set_progressive_read_fn(png_structp png_ptr,
					    png_voidp progressive_ptr,
					    png_progressive_info_ptr
					    info_fn,
					    png_progressive_row_ptr row_fn,
					    png_progressive_end_ptr
					    end_fn);
    extern void png_set_read_fn(png_structp png_ptr, png_voidp io_ptr,
				png_rw_ptr read_data_fn);
    extern void png_set_rgb_to_gray(png_structp png_ptr, int error_action,
				    double red, double green);
    extern void png_set_rows(png_structp png_ptr, png_infop info_ptr,
			     png_bytepp row_pointers);
    extern void png_set_sBIT(png_structp png_ptr, png_infop info_ptr,
			     png_color_8p sig_bit);
    extern void png_set_sRGB(png_structp png_ptr, png_infop info_ptr,
			     int intent);
    extern void png_set_shift(png_structp png_ptr, png_color_8p true_bits);
    extern void png_set_sig_bytes(png_structp png_ptr, int num_bytes);
    extern void png_set_strip_16(png_structp png_ptr);
    extern void png_set_strip_alpha(png_structp png_ptr);
    extern void png_set_swap(png_structp png_ptr);
    extern void png_set_swap_alpha(png_structp png_ptr);
    extern void png_set_tIME(png_structp png_ptr, png_infop info_ptr,
			     png_timep mod_time);
    extern void png_set_tRNS(png_structp png_ptr, png_infop info_ptr,
			     png_bytep trans, int num_trans,
			     png_color_16p trans_values);
    extern void png_set_text(png_structp png_ptr, png_infop info_ptr,
			     png_textp text_ptr, int num_text);
    extern void png_set_write_fn(png_structp png_ptr, png_voidp io_ptr,
				 png_rw_ptr write_data_fn,
				 png_flush_ptr output_flush_fn);
    extern int png_sig_cmp(png_bytep sig, png_size_t start,
			   png_size_t num_to_check);
    extern void png_warning(png_structp png_ptr,
			    png_const_charp warning_message);
    extern void png_write_chunk(png_structp png_ptr, png_bytep chunk_name,
				png_bytep data, png_size_t length);
    extern void png_write_end(png_structp png_ptr, png_infop info_ptr);
    extern void png_write_flush(png_structp png_ptr);
    extern void png_write_image(png_structp png_ptr, png_bytepp image);
    extern void png_write_info(png_structp png_ptr, png_infop info_ptr);
    extern void png_write_png(png_structp png_ptr, png_infop info_ptr,
			      int transforms, voidp params);
    extern void png_write_row(png_structp png_ptr, png_bytep row);
    extern void png_write_rows(png_structp png_ptr, png_bytepp row,
			       png_uint_32 num_rows);
#if __LSB_VERSION__ >= 32
    extern void png_set_gray_1_2_4_to_8(png_structp png_ptr);
    extern void png_set_palette_to_rgb(png_structp png_ptr);
    extern void png_set_tRNS_to_alpha(png_structp png_ptr);
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
#undef png_check_sig
    extern int png_check_sig(png_bytep sig, int num);
    extern void png_convert_from_struct_tm(png_timep ptime,
					   struct tm *ttime);
    extern void png_convert_from_time_t(png_timep ptime, time_t ttime);
    extern png_structp png_create_read_struct_2(png_const_charp
						user_png_ver,
						png_voidp error_ptr,
						png_error_ptr error_fn,
						png_error_ptr warn_fn,
						png_voidp mem_ptr,
						png_malloc_ptr malloc_fn,
						png_free_ptr free_fn);
    extern png_structp png_create_write_struct_2(png_const_charp
						 user_png_ver,
						 png_voidp error_ptr,
						 png_error_ptr error_fn,
						 png_error_ptr warn_fn,
						 png_voidp mem_ptr,
						 png_malloc_ptr malloc_fn,
						 png_free_ptr free_fn);
    extern void png_data_freer(png_structp png_ptr, png_infop info_ptr,
			       int freer, png_uint_32 mask);
    extern void png_destroy_info_struct(png_structp png_ptr,
					png_infopp info_ptr_ptr);
    extern void png_free_data(png_structp png_ptr, png_infop info_ptr,
			      png_uint_32 free_me, int num);
    extern png_charp png_get_header_ver(png_structp png_ptr);
    extern png_uint_32 png_get_unknown_chunks(png_structp png_ptr,
					      png_infop info_ptr,
					      png_unknown_chunkpp entries);
    extern png_voidp png_get_user_chunk_ptr(png_structp png_ptr);
    extern void png_info_init_3(png_infopp info_ptr,
				png_size_t png_info_struct_size);
    extern png_uint_32 png_permit_mng_features(png_structp png_ptr,
					       png_uint_32
					       mng_features_permitted);
    extern void png_set_compression_buffer_size(png_structp png_ptr,
						png_uint_32 size);
    extern void png_set_compression_mem_level(png_structp png_ptr,
					      int mem_level);
    extern void png_set_compression_method(png_structp png_ptr,
					   int method);
    extern void png_set_compression_strategy(png_structp png_ptr,
					     int strategy);
    extern void png_set_compression_window_bits(png_structp png_ptr,
						int window_bits);
    extern void png_set_invert_alpha(png_structp png_ptr);
    extern void png_set_keep_unknown_chunks(png_structp png_ptr, int keep,
					    png_bytep chunk_list,
					    int num_chunks);
    extern void png_set_mem_fn(png_structp png_ptr, png_voidp mem_ptr,
			       png_malloc_ptr malloc_fn,
			       png_free_ptr free_fn);
    extern void png_set_read_user_chunk_fn(png_structp png_ptr,
					   png_voidp user_chunk_ptr,
					   png_user_chunk_ptr
					   read_user_chunk_fn);
    extern void png_set_read_user_transform_fn(png_structp png_ptr,
					       png_user_transform_ptr
					       read_user_transform_fn);
    extern void png_set_sRGB_gAMA_and_cHRM(png_structp png_ptr,
					   png_infop info_ptr, int intent);
    extern void png_set_unknown_chunk_location(png_structp png_ptr,
					       png_infop info_ptr,
					       int chunk, int location);
    extern void png_set_unknown_chunks(png_structp png_ptr,
				       png_infop info_ptr,
				       png_unknown_chunkp unknowns,
				       int num_unknowns);
    extern void png_set_write_status_fn(png_structp png_ptr,
					png_write_status_ptr write_row_fn);
    extern void png_set_write_user_transform_fn(png_structp png_ptr,
						png_user_transform_ptr
						write_user_transform_fn);
    extern void png_start_read_image(png_structp png_ptr);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
