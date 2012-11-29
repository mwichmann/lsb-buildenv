#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBPNG15_PNG_H_
#define _LIBPNG15_PNG_H_

#include <setjmp.h>
#include <sys/types.h>
#include <time.h>
#include <stddef.h>
#include <libpng15/pnglibconf.h>
#include <libpng15/pngconf.h>

#ifdef __cplusplus
extern "C" {
#endif


#define PNG_LIBPNG_VER_STRING	"1.5.13"
#define PNG_HEADER_VERSION_STRING	" libpng version 1.5.13 - September 27, 2012\n"
#define PNG_LIBPNG_VER_SONUM	15
#define PNG_LIBPNG_VER_DLLNUM	15
#define PNG_LIBPNG_VER_MAJOR	1
#define PNG_LIBPNG_VER_MINOR	5
#define PNG_LIBPNG_VER_RELEASE	13
#define PNG_LIBPNG_BUILD_ALPHA	1
#define PNG_LIBPNG_BUILD_BETA	2
#define PNG_LIBPNG_BUILD_RC	3
#define PNG_LIBPNG_BUILD_STABLE	4
#define PNG_LIBPNG_BUILD_RELEASE_STATUS_MASK	7
#define PNG_LIBPNG_BUILD_PATCH	8
#define PNG_LIBPNG_BUILD_PRIVATE	16
#define PNG_LIBPNG_BUILD_SPECIAL	32
#define PNG_LIBPNG_BUILD_BASE_TYPE	PNG_LIBPNG_BUILD_STABLE
#define PNG_LIBPNG_VER	10513
#define png_libpng_ver	png_get_header_ver(NULL)
#define PNG_TEXT_COMPRESSION_NONE_WR	-3
#define PNG_TEXT_COMPRESSION_zTXt_WR	-2
#define PNG_TEXT_COMPRESSION_NONE	-1
#define PNG_ITXT_COMPRESSION_NONE	1
#define PNG_ITXT_COMPRESSION_zTXt	2
#define PNG_TEXT_COMPRESSION_LAST	3
#define PNG_HAVE_IHDR	0x01
#define PNG_HAVE_PLTE	0x02
#define PNG_AFTER_IDAT	0x08
#define PNG_UINT_31_MAX	((png_uint_32)0x7fffffffL)
#define PNG_UINT_32_MAX	((png_uint_32)(-1))
#define PNG_SIZE_MAX	((png_size_t)(-1))
#define PNG_FP_1	100000
#define PNG_FP_HALF	50000
#define PNG_FP_MAX	((png_fixed_point)0x7fffffffL)
#define PNG_FP_MIN	(-PNG_FP_MAX)
#define PNG_COLOR_MASK_PALETTE	1
#define PNG_COLOR_MASK_COLOR	2
#define PNG_COLOR_MASK_ALPHA	4
#define PNG_COLOR_TYPE_PALETTE	(PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_PALETTE)
#define PNG_COLOR_TYPE_RGB	(PNG_COLOR_MASK_COLOR)
#define PNG_COLOR_TYPE_RGB_ALPHA	(PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_ALPHA)
#define PNG_COLOR_TYPE_GRAY_ALPHA	(PNG_COLOR_MASK_ALPHA)
#define PNG_COLOR_TYPE_RGBA	PNG_COLOR_TYPE_RGB_ALPHA
#define PNG_COLOR_TYPE_GA	PNG_COLOR_TYPE_GRAY_ALPHA
#define PNG_COMPRESSION_TYPE_BASE	0
#define PNG_COMPRESSION_TYPE_DEFAULT	PNG_COMPRESSION_TYPE_BASE
#define PNG_FILTER_TYPE_BASE	0
#define PNG_INTRAPIXEL_DIFFERENCING	64
#define PNG_FILTER_TYPE_DEFAULT	PNG_FILTER_TYPE_BASE
#define PNG_INTERLACE_NONE	0
#define PNG_INTERLACE_ADAM7	1
#define PNG_INTERLACE_LAST	2
#define PNG_OFFSET_PIXEL	0
#define PNG_OFFSET_MICROMETER	1
#define PNG_OFFSET_LAST	2
#define PNG_EQUATION_LINEAR	0
#define PNG_EQUATION_BASE_E	1
#define PNG_EQUATION_ARBITRARY	2
#define PNG_EQUATION_HYPERBOLIC	3
#define PNG_EQUATION_LAST	4
#define PNG_SCALE_UNKNOWN	0
#define PNG_SCALE_METER	1
#define PNG_SCALE_RADIAN	2
#define PNG_SCALE_LAST	3
#define PNG_RESOLUTION_UNKNOWN	0
#define PNG_RESOLUTION_METER	1
#define PNG_RESOLUTION_LAST	2
#define PNG_sRGB_INTENT_RELATIVE	1
#define PNG_sRGB_INTENT_SATURATION	2
#define PNG_sRGB_INTENT_ABSOLUTE	3
#define PNG_sRGB_INTENT_LAST	4
#define PNG_KEYWORD_MAX_LENGTH	79
#define PNG_MAX_PALETTE_LENGTH	256
#define PNG_INFO_gAMA	0x0001
#define PNG_INFO_sBIT	0x0002
#define PNG_INFO_cHRM	0x0004
#define PNG_INFO_PLTE	0x0008
#define PNG_INFO_tRNS	0x0010
#define PNG_INFO_bKGD	0x0020
#define PNG_INFO_hIST	0x0040
#define PNG_INFO_pHYs	0x0080
#define PNG_INFO_oFFs	0x0100
#define PNG_INFO_tIME	0x0200
#define PNG_INFO_pCAL	0x0400
#define PNG_INFO_sRGB	0x0800
#define PNG_INFO_iCCP	0x1000
#define PNG_INFO_sPLT	0x2000
#define PNG_INFO_sCAL	0x4000
#define PNG_INFO_IDAT	0x8000
#define PNG_TRANSFORM_IDENTITY	0x0000
#define PNG_TRANSFORM_STRIP_16	0x0001
#define PNG_TRANSFORM_STRIP_ALPHA	0x0002
#define PNG_TRANSFORM_PACKING	0x0004
#define PNG_TRANSFORM_PACKSWAP	0x0008
#define PNG_TRANSFORM_EXPAND	0x0010
#define PNG_TRANSFORM_INVERT_MONO	0x0020
#define PNG_TRANSFORM_SHIFT	0x0040
#define PNG_TRANSFORM_BGR	0x0080
#define PNG_TRANSFORM_SWAP_ALPHA	0x0100
#define PNG_TRANSFORM_SWAP_ENDIAN	0x0200
#define PNG_TRANSFORM_INVERT_ALPHA	0x0400
#define PNG_TRANSFORM_STRIP_FILLER	0x0800
#define PNG_TRANSFORM_STRIP_FILLER_BEFORE	PNG_TRANSFORM_STRIP_FILLER
#define PNG_TRANSFORM_STRIP_FILLER_AFTER	0x1000
#define PNG_TRANSFORM_GRAY_TO_RGB	0x2000
#define PNG_TRANSFORM_EXPAND_16	0x4000
#define PNG_TRANSFORM_SCALE_16	0x8000
#define PNG_FLAG_MNG_EMPTY_PLTE	0x01
#define PNG_FLAG_MNG_FILTER_64	0x04
#define PNG_ALL_MNG_FEATURES	0x05
#define png_check_sig(sig, n)	!png_sig_cmp((sig), 0, (n))
#define PNG_ERROR_ACTION_NONE	1
#define PNG_ERROR_ACTION_WARN	2
#define PNG_ERROR_ACTION_ERROR	3
#define PNG_RGB_TO_GRAY_DEFAULT	(-1)
#define PNG_ALPHA_PNG	0
#define PNG_ALPHA_STANDARD	1
#define PNG_ALPHA_ASSOCIATED	1
#define PNG_ALPHA_PREMULTIPLIED	1
#define PNG_ALPHA_OPTIMIZED	2
#define PNG_ALPHA_BROKEN	3
#define PNG_DEFAULT_sRGB	-1
#define PNG_GAMMA_MAC_18	-2
#define PNG_GAMMA_sRGB	220000
#define PNG_GAMMA_LINEAR	PNG_FP_1
#define PNG_READ_16_TO_8	SUPPORTED
#define PNG_GAMMA_THRESHOLD	(PNG_GAMMA_THRESHOLD_FIXED*.00001)
#define PNG_CRC_DEFAULT	0
#define PNG_CRC_ERROR_QUIT	1
#define PNG_CRC_WARN_DISCARD	2
#define PNG_CRC_WARN_USE	3
#define PNG_CRC_QUIET_USE	4
#define PNG_CRC_NO_CHANGE	5
#define PNG_NO_FILTERS	0x00
#define PNG_FILTER_NONE	0x08
#define PNG_FILTER_SUB	0x10
#define PNG_FILTER_UP	0x20
#define PNG_FILTER_AVG	0x40
#define PNG_FILTER_PAETH	0x80
#define PNG_ALL_FILTERS	(PNG_FILTER_NONE | PNG_FILTER_SUB | PNG_FILTER_UP | PNG_FILTER_AVG | PNG_FILTER_PAETH)
#define PNG_FILTER_VALUE_SUB	1
#define PNG_FILTER_VALUE_UP	2
#define PNG_FILTER_VALUE_AVG	3
#define PNG_FILTER_VALUE_PAETH	4
#define PNG_FILTER_VALUE_LAST	5
#define PNG_FILTER_HEURISTIC_DEFAULT	0
#define PNG_FILTER_HEURISTIC_UNWEIGHTED	1
#define PNG_FILTER_HEURISTIC_WEIGHTED	2
#define PNG_FILTER_HEURISTIC_LAST	3
#define PNG_DESTROY_WILL_FREE_DATA	1
#define PNG_SET_WILL_FREE_DATA	1
#define PNG_USER_WILL_FREE_DATA	2
#define PNG_FREE_HIST	0x0008
#define PNG_FREE_ICCP	0x0010
#define PNG_FREE_SPLT	0x0020
#define PNG_FREE_ROWS	0x0040
#define PNG_FREE_PCAL	0x0080
#define PNG_FREE_SCAL	0x0100
#define PNG_FREE_UNKN	0x0200
#define PNG_FREE_LIST	0x0400
#define PNG_FREE_PLTE	0x1000
#define PNG_FREE_TRNS	0x2000
#define PNG_FREE_TEXT	0x4000
#define PNG_FREE_ALL	0x7fff
#define PNG_FREE_MUL	0x4220
#define PNG_HANDLE_CHUNK_NEVER	1
#define PNG_HANDLE_CHUNK_IF_SAFE	2
#define PNG_HANDLE_CHUNK_ALWAYS	3
#define PNG_INTERLACE_ADAM7_PASSES	7
#define PNG_PASS_START_ROW(pass)	(((1&~(pass))<<(3-((pass)>>1)))&7)
#define PNG_PASS_START_COL(pass)	(((1& (pass))<<(3-(((pass)+1)>>1)))&7)
#define PNG_PASS_ROW_OFFSET(pass)	((pass)>2?(8>>(((pass)-1)>>1)):8)
#define PNG_PASS_COL_OFFSET(pass)	(1<<((7-(pass))>>1))
#define PNG_PASS_ROW_SHIFT(pass)	((pass)>2?(8-(pass))>>1:3)
#define PNG_PASS_COL_SHIFT(pass)	((pass)>1?(7-(pass))>>1:3)
#define PNG_PASS_ROWS(height, pass)	(((height)+(((1<<PNG_PASS_ROW_SHIFT(pass))-1)-PNG_PASS_START_ROW(pass)))>>PNG_PASS_ROW_SHIFT(pass))
#define PNG_PASS_COLS(width, pass)	(((width)+(((1<<PNG_PASS_COL_SHIFT(pass))-1)-PNG_PASS_START_COL(pass)))>>PNG_PASS_COL_SHIFT(pass))
#define PNG_ROW_FROM_PASS_ROW(yIn, pass)	(((yIn)<<PNG_PASS_ROW_SHIFT(pass))+PNG_PASS_START_ROW(pass))
#define PNG_COL_FROM_PASS_COL(xIn, pass)	(((xIn)<<PNG_PASS_COL_SHIFT(pass))+PNG_PASS_START_COL(pass))
#define PNG_PASS_MASK(pass,off)	(((0x110145AF>>(((7-(off))-(pass))<<2)) & 0xF) | ((0x01145AF0>>(((7-(off))-(pass))<<2)) & 0xF0))
#define PNG_ROW_IN_INTERLACE_PASS(y, pass)	((PNG_PASS_MASK(pass,0) >> ((y)&7)) & 1)
#define PNG_COL_IN_INTERLACE_PASS(x, pass)	((PNG_PASS_MASK(pass,1) >> ((x)&7)) & 1)


    typedef char *png_libpng_version_1_5_13;

    typedef const png_color *png_const_colorp;

    typedef const png_color_16 *png_const_color_16p;

    typedef const png_color_8 *png_const_color_8p;

    typedef const png_sPLT_entry *png_const_sPLT_entryp;

    typedef const png_sPLT_t *png_const_sPLT_tp;

    typedef const png_text *png_const_textp;

    typedef const png_time *png_const_timep;

    typedef const png_unknown_chunk *png_const_unknown_chunkp;

    typedef const png_info *png_const_infop;

    typedef const png_struct *png_const_structp;

    typedef void (*png_unknown_chunk_ptr) (void);

    typedef void (*png_longjmp_ptr) (void);

    typedef struct {
	png_byte red;
	png_byte green;
	png_byte blue;
    } png_color_struct;

    typedef png_color_struct png_color;

    typedef struct {
	png_byte index;
	png_uint_16 red;
	png_uint_16 green;
	png_uint_16 blue;
	png_uint_16 gray;
    } png_color_16_struct;

    typedef png_color_16_struct png_color_16;

    typedef struct {
	png_byte red;
	png_byte green;
	png_byte blue;
	png_byte gray;
	png_byte alpha;
    } png_color_8_struct;

    typedef png_color_8_struct png_color_8;

    typedef struct {
	png_uint_16 red;
	png_uint_16 green;
	png_uint_16 blue;
	png_uint_16 alpha;
	png_uint_16 frequency;
    } png_sPLT_entry_struct;

    typedef png_sPLT_entry_struct png_sPLT_entry;

    typedef struct {
	png_charp name;
	png_byte depth;
	png_sPLT_entryp entries;
	png_int_32 nentries;
    } png_sPLT_struct;

    typedef png_sPLT_struct png_sPLT;

    typedef struct {
	int compression;
	png_charp key;
	png_charp text;
	png_size_t text_length;
	png_size_t itxt_length;
	png_charp lang;
	png_charp lang_key;
    } png_text_struct;

    typedef png_text_struct png_text;

    typedef struct {
	png_uint_16 year;
	png_byte month;
	png_byte day;
	png_byte hour;
	png_byte minute;
	png_byte second;
    } png_time_struct;

    typedef png_time_struct png_time;

    typedef struct {
	png_byte name[];
	png_byte *data;
	png_size_t size;
	png_byte location;
    } png_unknown_chunk_t;

    typedef png_unknown_chunk_t png_unknown_chunk;

    typedef struct {
	png_uint_32 width;
	png_size_t rowbytes;
	png_byte color_type;
	png_byte bit_depth;
	png_byte channels;
	png_byte pixel_depth;
    } png_row_info_struct;

    typedef png_row_info_struct png_row_info;

    typedef struct png_info_def png_info;

    typedef png_color *png_colorp;

    typedef png_color **png_colorpp;

    typedef png_color_16 *png_color_16p;

    typedef png_color_16 **png_color_16pp;

    typedef png_color_8 *png_color_8p;

    typedef png_color_8 **png_color_8pp;

    typedef png_sPLT_entry *png_sPLT_entryp;

    typedef png_sPLT_entry **png_sPLT_entrypp;

    typedef png_sPLT_t *png_sPLT_tp;

    typedef png_sPLT_t **png_sPLT_tpp;

    typedef png_text *png_textp;

    typedef png_text **png_textpp;

    typedef png_time *png_timep;

    typedef png_time **png_timepp;

    typedef png_unknown_chunk *png_unknown_chunkp;

    typedef png_unknown_chunk **png_unknown_chunkpp;

    typedef png_info *png_infop;

    typedef png_info **png_infopp;

    typedef png_row_info *png_row_infop;

    typedef png_row_info **png_row_infopp;

    typedef png_struct *png_structp;

    typedef png_struct **png_structpp;

    typedef struct png_struct_def png_struct;

    typedef png_sPLT_struct png_sPLT_t;

    typedef void (*png_progressive_info_ptr) (png_structp, png_infop);

    typedef void (*png_progressive_end_ptr) (png_structp, png_infop);

    typedef void (*png_progressive_row_ptr) (png_structp, png_bytep,
					     png_uint_32, int);

    typedef void (*) (png_structp, png_voidp) png_free_ptr;

    typedef png_voidp(*) (png_structp, png_size_t) png_malloc_ptr;

    typedef int (*) (png_structp, png_unknown_chunkp) png_user_chunk_ptr;

    typedef void (*) (png_structp, png_uint_32, int) png_write_status_ptr;

    typedef void (*) (png_structp, png_uint_32, int) png_read_status_ptr;

    typedef void (*) (png_structp, png_row_infop,
		      png_bytep) png_user_transform_ptr;

    typedef void (*) (png_structp, png_bytep, png_size_t) png_flush_ptr;

    typedef void (*) (png_structp, png_const_charp) png_error_ptr;

    typedef void (*) (png_structp, png_bytep, png_size_t) png_rw_ptr;

    typedef void void (*) (png_structp, png_const_charp);

    typedef void void (*) (png_structp, png_bytep, png_size_t);

    typedef void void (*) (png_structp, png_row_infop, png_bytep);

    typedef void void (*) (png_structp, png_uint_32, int);

    typedef int int (*) (png_structp, png_unknown_chunkp);

    typedef png_voidp png_voidp(*) (png_structp, png_size_t);

    typedef void void (*) (png_structp, png_voidp);


/* Function prototypes */

    extern png_uint_32 png_access_version_number(void);
    extern void png_benign_error(png_rw_ptr png_ptr,
				 png_rw_ptr warning_message);
    extern void png_build_grayscale_palette(int bit_depth,
					    png_rw_ptr palette);
    extern png_voidp png_calloc(png_rw_ptr png_ptr, png_alloc_size_t size);
    extern void png_chunk_benign_error(png_rw_ptr png_ptr,
				       png_rw_ptr warning_message);
    extern void png_chunk_error(png_rw_ptr png_ptr,
				png_rw_ptr error_message);
    extern void png_chunk_warning(png_rw_ptr png_ptr,
				  png_rw_ptr warning_message);
    extern void png_convert_from_struct_tm(png_rw_ptr ptime,
					   const struct tm *ttime);
    extern void png_convert_from_time_t(png_rw_ptr ptime, time_t ttime);
    extern png_const_charp png_convert_to_rfc1123(png_rw_ptr png_ptr,
						  png_const_timep ptime);
    extern png_infop png_create_info_struct(png_rw_ptr png_ptr);
    extern png_structp png_create_read_struct(png_rw_ptr user_png_ver,
					      png_rw_ptr error_ptr,
					      png_error_ptr error_fn,
					      png_error_ptr warn_fn);
    extern png_structp png_create_read_struct_2(png_rw_ptr user_png_ver,
						png_rw_ptr error_ptr,
						png_error_ptr error_fn,
						png_error_ptr warn_fn,
						png_rw_ptr mem_ptr,
						png_malloc_ptr malloc_fn,
						png_free_ptr free_fn);
    extern png_structp png_create_write_struct(png_rw_ptr user_png_ver,
					       png_rw_ptr error_ptr,
					       png_error_ptr error_fn,
					       png_error_ptr warn_fn);
    extern png_structp png_create_write_struct_2(png_rw_ptr user_png_ver,
						 png_rw_ptr error_ptr,
						 png_error_ptr error_fn,
						 png_error_ptr warn_fn,
						 png_rw_ptr mem_ptr,
						 png_malloc_ptr malloc_fn,
						 png_free_ptr free_fn);
    extern void png_data_freer(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			       int freer, png_rw_ptr mask);
    extern void png_destroy_info_struct(png_rw_ptr png_ptr,
					png_rw_ptr info_ptr_ptr);
    extern void png_destroy_read_struct(png_rw_ptr png_ptr_ptr,
					png_rw_ptr info_ptr_ptr,
					png_rw_ptr end_info_ptr_ptr);
    extern void png_destroy_write_struct(png_rw_ptr png_ptr_ptr,
					 png_rw_ptr info_ptr_ptr);
    extern void png_error(png_rw_ptr png_ptr, png_rw_ptr error_message);
    extern void png_free(png_rw_ptr png_ptr, png_rw_ptr ptr);
    extern void png_free_data(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			      png_rw_ptr free_me, int num);
    extern void png_free_default(png_rw_ptr png_ptr, png_rw_ptr ptr);
    extern png_uint_32 png_get_IHDR(png_rw_ptr png_ptr,
				    png_rw_ptr info_ptr, png_rw_ptr width,
				    png_rw_ptr height, int *bit_depth,
				    int *color_type, int *interlace_method,
				    int *compression_method,
				    int *filter_method);
    extern png_uint_32 png_get_PLTE(png_const_structp png_ptr,
				    png_const_infop info_ptr,
				    png_rw_ptr palette, int *num_palette);
    extern png_uint_32 png_get_bKGD(png_const_structp png_ptr,
				    png_rw_ptr info_ptr,
				    png_rw_ptr background);
    extern png_byte png_get_bit_depth(png_const_structp png_ptr,
				      png_const_infop info_ptr);
    extern png_uint_32 png_get_cHRM(png_const_structp png_ptr,
				    png_const_infop info_ptr,
				    double *white_x, double *white_y,
				    double *red_x, double *red_y,
				    double *green_x, double *green_y,
				    double *blue_x, double *blue_y);
    extern png_uint_32 png_get_cHRM_XYZ(png_structp png_ptr,
					png_const_infop info_ptr,
					double *red_X, double *red_Y,
					double *red_X, double *green_X,
					double *green_Y, double *green_Z,
					double *blue_X, double *blue_Y,
					double *blue_Z);
    extern png_uint_32 png_get_cHRM_XYZ_fixed(png_structp png_ptr,
					      png_const_infop info_ptr,
					      png_fixed_point * int_red_X,
					      png_fixed_point * int_red_Y,
					      png_fixed_point * int_red_X,
					      png_fixed_point *
					      int_green_X,
					      png_fixed_point *
					      int_green_Y,
					      png_fixed_point *
					      int_green_Z,
					      png_fixed_point * int_blue_X,
					      png_fixed_point *
					      int_blue_Y);
    extern png_uint_32 png_get_cHRM_fixed(png_const_structp png_ptr,
					  png_const_infop info_ptr,
					  png_fixed_point * int_white_x,
					  png_fixed_point * int_white_y,
					  png_fixed_point * int_red_x,
					  png_fixed_point * int_red_y,
					  png_fixed_point * int_green_x,
					  png_fixed_point * int_green_y,
					  png_fixed_point * int_blue_x,
					  png_fixed_point * int_blue_y);
    extern png_byte png_get_channels(png_const_structp png_ptr,
				     png_const_infop info_ptr);
    extern png_uint_32 png_get_chunk_cache_max(png_const_structp png_ptr);
    extern png_alloc_size_t png_get_chunk_malloc_max(png_const_structp
						     png_ptr);
    extern png_byte png_get_color_type(png_const_structp png_ptr,
				       png_const_infop info_ptr);
    extern png_size_t png_get_compression_buffer_size(png_const_structp
						      png_ptr);
    extern png_byte png_get_compression_type(png_const_structp png_ptr,
					     png_const_infop info_ptr);
    extern png_const_charp png_get_copyright(png_const_structp png_ptr);
    extern png_byte png_get_current_pass_number(png_const_structp);
    extern png_uint_32 png_get_current_row_number(png_const_structp);
    extern png_voidp png_get_error_ptr(png_const_structp png_ptr);
    extern png_byte png_get_filter_type(png_const_structp png_ptr,
					png_const_infop info_ptr);
    extern png_uint_32 png_get_gAMA(png_const_structp png_ptr,
				    png_const_infop info_ptr,
				    double *file_gamma);
    extern png_uint_32 png_get_gAMA_fixed(png_const_structp png_ptr,
					  png_const_infop info_ptr,
					  png_fixed_point *
					  int_file_gamma);
    extern png_uint_32 png_get_hIST(png_const_structp png_ptr,
				    png_const_infop info_ptr,
				    png_rw_ptr hist);
    extern png_const_charp png_get_header_ver(png_const_structp png_ptr);
    extern png_const_charp png_get_header_version(png_const_structp
						  png_ptr);
    extern png_uint_32 png_get_iCCP(png_const_structp png_ptr,
				    png_const_infop info_ptr,
				    png_rw_ptr name, int *compression_type,
				    png_rw_ptr profile,
				    png_rw_ptr proflen);
    extern png_uint_32 png_get_image_height(png_const_structp png_ptr,
					    png_const_infop info_ptr);
    extern png_uint_32 png_get_image_width(png_const_structp png_ptr,
					   png_const_infop info_ptr);
    extern png_int_32 png_get_int_32(png_const_bytep buf);
    extern png_byte png_get_interlace_type(png_const_structp png_ptr,
					   png_const_infop info_ptr);
    extern png_const_bytep png_get_io_chunk_name(png_rw_ptr png_ptr);
    extern png_uint_32 png_get_io_chunk_type(png_const_structp png_ptr);
    extern png_voidp png_get_io_ptr(png_rw_ptr png_ptr);
    extern png_uint_32 png_get_io_state(png_rw_ptr png_ptr);
    extern png_const_charp png_get_libpng_ver(png_const_structp png_ptr);
    extern png_voidp png_get_mem_ptr(png_const_structp png_ptr);
    extern png_uint_32 png_get_oFFs(png_const_structp png_ptr,
				    png_const_infop info_ptr,
				    png_rw_ptr offset_x,
				    png_rw_ptr offset_y, int *unit_type);
    extern png_uint_32 png_get_pCAL(png_const_structp png_ptr,
				    png_const_infop info_ptr, void purpose,
				    png_rw_ptr X0, png_rw_ptr X1,
				    int *type, int *nparams, void units,
				    char ***params);
    extern png_uint_32 png_get_pHYs(png_const_structp png_ptr,
				    png_const_infop info_ptr,
				    png_rw_ptr res_x, png_rw_ptr res_y,
				    int *unit_type);
    extern png_uint_32 png_get_pHYs_dpi(png_const_structp png_ptr,
					png_const_infop info_ptr,
					png_rw_ptr res_x, png_rw_ptr res_y,
					int *unit_type);
    extern float png_get_pixel_aspect_ratio(png_const_structp png_ptr,
					    png_const_infop info_ptr);
    extern png_fixed_point
	png_get_pixel_aspect_ratio_fixed(png_const_structp png_ptr,
					 png_const_infop info_ptr);
    extern png_uint_32 png_get_pixels_per_inch(png_const_structp png_ptr,
					       png_const_infop info_ptr);
    extern png_uint_32 png_get_pixels_per_meter(png_const_structp png_ptr,
						png_const_infop info_ptr);
    extern png_voidp png_get_progressive_ptr(png_const_structp png_ptr);
    extern png_byte png_get_rgb_to_gray_status(png_const_structp png_ptr);
    extern png_size_t png_get_rowbytes(png_const_structp png_ptr,
				       png_const_infop info_ptr);
    extern png_bytepp png_get_rows(png_const_structp png_ptr,
				   png_const_infop info_ptr);
    extern png_uint_32 png_get_sBIT(png_const_structp png_ptr,
				    png_rw_ptr info_ptr,
				    png_rw_ptr sig_bit);
    extern png_uint_32 png_get_sCAL(png_const_structp png_ptr,
				    png_const_infop info_ptr, int *unit,
				    double *width, double *height);
    extern png_uint_32 png_get_sCAL_fixed(png_structp png_ptr,
					  png_const_infop info_ptr,
					  int *unit, double *width,
					  double *height);
    extern png_uint_32 png_get_sCAL_s(png_const_structp png_ptr,
				      png_const_infop info_ptr, int *unit,
				      png_rw_ptr swidth,
				      png_rw_ptr sheight);
    extern png_uint_32 png_get_sPLT(png_const_structp png_ptr,
				    png_const_infop info_ptr,
				    png_rw_ptr entries);
    extern png_uint_32 png_get_sRGB(png_const_structp png_ptr,
				    png_const_infop info_ptr,
				    int *file_srgb_intent);
    extern png_const_bytep png_get_signature(png_const_structp png_ptr,
					     png_rw_ptr info_ptr);
    extern png_uint_32 png_get_tIME(png_const_structp png_ptr,
				    png_rw_ptr info_ptr,
				    png_rw_ptr mod_time);
    extern png_uint_32 png_get_tRNS(png_const_structp png_ptr,
				    png_rw_ptr info_ptr,
				    png_rw_ptr trans_alpha, int *num_trans,
				    png_rw_ptr trans_color);
    extern png_uint_32 png_get_text(png_const_structp png_ptr,
				    png_const_infop info_ptr,
				    png_rw_ptr text_ptr, int *num_text);
    extern png_uint_16 png_get_uint_16(png_const_bytep buf);
    extern png_uint_32 png_get_uint_31(png_rw_ptr png_ptr,
				       png_const_bytep buf);
    extern png_uint_32 png_get_uint_32(png_const_bytep buf);
    extern int png_get_unknown_chunks(png_const_structp png_ptr,
				      png_const_infop info_ptr,
				      png_rw_ptr entries);
    extern png_voidp png_get_user_chunk_ptr(png_const_structp png_ptr);
    extern png_uint_32 png_get_user_height_max(png_const_structp png_ptr);
    extern png_voidp png_get_user_transform_ptr(png_const_structp png_ptr);
    extern png_uint_32 png_get_user_width_max(png_const_structp png_ptr);
    extern png_uint_32 png_get_valid(png_const_structp png_ptr,
				     png_const_infop info_ptr,
				     png_rw_ptr flag);
    extern float png_get_x_offset_inches(png_const_structp png_ptr,
					 png_const_infop info_ptr);
    extern png_fixed_point png_get_x_offset_inches_fixed(png_structp
							 png_ptr,
							 png_const_infop
							 info_ptr);
    extern png_int_32 png_get_x_offset_microns(png_const_structp png_ptr,
					       png_const_infop info_ptr);
    extern png_int_32 png_get_x_offset_pixels(png_const_structp png_ptr,
					      png_const_infop info_ptr);
    extern png_uint_32 png_get_x_pixels_per_inch(png_const_structp png_ptr,
						 png_const_infop info_ptr);
    extern png_uint_32 png_get_x_pixels_per_meter(png_const_structp
						  png_ptr,
						  png_const_infop
						  info_ptr);
    extern float png_get_y_offset_inches(png_const_structp png_ptr,
					 png_const_infop info_ptr);
    extern png_fixed_point png_get_y_offset_inches_fixed(png_structp
							 png_ptr,
							 png_const_infop
							 info_ptr);
    extern png_int_32 png_get_y_offset_microns(png_const_structp png_ptr,
					       png_const_infop info_ptr);
    extern png_int_32 png_get_y_offset_pixels(png_const_structp png_ptr,
					      png_const_infop info_ptr);
    extern png_uint_32 png_get_y_pixels_per_inch(png_const_structp png_ptr,
						 png_const_infop info_ptr);
    extern png_uint_32 png_get_y_pixels_per_meter(png_const_structp
						  png_ptr,
						  png_const_infop
						  info_ptr);
    extern int png_handle_as_unknown(png_rw_ptr png_ptr,
				     png_const_bytep chunk_name);
    extern void png_info_init_3(png_rw_ptr info_ptr,
				png_rw_ptr png_info_struct_size);
    extern void png_init_io(png_rw_ptr png_ptr, png_rw_ptr fp);
    extern void png_longjmp(png_rw_ptr png_ptr, int val);
    extern png_voidp png_malloc(png_rw_ptr png_ptr, png_alloc_size_t size);
    extern png_voidp png_malloc_default(png_rw_ptr png_ptr,
					png_alloc_size_t size);
    extern png_voidp png_malloc_warn(png_rw_ptr png_ptr,
				     png_alloc_size_t size);
    extern png_uint_32 png_permit_mng_features(png_rw_ptr png_ptr,
					       png_rw_ptr
					       mng_features_permitted);
    extern void png_process_data(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
				 png_rw_ptr buffer,
				 png_rw_ptr buffer_size);
    extern png_size_t png_process_data_pause(png_rw_ptr, int save);
    extern png_uint_32 png_process_data_skip(png_rw_ptr);
    extern void png_progressive_combine_row(png_rw_ptr png_ptr,
					    png_rw_ptr old_row,
					    png_const_bytep new_row);
    extern void png_read_end(png_rw_ptr png_ptr, png_rw_ptr info_ptr);
    extern void png_read_image(png_rw_ptr png_ptr, png_rw_ptr image);
    extern void png_read_info(png_rw_ptr png_ptr, png_rw_ptr info_ptr);
    extern void png_read_png(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     int transforms, png_rw_ptr params);
    extern void png_read_row(png_rw_ptr png_ptr, png_rw_ptr row,
			     png_rw_ptr display_row);
    extern void png_read_rows(png_rw_ptr png_ptr, png_rw_ptr row,
			      png_rw_ptr display_row, png_rw_ptr num_rows);
    extern void png_read_update_info(png_rw_ptr png_ptr,
				     png_rw_ptr info_ptr);
    extern int png_reset_zstream(png_rw_ptr png_ptr);
    extern void png_save_int_32(png_rw_ptr buf, png_rw_ptr i);
    extern void png_save_uint_16(png_rw_ptr buf, unsigned int i);
    extern void png_save_uint_32(png_rw_ptr buf, png_rw_ptr i);
    extern void png_set_IHDR(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_rw_ptr width, png_rw_ptr height,
			     int bit_depth, int color_type,
			     int interlace_method, int compression_method,
			     int filter_method);
    extern void png_set_PLTE(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_const_colorp palette, int num_palette);
    extern void png_set_add_alpha(png_rw_ptr png_ptr, png_rw_ptr filler,
				  int flags);
    extern void png_set_alpha_mode(png_structp png_ptr, int mode,
				   double output_gamma);
    extern void png_set_alpha_mode_fixed(png_structp png_ptr, int mode,
					 png_fixed_point output_gamma);
    extern void png_set_bKGD(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_const_color_16p background);
    extern void png_set_background(png_structp png_ptr,
				   png_const_color_16p background_color,
				   int background_gamma_code,
				   int need_expand,
				   double background_gamma);
    extern void png_set_background_fixed(png_structp png_ptr,
					 png_const_color_16p
					 background_color,
					 int background_gamma_code,
					 int need_expand,
					 png_fixed_point background_gamma);
    extern void png_set_benign_errors(png_rw_ptr png_ptr, int allowed);
    extern void png_set_bgr(png_rw_ptr png_ptr);
    extern void png_set_cHRM(png_structp png_ptr, png_infop info_ptr,
			     double white_x, double white_y, double red_x,
			     double red_y, double green_x, double green_y,
			     double blue_x, double blue_y);
    extern void png_set_cHRM_XYZ(png_structp png_ptr, png_infop info_ptr,
				 double red_X, double red_Y, double red_Z,
				 double green_X, double green_Y,
				 double green_Z, double blue_X,
				 double blue_Y, double blue_Z);
    extern void png_set_cHRM_XYZ_fixed(png_structp png_ptr,
				       png_infop info_ptr,
				       png_fixed_point int_red_X,
				       png_fixed_point int_red_Y,
				       png_fixed_point int_red_Z,
				       png_fixed_point int_green_X,
				       png_fixed_point int_green_Y,
				       png_fixed_point int_green_Z,
				       png_fixed_point int_blue_X,
				       png_fixed_point int_blue_Y,
				       png_fixed_point int_blue_Z);
    extern void png_set_cHRM_fixed(png_structp png_ptr, png_infop info_ptr,
				   png_fixed_point int_white_x,
				   png_fixed_point int_white_y,
				   png_fixed_point int_red_x,
				   png_fixed_point int_red_y,
				   png_fixed_point int_green_x,
				   png_fixed_point int_green_y,
				   png_fixed_point int_blue_x,
				   png_fixed_point int_blue_y);
    extern void png_set_check_for_invalid_index(png_rw_ptr png_ptr,
						int allowed);
    extern void png_set_chunk_cache_max(png_rw_ptr png_ptr,
					png_rw_ptr user_chunk_cache_max);
    extern void png_set_chunk_malloc_max(png_rw_ptr png_ptr,
					 png_alloc_size_t
					 user_chunk_cache_max);
    extern void png_set_compression_buffer_size(png_rw_ptr png_ptr,
						png_rw_ptr size);
    extern void png_set_compression_level(png_rw_ptr png_ptr, int level);
    extern void png_set_compression_mem_level(png_rw_ptr png_ptr,
					      int mem_level);
    extern void png_set_compression_method(png_rw_ptr png_ptr, int method);
    extern void png_set_compression_strategy(png_rw_ptr png_ptr,
					     int strategy);
    extern void png_set_compression_window_bits(png_rw_ptr png_ptr,
						int window_bits);
    extern void png_set_crc_action(png_rw_ptr png_ptr, int crit_action,
				   int ancil_action);
    extern void png_set_error_fn(png_rw_ptr png_ptr, png_rw_ptr error_ptr,
				 png_error_ptr error_fn,
				 png_error_ptr warning_fn);
    extern void png_set_expand(png_rw_ptr png_ptr);
    extern void png_set_expand_16(png_rw_ptr png_ptr);
    extern void png_set_expand_gray_1_2_4_to_8(png_rw_ptr png_ptr);
    extern void png_set_filler(png_rw_ptr png_ptr, png_rw_ptr filler,
			       int flags);
    extern void png_set_filter(png_rw_ptr png_ptr, int method,
			       int filters);
    extern void png_set_filter_heuristics(png_structp png_ptr,
					  int heuristic_method,
					  int num_weights,
					  png_const_doublep filter_weights,
					  png_const_doublep filter_costs);
    extern void png_set_filter_heuristics_fixed(png_structp png_ptr,
						int heuristic_method,
						int num_weights,
						png_const_fixed_point_p
						filter_weights,
						png_const_fixed_point_p
						filter_costs);
    extern void png_set_flush(png_rw_ptr png_ptr, int nrows);
    extern void png_set_gAMA(png_structp png_ptr, png_infop info_ptr,
			     double file_gamma);
    extern void png_set_gAMA_fixed(png_structp png_ptr, png_infop info_ptr,
				   png_fixed_point int_file_gamma);
    extern void png_set_gamma(png_structp png_ptr, double screen_gamma,
			      double override_file_gamma);
    extern void png_set_gamma_fixed(png_structp png_ptr,
				    png_fixed_point screen_gamma,
				    png_fixed_point override_file_gamma);
    extern void png_set_gray_to_rgb(png_rw_ptr png_ptr);
    extern void png_set_hIST(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_const_uint_16p hist);
    extern void png_set_iCCP(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_rw_ptr name, int compression_type,
			     png_const_bytep profile, png_rw_ptr proflen);
    extern int png_set_interlace_handling(png_rw_ptr png_ptr);
    extern void png_set_invalid(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
				int mask);
    extern void png_set_invert_alpha(png_rw_ptr png_ptr);
    extern void png_set_invert_mono(png_rw_ptr png_ptr);
    extern void png_set_keep_unknown_chunks(png_rw_ptr png_ptr, int keep,
					    png_const_bytep chunk_list,
					    int num_chunks);
    extern struct __jmp_buf_tag *png_set_longjmp_fn(png_rw_ptr png_ptr,
						    png_longjmp_ptr
						    longjmp_fn,
						    size_t jmp_buf_size);
    extern void png_set_mem_fn(png_rw_ptr png_ptr, png_rw_ptr mem_ptr,
			       png_malloc_ptr malloc_fn,
			       png_free_ptr free_fn);
    extern void png_set_oFFs(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_rw_ptr offset_x, png_rw_ptr offset_y,
			     int unit_type);
    extern void png_set_pCAL(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_rw_ptr purpose, png_rw_ptr X0,
			     png_rw_ptr X1, int type, int nparams,
			     png_rw_ptr units, png_rw_ptr params);
    extern void png_set_pHYs(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_rw_ptr res_x, png_rw_ptr res_y,
			     int unit_type);
    extern void png_set_packing(png_rw_ptr png_ptr);
    extern void png_set_packswap(png_rw_ptr png_ptr);
    extern void png_set_palette_to_rgb(png_rw_ptr png_ptr);
    extern void png_set_progressive_read_fn(png_rw_ptr png_ptr,
					    png_rw_ptr progressive_ptr,
					    png_progressive_info_ptr
					    info_fn,
					    png_progressive_row_ptr row_fn,
					    png_progressive_end_ptr
					    end_fn);
    extern void png_set_quantize(png_rw_ptr png_ptr, png_rw_ptr palette,
				 int num_palette, int maximum_colors,
				 png_const_uint_16p histogram,
				 int full_quantize);
    extern void png_set_read_fn(png_rw_ptr png_ptr, png_rw_ptr io_ptr,
				png_rw_ptr read_data_fn);
    extern void png_set_read_status_fn(png_rw_ptr png_ptr,
				       png_read_status_ptr read_row_fn);
    extern void png_set_read_user_chunk_fn(png_rw_ptr png_ptr,
					   png_rw_ptr user_chunk_ptr,
					   png_user_chunk_ptr
					   read_user_chunk_fn);
    extern void png_set_read_user_transform_fn(png_rw_ptr png_ptr,
					       png_user_transform_ptr
					       read_user_transform_fn);
    extern void png_set_rgb_to_gray(png_structp png_ptr, int error_action,
				    double red, double green);
    extern void png_set_rgb_to_gray_fixed(png_structp png_ptr,
					  int error_action,
					  png_fixed_point red,
					  png_fixed_point green);
    extern void png_set_rows(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_rw_ptr row_pointers);
    extern void png_set_sBIT(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_const_color_8p sig_bit);
    extern void png_set_sCAL(png_structp png_ptr, png_infop info_ptr,
			     int unit, double width, double height);
    extern void png_set_sCAL_fixed(png_structp png_ptr, png_infop info_ptr,
				   int unit, png_fixed_point width,
				   png_fixed_point height);
    extern void png_set_sCAL_s(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			       int unit, png_rw_ptr swidth,
			       png_rw_ptr sheight);
    extern void png_set_sPLT(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_const_sPLT_tp entries, int nentries);
    extern void png_set_sRGB(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     int srgb_intent);
    extern void png_set_sRGB_gAMA_and_cHRM(png_rw_ptr png_ptr,
					   png_rw_ptr info_ptr,
					   int srgb_intent);
    extern void png_set_scale_16(png_rw_ptr png_ptr);
    extern void png_set_shift(png_rw_ptr png_ptr,
			      png_const_color_8p true_bits);
    extern void png_set_sig_bytes(png_rw_ptr png_ptr, int num_bytes);
    extern void png_set_strip_16(png_rw_ptr png_ptr);
    extern void png_set_strip_alpha(png_rw_ptr png_ptr);
    extern void png_set_swap(png_rw_ptr png_ptr);
    extern void png_set_swap_alpha(png_rw_ptr png_ptr);
    extern void png_set_tIME(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_const_timep mod_time);
    extern void png_set_tRNS(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_const_bytep trans_alpha, int num_trans,
			     png_const_color_16p trans_color);
    extern void png_set_tRNS_to_alpha(png_rw_ptr png_ptr);
    extern void png_set_text(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			     png_const_textp text_ptr, int num_text);
    extern void png_set_text_compression_level(png_rw_ptr png_ptr,
					       int level);
    extern void png_set_text_compression_mem_level(png_rw_ptr png_ptr,
						   int mem_level);
    extern void png_set_text_compression_method(png_rw_ptr png_ptr,
						int method);
    extern void png_set_text_compression_strategy(png_rw_ptr png_ptr,
						  int strategy);
    extern void png_set_text_compression_window_bits(png_rw_ptr png_ptr,
						     int window_bits);
    extern void png_set_unknown_chunk_location(png_rw_ptr png_ptr,
					       png_rw_ptr info_ptr,
					       int chunk, int location);
    extern void png_set_unknown_chunks(png_rw_ptr png_ptr,
				       png_rw_ptr info_ptr,
				       png_const_unknown_chunkp unknowns,
				       int num_unknowns);
    extern void png_set_user_limits(png_rw_ptr png_ptr,
				    png_rw_ptr user_width_max,
				    png_rw_ptr user_height_max);
    extern void png_set_user_transform_info(png_rw_ptr png_ptr,
					    png_rw_ptr user_transform_ptr,
					    int user_transform_depth,
					    int user_transform_channels);
    extern void png_set_write_fn(png_rw_ptr png_ptr, png_rw_ptr io_ptr,
				 png_rw_ptr write_data_fn,
				 png_flush_ptr output_flush_fn);
    extern void png_set_write_status_fn(png_rw_ptr png_ptr,
					png_write_status_ptr write_row_fn);
    extern void png_set_write_user_transform_fn(png_rw_ptr png_ptr,
						png_user_transform_ptr
						write_user_transform_fn);
    extern int png_sig_cmp(png_const_bytep sig, png_rw_ptr start,
			   png_rw_ptr num_to_check);
    extern void png_start_read_image(png_rw_ptr png_ptr);
    extern void png_warning(png_rw_ptr png_ptr,
			    png_rw_ptr warning_message);
    extern void png_write_chunk(png_rw_ptr png_ptr,
				png_const_bytep chunk_name,
				png_const_bytep data, png_rw_ptr length);
    extern void png_write_chunk_data(png_rw_ptr png_ptr,
				     png_const_bytep data,
				     png_rw_ptr length);
    extern void png_write_chunk_end(png_rw_ptr png_ptr);
    extern void png_write_chunk_start(png_rw_ptr png_ptr,
				      png_const_bytep chunk_name,
				      png_rw_ptr length);
    extern void png_write_end(png_rw_ptr png_ptr, png_rw_ptr info_ptr);
    extern void png_write_flush(png_rw_ptr png_ptr);
    extern void png_write_image(png_rw_ptr png_ptr, png_rw_ptr image);
    extern void png_write_info(png_rw_ptr png_ptr, png_rw_ptr info_ptr);
    extern void png_write_info_before_PLTE(png_rw_ptr png_ptr,
					   png_rw_ptr info_ptr);
    extern void png_write_png(png_rw_ptr png_ptr, png_rw_ptr info_ptr,
			      int transforms, png_rw_ptr params);
    extern void png_write_row(png_rw_ptr png_ptr, png_const_bytep row);
    extern void png_write_rows(png_rw_ptr png_ptr, png_rw_ptr row,
			       png_rw_ptr num_rows);
    extern void png_write_sig(png_rw_ptr png_ptr);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */