#if (__LSB_VERSION__ >= 40 )
#ifndef _CAIRO_CAIRO_H_
#define _CAIRO_CAIRO_H_


#ifdef __cplusplus
extern "C" {
#endif


#define CAIRO_VERSION	 \
   CAIRO_VERSION_ENCODE( CAIRO_VERSION_MAJOR, CAIRO_VERSION_MINOR, \
    CAIRO_VERSION_MICRO)
#define CAIRO_VERSION_ENCODE(major, minor, micro)	(\
  ((major) * 10000)   \
+ ((minor) *   100) \
+ ((micro) *     1))


    typedef int cairo_bool_t;

    typedef struct _cairo cairo_t;

    typedef struct _cairo_surface cairo_surface_t;

    typedef struct _cairo_matrix cairo_matrix_t;

    typedef struct _cairo_pattern cairo_pattern_t;

    typedef void (*cairo_destroy_func_t) (void *);

    typedef struct _cairo_user_data_key cairo_user_data_key_t;

    typedef enum _cairo_status {
	CAIRO_STATUS_SUCCESS,
	CAIRO_STATUS_NO_MEMORY = 1,
	CAIRO_STATUS_INVALID_RESTORE = 2,
	CAIRO_STATUS_INVALID_POP_GROUP = 3,
	CAIRO_STATUS_NO_CURRENT_POINT = 4,
	CAIRO_STATUS_INVALID_MATRIX = 5,
	CAIRO_STATUS_INVALID_STATUS = 6,
	CAIRO_STATUS_NULL_POINTER = 7,
	CAIRO_STATUS_INVALID_STRING = 8,
	CAIRO_STATUS_INVALID_PATH_DATA = 9,
	CAIRO_STATUS_READ_ERROR = 10,
	CAIRO_STATUS_WRITE_ERROR = 11,
	CAIRO_STATUS_SURFACE_FINISHED = 12,
	CAIRO_STATUS_SURFACE_TYPE_MISMATCH = 13,
	CAIRO_STATUS_PATTERN_TYPE_MISMATCH = 14,
	CAIRO_STATUS_INVALID_CONTENT = 15,
	CAIRO_STATUS_INVALID_FORMAT = 16,
	CAIRO_STATUS_INVALID_VISUAL = 17,
	CAIRO_STATUS_FILE_NOT_FOUND = 18,
	CAIRO_STATUS_INVALID_DASH = 19,
	CAIRO_STATUS_INVALID_DSC_COMMENT = 20,
	CAIRO_STATUS_INVALID_INDEX = 21,
	CAIRO_STATUS_CLIP_NOT_REPRESENTABLE = 22
    } cairo_status_t;

    typedef enum _cairo_content {
	CAIRO_CONTENT_COLOR = 4096,
	CAIRO_CONTENT_ALPHA = 8192,
	CAIRO_CONTENT_COLOR_ALPHA = 12288
    } cairo_content_t;

    typedef cairo_status_t(*cairo_write_func_t) (void *,
						 const unsigned char *,
						 unsigned int);

    typedef cairo_status_t(*cairo_read_func_t) (void *, unsigned char *,
						unsigned int);

    typedef enum _cairo_operator {
	CAIRO_OPERATOR_CLEAR,
	CAIRO_OPERATOR_SOURCE = 1,
	CAIRO_OPERATOR_OVER = 2,
	CAIRO_OPERATOR_IN = 3,
	CAIRO_OPERATOR_OUT = 4,
	CAIRO_OPERATOR_ATOP = 5,
	CAIRO_OPERATOR_DEST = 6,
	CAIRO_OPERATOR_DEST_OVER = 7,
	CAIRO_OPERATOR_DEST_IN = 8,
	CAIRO_OPERATOR_DEST_OUT = 9,
	CAIRO_OPERATOR_DEST_ATOP = 10,
	CAIRO_OPERATOR_XOR = 11,
	CAIRO_OPERATOR_ADD = 12,
	CAIRO_OPERATOR_SATURATE = 13
    } cairo_operator_t;

    typedef enum _cairo_antialias {
	CAIRO_ANTIALIAS_DEFAULT,
	CAIRO_ANTIALIAS_NONE = 1,
	CAIRO_ANTIALIAS_GRAY = 2,
	CAIRO_ANTIALIAS_SUBPIXEL = 3
    } cairo_antialias_t;

    typedef enum _cairo_fill_rule {
	CAIRO_FILL_RULE_WINDING,
	CAIRO_FILL_RULE_EVEN_ODD = 1
    } cairo_fill_rule_t;

    typedef enum _cairo_line_cap {
	CAIRO_LINE_CAP_BUTT,
	CAIRO_LINE_CAP_ROUND = 1,
	CAIRO_LINE_CAP_SQUARE = 2
    } cairo_line_cap_t;

    typedef enum _cairo_line_join {
	CAIRO_LINE_JOIN_MITER,
	CAIRO_LINE_JOIN_ROUND = 1,
	CAIRO_LINE_JOIN_BEVEL = 2
    } cairo_line_join_t;

    typedef struct _cairo_rectangle cairo_rectangle_t;

    typedef struct _cairo_rectangle_list cairo_rectangle_list_t;

    typedef struct _cairo_scaled_font cairo_scaled_font_t;

    typedef struct _cairo_font_face cairo_font_face_t;

    typedef struct {
	long unsigned int index;
	double x;
	double y;
    } cairo_glyph_t;

    typedef struct {
	double x_bearing;
	double y_bearing;
	double width;
	double height;
	double x_advance;
	double y_advance;
    } cairo_text_extents_t;

    typedef struct {
	double ascent;
	double descent;
	double height;
	double max_x_advance;
	double max_y_advance;
    } cairo_font_extents_t;

    typedef enum _cairo_font_slant {
	CAIRO_FONT_SLANT_NORMAL,
	CAIRO_FONT_SLANT_ITALIC = 1,
	CAIRO_FONT_SLANT_OBLIQUE = 2
    } cairo_font_slant_t;

    typedef enum _cairo_font_weight {
	CAIRO_FONT_WEIGHT_NORMAL,
	CAIRO_FONT_WEIGHT_BOLD = 1
    } cairo_font_weight_t;

    typedef enum _cairo_subpixel_order {
	CAIRO_SUBPIXEL_ORDER_DEFAULT,
	CAIRO_SUBPIXEL_ORDER_RGB = 1,
	CAIRO_SUBPIXEL_ORDER_BGR = 2,
	CAIRO_SUBPIXEL_ORDER_VRGB = 3,
	CAIRO_SUBPIXEL_ORDER_VBGR = 4
    } cairo_subpixel_order_t;

    typedef enum _cairo_hint_style {
	CAIRO_HINT_STYLE_DEFAULT,
	CAIRO_HINT_STYLE_NONE = 1,
	CAIRO_HINT_STYLE_SLIGHT = 2,
	CAIRO_HINT_STYLE_MEDIUM = 3,
	CAIRO_HINT_STYLE_FULL = 4
    } cairo_hint_style_t;

    typedef enum _cairo_hint_metrics {
	CAIRO_HINT_METRICS_DEFAULT,
	CAIRO_HINT_METRICS_OFF = 1,
	CAIRO_HINT_METRICS_ON = 2
    } cairo_hint_metrics_t;

    typedef struct _cairo_font_options cairo_font_options_t;

    typedef enum _cairo_font_type {
	CAIRO_FONT_TYPE_TOY,
	CAIRO_FONT_TYPE_FT = 1,
	CAIRO_FONT_TYPE_WIN32 = 2,
	CAIRO_FONT_TYPE_ATSUI = 3
    } cairo_font_type_t;

    typedef enum _cairo_path_data_type {
	CAIRO_PATH_MOVE_TO,
	CAIRO_PATH_LINE_TO = 1,
	CAIRO_PATH_CURVE_TO = 2,
	CAIRO_PATH_CLOSE_PATH = 3
    } cairo_path_data_type_t;

    typedef union _cairo_path_data_t cairo_path_data_t;

    typedef struct cairo_path cairo_path_t;

    typedef enum _cairo_surface_type {
	CAIRO_SURFACE_TYPE_IMAGE,
	CAIRO_SURFACE_TYPE_PDF = 1,
	CAIRO_SURFACE_TYPE_PS = 2,
	CAIRO_SURFACE_TYPE_XLIB = 3,
	CAIRO_SURFACE_TYPE_XCB = 4,
	CAIRO_SURFACE_TYPE_GLITZ = 5,
	CAIRO_SURFACE_TYPE_QUARTZ = 6,
	CAIRO_SURFACE_TYPE_WIN32 = 7,
	CAIRO_SURFACE_TYPE_BEOS = 8,
	CAIRO_SURFACE_TYPE_DIRECTFB = 9,
	CAIRO_SURFACE_TYPE_SVG = 10,
	CAIRO_SURFACE_TYPE_OS2 = 11
    } cairo_surface_type_t;

    typedef enum _cairo_format {
	CAIRO_FORMAT_ARGB32,
	CAIRO_FORMAT_RGB24 = 1,
	CAIRO_FORMAT_A8 = 2,
	CAIRO_FORMAT_A1 = 3
    } cairo_format_t;

    typedef enum _cairo_pattern_type {
	CAIRO_PATTERN_TYPE_SOLID,
	CAIRO_PATTERN_TYPE_SURFACE = 1,
	CAIRO_PATTERN_TYPE_LINEAR = 2,
	CAIRO_PATTERN_TYPE_RADIAL = 3
    } cairo_pattern_type_t;

    typedef enum _cairo_extend {
	CAIRO_EXTEND_NONE,
	CAIRO_EXTEND_REPEAT = 1,
	CAIRO_EXTEND_REFLECT = 2,
	CAIRO_EXTEND_PAD = 3
    } cairo_extend_t;

    typedef enum _cairo_filter {
	CAIRO_FILTER_FAST,
	CAIRO_FILTER_GOOD = 1,
	CAIRO_FILTER_BEST = 2,
	CAIRO_FILTER_NEAREST = 3,
	CAIRO_FILTER_BILINEAR = 4,
	CAIRO_FILTER_GAUSSIAN = 5
    } cairo_filter_t;






    struct _cairo_matrix {
	double xx;
	double yx;
	double xy;
	double yy;
	double x0;
	double y0;
    };




    struct _cairo_user_data_key {
	int unused;
    };


    struct _cairo_rectangle {
	double x;
	double y;
	double width;
	double height;
    };


    struct _cairo_rectangle_list {
	cairo_status_t status;
	cairo_rectangle_t *rectangles;
	int num_rectangles;
    };







    union _cairo_path_data_t {
	struct {
	    cairo_path_data_type_t type;
	    int length;
	} header;
	struct {
	    double x;
	    double y;
	} point;
    };


    struct cairo_path {
	cairo_status_t status;
	cairo_path_data_t *data;
	int num_data;
    };


/* Function prototypes */

    extern void cairo_append_path(cairo_t *, const cairo_path_t *);
    extern void cairo_arc(cairo_t *, double, double, double, double,
			  double);
    extern void cairo_arc_negative(cairo_t *, double, double, double,
				   double, double);
    extern void cairo_clip(cairo_t *);
    extern void cairo_clip_preserve(cairo_t *);
    extern void cairo_close_path(cairo_t *);
    extern void cairo_copy_page(cairo_t *);
    extern cairo_path_t *cairo_copy_path(cairo_t *);
    extern cairo_path_t *cairo_copy_path_flat(cairo_t *);
    extern cairo_t *cairo_create(cairo_surface_t *);
    extern void cairo_curve_to(cairo_t *, double, double, double, double,
			       double, double);
    extern void cairo_debug_reset_static_data(void);
    extern void cairo_destroy(cairo_t *);
    extern void cairo_device_to_user(cairo_t *, double *, double *);
    extern void cairo_device_to_user_distance(cairo_t *, double *,
					      double *);
    extern void cairo_fill(cairo_t *);
    extern void cairo_fill_extents(cairo_t *, double *, double *, double *,
				   double *);
    extern void cairo_fill_preserve(cairo_t *);
    extern void cairo_font_extents(cairo_t *, cairo_font_extents_t *);
    extern void cairo_font_face_destroy(cairo_font_face_t *);
    extern void *cairo_font_face_get_user_data(cairo_font_face_t *,
					       const cairo_user_data_key_t
					       *);
    extern cairo_font_face_t *cairo_font_face_reference(cairo_font_face_t
							*);
    extern cairo_status_t cairo_font_face_set_user_data(cairo_font_face_t
							*,
							const
							cairo_user_data_key_t
							*, void *,
							cairo_destroy_func_t);
    extern cairo_status_t cairo_font_face_status(cairo_font_face_t *);
    extern cairo_font_options_t *cairo_font_options_copy(const
							 cairo_font_options_t
							 *);
    extern cairo_font_options_t *cairo_font_options_create(void);
    extern void cairo_font_options_destroy(cairo_font_options_t *);
    extern cairo_bool_t cairo_font_options_equal(const cairo_font_options_t
						 *,
						 const cairo_font_options_t
						 *);
    extern cairo_antialias_t cairo_font_options_get_antialias(const
							      cairo_font_options_t
							      *);
    extern cairo_hint_metrics_t cairo_font_options_get_hint_metrics(const
								    cairo_font_options_t
								    *);
    extern cairo_hint_style_t cairo_font_options_get_hint_style(const
								cairo_font_options_t
								*);
    extern cairo_subpixel_order_t
	cairo_font_options_get_subpixel_order(const cairo_font_options_t
					      *);
    extern long unsigned int cairo_font_options_hash(const
						     cairo_font_options_t
						     *);
    extern void cairo_font_options_merge(cairo_font_options_t *,
					 const cairo_font_options_t *);
    extern void cairo_font_options_set_antialias(cairo_font_options_t *,
						 cairo_antialias_t);
    extern void cairo_font_options_set_hint_metrics(cairo_font_options_t *,
						    cairo_hint_metrics_t);
    extern void cairo_font_options_set_hint_style(cairo_font_options_t *,
						  cairo_hint_style_t);
    extern void cairo_font_options_set_subpixel_order(cairo_font_options_t
						      *,
						      cairo_subpixel_order_t);
    extern cairo_status_t cairo_font_options_status(cairo_font_options_t
						    *);
    extern cairo_antialias_t cairo_get_antialias(cairo_t *);
    extern void cairo_get_current_point(cairo_t *, double *, double *);
    extern cairo_fill_rule_t cairo_get_fill_rule(cairo_t *);
    extern cairo_font_face_t *cairo_get_font_face(cairo_t *);
    extern void cairo_get_font_matrix(cairo_t *, cairo_matrix_t *);
    extern void cairo_get_font_options(cairo_t *, cairo_font_options_t *);
    extern cairo_line_cap_t cairo_get_line_cap(cairo_t *);
    extern cairo_line_join_t cairo_get_line_join(cairo_t *);
    extern double cairo_get_line_width(cairo_t *);
    extern void cairo_get_matrix(cairo_t *, cairo_matrix_t *);
    extern double cairo_get_miter_limit(cairo_t *);
    extern cairo_operator_t cairo_get_operator(cairo_t *);
    extern cairo_pattern_t *cairo_get_source(cairo_t *);
    extern cairo_surface_t *cairo_get_target(cairo_t *);
    extern double cairo_get_tolerance(cairo_t *);
    extern void cairo_glyph_extents(cairo_t *, const cairo_glyph_t *, int,
				    cairo_text_extents_t *);
    extern void cairo_glyph_path(cairo_t *, const cairo_glyph_t *, int);
    extern void cairo_identity_matrix(cairo_t *);
    extern cairo_surface_t *cairo_image_surface_create(cairo_format_t, int,
						       int);
    extern cairo_surface_t *cairo_image_surface_create_for_data(unsigned
								char *,
								cairo_format_t,
								int, int,
								int);
    extern cairo_surface_t *cairo_image_surface_create_from_png(const char
								*);
    extern cairo_surface_t
	*cairo_image_surface_create_from_png_stream(cairo_read_func_t,
						    void *);
    extern int cairo_image_surface_get_height(cairo_surface_t *);
    extern int cairo_image_surface_get_width(cairo_surface_t *);
    extern cairo_bool_t cairo_in_fill(cairo_t *, double, double);
    extern cairo_bool_t cairo_in_stroke(cairo_t *, double, double);
    extern void cairo_line_to(cairo_t *, double, double);
    extern void cairo_mask(cairo_t *, cairo_pattern_t *);
    extern void cairo_mask_surface(cairo_t *, cairo_surface_t *, double,
				   double);
    extern void cairo_matrix_init(cairo_matrix_t *, double, double, double,
				  double, double, double);
    extern void cairo_matrix_init_identity(cairo_matrix_t *);
    extern void cairo_matrix_init_rotate(cairo_matrix_t *, double);
    extern void cairo_matrix_init_scale(cairo_matrix_t *, double, double);
    extern void cairo_matrix_init_translate(cairo_matrix_t *, double,
					    double);
    extern cairo_status_t cairo_matrix_invert(cairo_matrix_t *);
    extern void cairo_matrix_multiply(cairo_matrix_t *,
				      const cairo_matrix_t *,
				      const cairo_matrix_t *);
    extern void cairo_matrix_rotate(cairo_matrix_t *, double);
    extern void cairo_matrix_scale(cairo_matrix_t *, double, double);
    extern void cairo_matrix_transform_distance(const cairo_matrix_t *,
						double *, double *);
    extern void cairo_matrix_transform_point(const cairo_matrix_t *,
					     double *, double *);
    extern void cairo_matrix_translate(cairo_matrix_t *, double, double);
    extern void cairo_move_to(cairo_t *, double, double);
    extern void cairo_new_path(cairo_t *);
    extern void cairo_paint(cairo_t *);
    extern void cairo_paint_with_alpha(cairo_t *, double);
    extern void cairo_path_destroy(cairo_path_t *);
    extern void cairo_pattern_add_color_stop_rgb(cairo_pattern_t *, double,
						 double, double, double);
    extern void cairo_pattern_add_color_stop_rgba(cairo_pattern_t *,
						  double, double, double,
						  double, double);
    extern cairo_pattern_t
	*cairo_pattern_create_for_surface(cairo_surface_t *);
    extern cairo_pattern_t *cairo_pattern_create_linear(double, double,
							double, double);
    extern cairo_pattern_t *cairo_pattern_create_radial(double, double,
							double, double,
							double, double);
    extern cairo_pattern_t *cairo_pattern_create_rgb(double, double,
						     double);
    extern cairo_pattern_t *cairo_pattern_create_rgba(double, double,
						      double, double);
    extern void cairo_pattern_destroy(cairo_pattern_t *);
    extern cairo_extend_t cairo_pattern_get_extend(cairo_pattern_t *);
    extern cairo_filter_t cairo_pattern_get_filter(cairo_pattern_t *);
    extern void cairo_pattern_get_matrix(cairo_pattern_t *,
					 cairo_matrix_t *);
    extern cairo_pattern_t *cairo_pattern_reference(cairo_pattern_t *);
    extern void cairo_pattern_set_extend(cairo_pattern_t *,
					 cairo_extend_t);
    extern void cairo_pattern_set_filter(cairo_pattern_t *,
					 cairo_filter_t);
    extern void cairo_pattern_set_matrix(cairo_pattern_t *,
					 const cairo_matrix_t *);
    extern cairo_status_t cairo_pattern_status(cairo_pattern_t *);
    extern void cairo_rectangle(cairo_t *, double, double, double, double);
    extern cairo_t *cairo_reference(cairo_t *);
    extern void cairo_rel_curve_to(cairo_t *, double, double, double,
				   double, double, double);
    extern void cairo_rel_line_to(cairo_t *, double, double);
    extern void cairo_rel_move_to(cairo_t *, double, double);
    extern void cairo_reset_clip(cairo_t *);
    extern void cairo_restore(cairo_t *);
    extern void cairo_rotate(cairo_t *, double);
    extern void cairo_save(cairo_t *);
    extern void cairo_scale(cairo_t *, double, double);
    extern cairo_scaled_font_t *cairo_scaled_font_create(cairo_font_face_t
							 *,
							 const
							 cairo_matrix_t *,
							 const
							 cairo_matrix_t *,
							 const
							 cairo_font_options_t
							 *);
    extern void cairo_scaled_font_destroy(cairo_scaled_font_t *);
    extern void cairo_scaled_font_extents(cairo_scaled_font_t *,
					  cairo_font_extents_t *);
    extern void cairo_scaled_font_glyph_extents(cairo_scaled_font_t *,
						const cairo_glyph_t *, int,
						cairo_text_extents_t *);
    extern cairo_scaled_font_t
	*cairo_scaled_font_reference(cairo_scaled_font_t *);
    extern cairo_status_t cairo_scaled_font_status(cairo_scaled_font_t *);
    extern void cairo_select_font_face(cairo_t *, const char *,
				       cairo_font_slant_t,
				       cairo_font_weight_t);
    extern void cairo_set_antialias(cairo_t *, cairo_antialias_t);
    extern void cairo_set_dash(cairo_t *, const double *, int, double);
    extern void cairo_set_fill_rule(cairo_t *, cairo_fill_rule_t);
    extern void cairo_set_font_face(cairo_t *, cairo_font_face_t *);
    extern void cairo_set_font_matrix(cairo_t *, const cairo_matrix_t *);
    extern void cairo_set_font_options(cairo_t *,
				       const cairo_font_options_t *);
    extern void cairo_set_font_size(cairo_t *, double);
    extern void cairo_set_line_cap(cairo_t *, cairo_line_cap_t);
    extern void cairo_set_line_join(cairo_t *, cairo_line_join_t);
    extern void cairo_set_line_width(cairo_t *, double);
    extern void cairo_set_matrix(cairo_t *, const cairo_matrix_t *);
    extern void cairo_set_miter_limit(cairo_t *, double);
    extern void cairo_set_operator(cairo_t *, cairo_operator_t);
    extern void cairo_set_source(cairo_t *, cairo_pattern_t *);
    extern void cairo_set_source_rgb(cairo_t *, double, double, double);
    extern void cairo_set_source_rgba(cairo_t *, double, double, double,
				      double);
    extern void cairo_set_source_surface(cairo_t *, cairo_surface_t *,
					 double, double);
    extern void cairo_set_tolerance(cairo_t *, double);
    extern void cairo_show_glyphs(cairo_t *, const cairo_glyph_t *, int);
    extern void cairo_show_page(cairo_t *);
    extern void cairo_show_text(cairo_t *, const char *);
    extern cairo_status_t cairo_status(cairo_t *);
    extern const char *cairo_status_to_string(cairo_status_t);
    extern void cairo_stroke(cairo_t *);
    extern void cairo_stroke_extents(cairo_t *, double *, double *,
				     double *, double *);
    extern void cairo_stroke_preserve(cairo_t *);
    extern cairo_surface_t *cairo_surface_create_similar(cairo_surface_t *,
							 cairo_content_t,
							 int, int);
    extern void cairo_surface_destroy(cairo_surface_t *);
    extern void cairo_surface_finish(cairo_surface_t *);
    extern void cairo_surface_flush(cairo_surface_t *);
    extern void cairo_surface_get_font_options(cairo_surface_t *,
					       cairo_font_options_t *);
    extern void *cairo_surface_get_user_data(cairo_surface_t *,
					     const cairo_user_data_key_t
					     *);
    extern void cairo_surface_mark_dirty(cairo_surface_t *);
    extern void cairo_surface_mark_dirty_rectangle(cairo_surface_t *, int,
						   int, int, int);
    extern cairo_surface_t *cairo_surface_reference(cairo_surface_t *);
    extern void cairo_surface_set_device_offset(cairo_surface_t *, double,
						double);
    extern cairo_status_t cairo_surface_set_user_data(cairo_surface_t *,
						      const
						      cairo_user_data_key_t
						      *, void *,
						      cairo_destroy_func_t);
    extern cairo_status_t cairo_surface_status(cairo_surface_t *);
    extern cairo_status_t cairo_surface_write_to_png(cairo_surface_t *,
						     const char *);
    extern cairo_status_t cairo_surface_write_to_png_stream(cairo_surface_t
							    *,
							    cairo_write_func_t,
							    void *);
    extern void cairo_text_extents(cairo_t *, const char *,
				   cairo_text_extents_t *);
    extern void cairo_text_path(cairo_t *, const char *);
    extern void cairo_transform(cairo_t *, const cairo_matrix_t *);
    extern void cairo_translate(cairo_t *, double, double);
    extern void cairo_user_to_device(cairo_t *, double *, double *);
    extern void cairo_user_to_device_distance(cairo_t *, double *,
					      double *);
    extern int cairo_version(void);
    extern const char *cairo_version_string(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
