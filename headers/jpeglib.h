#if (__LSB_VERSION__ >= 31 )
#ifndef _JPEGLIB_H_
#define _JPEGLIB_H_

#include <stdio.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FAR
#define HAVE_PROTOTYPES
#define HAVE_UNSIGNED_CHAR
#define HAVE_UNSIGNED_SHORT
#define jpeg_create_compress(cinfo)	 \
	jpeg_CreateCompress((cinfo), JPEG_LIB_VERSION, (size_t) sizeof(struct \
	jpeg_compress_struct))
#define jpeg_create_decompress(cinfo)	 \
	jpeg_CreateDecompress((cinfo), JPEG_LIB_VERSION, (size_t) \
	sizeof(struct jpeg_decompress_struct))
#define jpeg_common_fields	 \
	struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct \
	jpeg_progress_mgr * progress; void * client_data; boolean \
	is_decompressor; int global_state
#define GETJSAMPLE(value)	((int) (value))
#define GETJOCTET(value)	(value)
#define JPEG_SUSPENDED	0
#define JPOOL_PERMANENT	0
#define JPEG_RST0	0xD0
#define JPEG_EOI	0xD9
#define JPEG_APP0	0xE0
#define JPEG_COM	0xFE
#define JPEG_HEADER_OK	1
#define JPEG_REACHED_SOS	1
#define JPOOL_IMAGE	1
#define C_MAX_BLOCKS_IN_MCU	10
#define D_MAX_BLOCKS_IN_MCU	10
#define MAX_COMPONENTS	10
#define CENTERJSAMPLE	128
#define NUM_ARITH_TBLS	16
#define JPEG_HEADER_TABLES_ONLY	2
#define JPEG_REACHED_EOI	2
#define JPOOL_NUMPOOLS	2
#define JMSG_LENGTH_MAX	200
#define MAXJSAMPLE	255
#define JPEG_ROW_COMPLETED	3
#define JPEG_SCAN_COMPLETED	4
#define MAX_COMPS_IN_SCAN	4
#define MAX_SAMP_FACTOR	4
#define NUM_HUFF_TBLS	4
#define NUM_QUANT_TBLS	4
#define JPEG_LIB_VERSION	62
#define DCTSIZE2	64
#define JPEG_MAX_DIMENSION	65500L
#define BITS_IN_JSAMPLE	8
#define DCTSIZE	8
#define JMSG_STR_PARM_MAX	80
#define JPP(arglist)	arglist
#define EXTERN(type)	extern type
#define JDCT_FASTEST	JDCT_IFAST
#define JDCT_DEFAULT	JDCT_ISLOW
#define LOCAL(type)	static type
#define METHODDEF(type)	static type
#define GLOBAL(type)	type
#define JMETHOD(type,methodname,arglist)	type (*methodname) arglist


    typedef struct jpeg_common_struct *j_common_ptr;

    typedef unsigned char JSAMPLE;

    typedef JSAMPLE *JSAMPROW;

    typedef JSAMPROW *JSAMPARRAY;

    typedef unsigned int JDIMENSION;

    typedef short int JCOEF;

    typedef JCOEF JBLOCK[64];

    typedef JBLOCK *JBLOCKROW;

    typedef JBLOCKROW *JBLOCKARRAY;

    typedef struct jvirt_sarray_control *jvirt_sarray_ptr;

    typedef int boolean;

    typedef struct jvirt_barray_control *jvirt_barray_ptr;

    typedef unsigned char JOCTET;

    typedef struct jpeg_decompress_struct *j_decompress_ptr;

    typedef enum {
	JCS_UNKNOWN = 0,
	JCS_GRAYSCALE = 1,
	JCS_RGB = 2,
	JCS_YCbCr = 3,
	JCS_CMYK = 4,
	JCS_YCCK = 5
    } J_COLOR_SPACE;

    typedef enum {
	JDCT_ISLOW = 0,
	JDCT_IFAST = 1,
	JDCT_FLOAT = 2
    } J_DCT_METHOD;

    typedef enum {
	JDITHER_NONE = 0,
	JDITHER_ORDERED = 1,
	JDITHER_FS = 2
    } J_DITHER_MODE;

    typedef short unsigned int UINT16;

    typedef struct {
	UINT16 quantval[64];
	boolean sent_table;
    } JQUANT_TBL;

    typedef unsigned char UINT8;

    typedef struct {
	UINT8 bits[17];
	UINT8 huffval[256];
	boolean sent_table;
    } JHUFF_TBL;

    typedef struct {
	int component_id;
	int component_index;
	int h_samp_factor;
	int v_samp_factor;
	int quant_tbl_no;
	int dc_tbl_no;
	int ac_tbl_no;
	JDIMENSION width_in_blocks;
	JDIMENSION height_in_blocks;
	int DCT_scaled_size;
	JDIMENSION downsampled_width;
	JDIMENSION downsampled_height;
	boolean component_needed;
	int MCU_width;
	int MCU_height;
	int MCU_blocks;
	int MCU_sample_width;
	int last_col_width;
	int last_row_height;
	JQUANT_TBL *quant_table;
	void *dct_table;
    } jpeg_component_info;

    typedef struct jpeg_marker_struct *jpeg_saved_marker_ptr;

    typedef struct jpeg_compress_struct *j_compress_ptr;

    typedef struct {
	int comps_in_scan;
	int component_index[4];
	int Ss;
	int Se;
	int Ah;
	int Al;
    } jpeg_scan_info;

    typedef JSAMPARRAY *JSAMPIMAGE;

    typedef boolean(*jpeg_marker_parser_method) (j_decompress_ptr);

    struct jpeg_decompress_struct {
	struct jpeg_error_mgr *err;
	struct jpeg_memory_mgr *mem;
	struct jpeg_progress_mgr *progress;
	void *client_data;
	boolean is_decompressor;
	int global_state;
	struct jpeg_source_mgr *src;
	JDIMENSION image_width;
	JDIMENSION image_height;
	int num_components;
	J_COLOR_SPACE jpeg_color_space;
	J_COLOR_SPACE out_color_space;
	unsigned int scale_num;
	unsigned int scale_denom;
	double output_gamma;
	boolean buffered_image;
	boolean raw_data_out;
	J_DCT_METHOD dct_method;
	boolean do_fancy_upsampling;
	boolean do_block_smoothing;
	boolean quantize_colors;
	J_DITHER_MODE dither_mode;
	boolean two_pass_quantize;
	int desired_number_of_colors;
	boolean enable_1pass_quant;
	boolean enable_external_quant;
	boolean enable_2pass_quant;
	JDIMENSION output_width;
	JDIMENSION output_height;
	int out_color_components;
	int output_components;
	int rec_outbuf_height;
	int actual_number_of_colors;
	JSAMPARRAY colormap;
	JDIMENSION output_scanline;
	int input_scan_number;
	JDIMENSION input_iMCU_row;
	int output_scan_number;
	JDIMENSION output_iMCU_row;
	int *(coef_bits)[64];
	JQUANT_TBL *quant_tbl_ptrs[4];
	JHUFF_TBL *dc_huff_tbl_ptrs[4];
	JHUFF_TBL *ac_huff_tbl_ptrs[4];
	int data_precision;
	jpeg_component_info *comp_info;
	boolean progressive_mode;
	boolean arith_code;
	UINT8 arith_dc_L[16];
	UINT8 arith_dc_U[16];
	UINT8 arith_ac_K[16];
	unsigned int restart_interval;
	boolean saw_JFIF_marker;
	UINT8 JFIF_major_version;
	UINT8 JFIF_minor_version;
	UINT8 density_unit;
	UINT16 X_density;
	UINT16 Y_density;
	boolean saw_Adobe_marker;
	UINT8 Adobe_transform;
	boolean CCIR601_sampling;
	jpeg_saved_marker_ptr marker_list;
	int max_h_samp_factor;
	int max_v_samp_factor;
	int min_DCT_scaled_size;
	JDIMENSION total_iMCU_rows;
	JSAMPLE *sample_range_limit;
	int comps_in_scan;
	jpeg_component_info *cur_comp_info[4];
	JDIMENSION MCUs_per_row;
	JDIMENSION MCU_rows_in_scan;
	int blocks_in_MCU;
	int MCU_membership[10];
	int Ss;
	int Se;
	int Ah;
	int Al;
	int unread_marker;
	struct jpeg_decomp_master *master;
	struct jpeg_d_main_controller *main;
	struct jpeg_d_coef_controller *coef;
	struct jpeg_d_post_controller *post;
	struct jpeg_input_controller *inputctl;
	struct jpeg_marker_reader *marker;
	struct jpeg_entropy_decoder *entropy;
	struct jpeg_inverse_dct *idct;
	struct jpeg_upsampler *upsample;
	struct jpeg_color_deconverter *cconvert;
	struct jpeg_color_quantizer *cquantize;
    };

    struct jpeg_error_mgr {
	void (*error_exit) (j_common_ptr);
	void (*emit_message) (j_common_ptr, int);
	void (*output_message) (j_common_ptr);
	void (*format_message) (j_common_ptr, char *);
	void (*reset_error_mgr) (j_common_ptr);
	int msg_code;
	union {
	    int i[8];
	    char s[80];
	} msg_parm;
	int trace_level;
	long int num_warnings;
	const char *const *jpeg_message_table;
	int last_jpeg_message;
	const char *const *addon_message_table;
	int first_addon_message;
	int last_addon_message;
    };

    struct jpeg_common_struct {
	struct jpeg_error_mgr *err;
	struct jpeg_memory_mgr *mem;
	struct jpeg_progress_mgr *progress;
	void *client_data;
	boolean is_decompressor;
	int global_state;
    };

    struct jpeg_memory_mgr {
	void *(*alloc_small) (j_common_ptr, int, size_t);
	void *(*alloc_large) (j_common_ptr, int, size_t);
	 JSAMPARRAY(*alloc_sarray) (j_common_ptr, int, JDIMENSION,
				    JDIMENSION);
	 JBLOCKARRAY(*alloc_barray) (j_common_ptr, int, JDIMENSION,
				     JDIMENSION);
	 jvirt_sarray_ptr(*request_virt_sarray) (j_common_ptr, int,
						 boolean, JDIMENSION,
						 JDIMENSION, JDIMENSION);
	 jvirt_barray_ptr(*request_virt_barray) (j_common_ptr, int,
						 boolean, JDIMENSION,
						 JDIMENSION, JDIMENSION);
	void (*realize_virt_arrays) (j_common_ptr);
	 JSAMPARRAY(*access_virt_sarray) (j_common_ptr, jvirt_sarray_ptr,
					  JDIMENSION, JDIMENSION, boolean);
	 JBLOCKARRAY(*access_virt_barray) (j_common_ptr, jvirt_barray_ptr,
					   JDIMENSION, JDIMENSION,
					   boolean);
	void (*free_pool) (j_common_ptr, int);
	void (*self_destruct) (j_common_ptr);
	long int max_memory_to_use;
	long int max_alloc_chunk;
    };

    struct jpeg_progress_mgr {
	void (*progress_monitor) (j_common_ptr);
	long int pass_counter;
	long int pass_limit;
	int completed_passes;
	int total_passes;
    };

    struct jpeg_source_mgr {
	const JOCTET *next_input_byte;
	size_t bytes_in_buffer;
	void (*init_source) (j_decompress_ptr);
	 boolean(*fill_input_buffer) (j_decompress_ptr);
	void (*skip_input_data) (j_decompress_ptr, long int);
	 boolean(*resync_to_restart) (j_decompress_ptr, int);
	void (*term_source) (j_decompress_ptr);
    };

    struct jpeg_marker_struct {
	jpeg_saved_marker_ptr next;
	UINT8 marker;
	unsigned int original_length;
	unsigned int data_length;
	JOCTET *data;
    };

    struct jpeg_compress_struct {
	struct jpeg_error_mgr *err;
	struct jpeg_memory_mgr *mem;
	struct jpeg_progress_mgr *progress;
	void *client_data;
	boolean is_decompressor;
	int global_state;
	struct jpeg_destination_mgr *dest;
	JDIMENSION image_width;
	JDIMENSION image_height;
	int input_components;
	J_COLOR_SPACE in_color_space;
	double input_gamma;
	int data_precision;
	int num_components;
	J_COLOR_SPACE jpeg_color_space;
	jpeg_component_info *comp_info;
	JQUANT_TBL *quant_tbl_ptrs[4];
	JHUFF_TBL *dc_huff_tbl_ptrs[4];
	JHUFF_TBL *ac_huff_tbl_ptrs[4];
	UINT8 arith_dc_L[16];
	UINT8 arith_dc_U[16];
	UINT8 arith_ac_K[16];
	int num_scans;
	const jpeg_scan_info *scan_info;
	boolean raw_data_in;
	boolean arith_code;
	boolean optimize_coding;
	boolean CCIR601_sampling;
	int smoothing_factor;
	J_DCT_METHOD dct_method;
	unsigned int restart_interval;
	int restart_in_rows;
	boolean write_JFIF_header;
	UINT8 JFIF_major_version;
	UINT8 JFIF_minor_version;
	UINT8 density_unit;
	UINT16 X_density;
	UINT16 Y_density;
	boolean write_Adobe_marker;
	JDIMENSION next_scanline;
	boolean progressive_mode;
	int max_h_samp_factor;
	int max_v_samp_factor;
	JDIMENSION total_iMCU_rows;
	int comps_in_scan;
	jpeg_component_info *cur_comp_info[4];
	JDIMENSION MCUs_per_row;
	JDIMENSION MCU_rows_in_scan;
	int blocks_in_MCU;
	int MCU_membership[10];
	int Ss;
	int Se;
	int Ah;
	int Al;
	struct jpeg_comp_master *master;
	struct jpeg_c_main_controller *main;
	struct jpeg_c_prep_controller *prep;
	struct jpeg_c_coef_controller *coef;
	struct jpeg_marker_writer *marker;
	struct jpeg_color_converter *cconvert;
	struct jpeg_downsampler *downsample;
	struct jpeg_forward_dct *fdct;
	struct jpeg_entropy_encoder *entropy;
	jpeg_scan_info *script_space;
	int script_space_size;
    };

    struct jpeg_destination_mgr {
	JOCTET *next_output_byte;
	size_t free_in_buffer;
	void (*init_destination) (j_compress_ptr);
	 boolean(*empty_output_buffer) (j_compress_ptr);
	void (*term_destination) (j_compress_ptr);
    };


/* Function prototypes */

    extern void jpeg_CreateCompress(j_compress_ptr, int, size_t);
    extern void jpeg_CreateDecompress(j_decompress_ptr, int, size_t);
    extern void jpeg_abort(j_common_ptr);
    extern void jpeg_abort_compress(j_compress_ptr);
    extern void jpeg_abort_decompress(j_decompress_ptr);
    extern void jpeg_add_quant_table(j_compress_ptr, int,
				     const unsigned int *, int, boolean);
    extern JHUFF_TBL *jpeg_alloc_huff_table(j_common_ptr);
    extern JQUANT_TBL *jpeg_alloc_quant_table(j_common_ptr);
    extern void jpeg_calc_output_dimensions(j_decompress_ptr);
    extern int jpeg_consume_input(j_decompress_ptr);
    extern void jpeg_copy_critical_parameters(j_decompress_ptr,
					      j_compress_ptr);
    extern void jpeg_default_colorspace(j_compress_ptr);
    extern void jpeg_destroy(j_common_ptr);
    extern void jpeg_destroy_compress(j_compress_ptr);
    extern void jpeg_destroy_decompress(j_decompress_ptr);
    extern void jpeg_finish_compress(j_compress_ptr);
    extern boolean jpeg_finish_decompress(j_decompress_ptr);
    extern boolean jpeg_finish_output(j_decompress_ptr);
    extern boolean jpeg_has_multiple_scans(j_decompress_ptr);
    extern boolean jpeg_input_complete(j_decompress_ptr);
    extern void jpeg_new_colormap(j_decompress_ptr);
    extern int jpeg_quality_scaling(int);
    extern jvirt_barray_ptr *jpeg_read_coefficients(j_decompress_ptr);
    extern int jpeg_read_header(j_decompress_ptr, boolean);
    extern JDIMENSION jpeg_read_raw_data(j_decompress_ptr, JSAMPIMAGE,
					 JDIMENSION);
    extern JDIMENSION jpeg_read_scanlines(j_decompress_ptr, JSAMPARRAY,
					  JDIMENSION);
    extern boolean jpeg_resync_to_restart(j_decompress_ptr, int);
    extern void jpeg_save_markers(j_decompress_ptr, int, unsigned int);
    extern void jpeg_set_colorspace(j_compress_ptr, J_COLOR_SPACE);
    extern void jpeg_set_defaults(j_compress_ptr);
    extern void jpeg_set_linear_quality(j_compress_ptr, int, boolean);
    extern void jpeg_set_marker_processor(j_decompress_ptr, int,
					  jpeg_marker_parser_method);
    extern void jpeg_set_quality(j_compress_ptr, int, boolean);
    extern void jpeg_simple_progression(j_compress_ptr);
    extern void jpeg_start_compress(j_compress_ptr, boolean);
    extern boolean jpeg_start_decompress(j_decompress_ptr);
    extern boolean jpeg_start_output(j_decompress_ptr, int);
    extern struct jpeg_error_mgr *jpeg_std_error(struct jpeg_error_mgr *);
    extern void jpeg_stdio_dest(j_compress_ptr, FILE *);
    extern void jpeg_stdio_src(j_decompress_ptr, FILE *);
    extern void jpeg_suppress_tables(j_compress_ptr, boolean);
    extern void jpeg_write_coefficients(j_compress_ptr,
					jvirt_barray_ptr *);
    extern void jpeg_write_m_byte(j_compress_ptr, int);
    extern void jpeg_write_m_header(j_compress_ptr, int, unsigned int);
    extern void jpeg_write_marker(j_compress_ptr, int, const JOCTET *,
				  unsigned int);
    extern JDIMENSION jpeg_write_raw_data(j_compress_ptr, JSAMPIMAGE,
					  JDIMENSION);
    extern JDIMENSION jpeg_write_scanlines(j_compress_ptr, JSAMPARRAY,
					   JDIMENSION);
    extern void jpeg_write_tables(j_compress_ptr);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
