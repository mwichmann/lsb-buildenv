#if (__LSB_VERSION__ >= 31 )
#ifndef _PANGO_1_0_PANGO_PANGO_H_
#define _PANGO_1_0_PANGO_PANGO_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <atk-1.0/atk/atk.h>

#ifdef __cplusplus
extern "C" {
#endif


#define PANGO_CONTEXT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_CONTEXT, \
	PangoContextClass))
#define PANGO_LAYOUT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_LAYOUT, \
	PangoLayoutClass))
#define PANGO_RENDERER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_RENDERER, \
	PangoRendererClass))
#define PANGO_IS_CONTEXT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_CONTEXT))
#define PANGO_IS_LAYOUT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_LAYOUT))
#define PANGO_IS_RENDERER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_RENDERER))
#define PANGO_CONTEXT(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_CONTEXT, \
	PangoContext))
#define PANGO_FONT(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONT, PangoFont))
#define PANGO_FONTSET(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONTSET, \
	PangoFontset))
#define PANGO_FONT_FACE(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONT_FACE, \
	PangoFontFace))
#define PANGO_FONT_FAMILY(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONT_FAMILY, \
	PangoFontFamily))
#define PANGO_FONT_MAP(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FONT_MAP, \
	PangoFontMap))
#define PANGO_LAYOUT(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_LAYOUT, \
	PangoLayout))
#define PANGO_RENDERER(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_RENDERER, \
	PangoRenderer))
#define PANGO_IS_CONTEXT(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_CONTEXT))
#define PANGO_IS_FONT(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONT))
#define PANGO_IS_FONTSET(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONTSET))
#define PANGO_IS_FONT_FACE(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONT_FACE))
#define PANGO_IS_FONT_FAMILY(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONT_FAMILY))
#define PANGO_IS_FONT_MAP(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FONT_MAP))
#define PANGO_IS_LAYOUT(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_LAYOUT))
#define PANGO_IS_RENDERER(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_RENDERER))
#define PANGO_CONTEXT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_CONTEXT, \
	PangoContextClass))
#define PANGO_LAYOUT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_LAYOUT, \
	PangoLayoutClass))
#define PANGO_RENDERER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_RENDERER, \
	PangoRendererClass))
#define PANGO_PIXELS(d)	(((int)(d) + 512) >> 10)
#define pango_language_to_string(language)	((const char *)language)
#define PANGO_SCALE_XX_SMALL	((double)0.5787037037037)
#define PANGO_SCALE_X_SMALL	((double)0.6444444444444)
#define PANGO_SCALE_SMALL	((double)0.8333333333333)
#define PANGO_SCALE_MEDIUM	((double)1.0)
#define PANGO_SCALE_LARGE	((double)1.2)
#define PANGO_SCALE_X_LARGE	((double)1.4399999999999)
#define PANGO_SCALE_XX_LARGE	((double)1.728)
#define PANGO_RBEARING(rect)	((rect).x + (rect).width)
#define PANGO_LBEARING(rect)	((rect).x)
#define PANGO_DESCENT(rect)	((rect).y + (rect).height)
#define PANGO_ASCENT(rect)	(-(rect).y)
#define PANGO_TYPE_ALIGNMENT	(pango_alignment_get_type())
#define PANGO_TYPE_ATTR_TYPE	(pango_attr_type_get_type())
#define PANGO_TYPE_CONTEXT	(pango_context_get_type ())
#define PANGO_TYPE_COVERAGE_LEVEL	(pango_coverage_level_get_type())
#define PANGO_TYPE_DIRECTION	(pango_direction_get_type())
#define PANGO_TYPE_ELLIPSIZE_MODE	(pango_ellipsize_mode_get_type())
#define PANGO_TYPE_FONTSET	(pango_fontset_get_type ())
#define PANGO_TYPE_FONT_DESCRIPTION	(pango_font_description_get_type ())
#define PANGO_TYPE_FONT_FACE	(pango_font_face_get_type ())
#define PANGO_TYPE_FONT_FAMILY	(pango_font_family_get_type ())
#define PANGO_TYPE_FONT	(pango_font_get_type ())
#define PANGO_TYPE_FONT_MAP	(pango_font_map_get_type ())
#define PANGO_TYPE_FONT_MASK	(pango_font_mask_get_type())
#define PANGO_TYPE_FONT_METRICS	(pango_font_metrics_get_type ())
#define PANGO_TYPE_GLYPH_STRING	(pango_glyph_string_get_type ())
#define PANGO_TYPE_LANGUAGE	(pango_language_get_type ())
#define PANGO_TYPE_LAYOUT	(pango_layout_get_type ())
#define PANGO_TYPE_LAYOUT_ITER	(pango_layout_iter_get_type ())
#define PANGO_TYPE_MATRIX	(pango_matrix_get_type ())
#define PANGO_TYPE_RENDERER	(pango_renderer_get_type())
#define PANGO_TYPE_RENDER_PART	(pango_render_part_get_type())
#define PANGO_TYPE_SCRIPT	(pango_script_get_type())
#define PANGO_TYPE_STRETCH	(pango_stretch_get_type())
#define PANGO_TYPE_STYLE	(pango_style_get_type())
#define PANGO_TYPE_TAB_ALIGN	(pango_tab_align_get_type())
#define PANGO_TYPE_TAB_ARRAY	(pango_tab_array_get_type ())
#define PANGO_TYPE_UNDERLINE	(pango_underline_get_type())
#define PANGO_TYPE_VARIANT	(pango_variant_get_type())
#define PANGO_TYPE_WEIGHT	(pango_weight_get_type())
#define PANGO_TYPE_WRAP_MODE	(pango_wrap_mode_get_type())
#define PANGO_SCALE	1024
#define PANGO_TYPE_ATTR_LIST	pango_attr_list_get_type ()
#define PANGO_TYPE_COLOR	pango_color_get_type ()
#define PANGO_MATRIX_INIT	{ 1., 0., 0., 1., 0., 0. }
#if __LSB_VERSION__ >= 40
#if defined(PANGO_ENABLE_ENGINE) || defined(PANGO_ENABLE_BACKEND)
#define PANGO_GET_UNKNOWN_GLYPH(wc)	((PangoGlyph)(wc)|PANGO_GLYPH_UNKNOWN_FLAG)
#endif
#if defined(PANGO_ENABLE_ENGINE) || defined(PANGO_ENABLE_BACKEND)
#define PANGO_GLYPH_UNKNOWN_FLAG	((PangoGlyph)0x10000000)
#endif
#endif				/* __LSB_VERSION__ >= 4.0 */



    typedef struct _PangoFontFace PangoFontFace;

    typedef enum {
	PANGO_WRAP_WORD = 0,
	PANGO_WRAP_CHAR = 1,
	PANGO_WRAP_WORD_CHAR = 2
    } PangoWrapMode;

    typedef struct _PangoLayout PangoLayout;

    typedef struct _PangoScriptIter PangoScriptIter;

    typedef enum {
	PANGO_SCRIPT_INVALID_CODE = -1,
	PANGO_SCRIPT_COMMON = 0,
	PANGO_SCRIPT_INHERITED = 1,
	PANGO_SCRIPT_ARABIC = 2,
	PANGO_SCRIPT_ARMENIAN = 3,
	PANGO_SCRIPT_BENGALI = 4,
	PANGO_SCRIPT_BOPOMOFO = 5,
	PANGO_SCRIPT_CHEROKEE = 6,
	PANGO_SCRIPT_COPTIC = 7,
	PANGO_SCRIPT_CYRILLIC = 8,
	PANGO_SCRIPT_DESERET = 9,
	PANGO_SCRIPT_DEVANAGARI = 10,
	PANGO_SCRIPT_ETHIOPIC = 11,
	PANGO_SCRIPT_GEORGIAN = 12,
	PANGO_SCRIPT_GOTHIC = 13,
	PANGO_SCRIPT_GREEK = 14,
	PANGO_SCRIPT_GUJARATI = 15,
	PANGO_SCRIPT_GURMUKHI = 16,
	PANGO_SCRIPT_HAN = 17,
	PANGO_SCRIPT_HANGUL = 18,
	PANGO_SCRIPT_HEBREW = 19,
	PANGO_SCRIPT_HIRAGANA = 20,
	PANGO_SCRIPT_KANNADA = 21,
	PANGO_SCRIPT_KATAKANA = 22,
	PANGO_SCRIPT_KHMER = 23,
	PANGO_SCRIPT_LAO = 24,
	PANGO_SCRIPT_LATIN = 25,
	PANGO_SCRIPT_MALAYALAM = 26,
	PANGO_SCRIPT_MONGOLIAN = 27,
	PANGO_SCRIPT_MYANMAR = 28,
	PANGO_SCRIPT_OGHAM = 29,
	PANGO_SCRIPT_OLD_ITALIC = 30,
	PANGO_SCRIPT_ORIYA = 31,
	PANGO_SCRIPT_RUNIC = 32,
	PANGO_SCRIPT_SINHALA = 33,
	PANGO_SCRIPT_SYRIAC = 34,
	PANGO_SCRIPT_TAMIL = 35,
	PANGO_SCRIPT_TELUGU = 36,
	PANGO_SCRIPT_THAANA = 37,
	PANGO_SCRIPT_THAI = 38,
	PANGO_SCRIPT_TIBETAN = 39,
	PANGO_SCRIPT_CANADIAN_ABORIGINAL = 40,
	PANGO_SCRIPT_YI = 41,
	PANGO_SCRIPT_TAGALOG = 42,
	PANGO_SCRIPT_HANUNOO = 43,
	PANGO_SCRIPT_BUHID = 44,
	PANGO_SCRIPT_TAGBANWA = 45,
	PANGO_SCRIPT_BRAILLE = 46,
	PANGO_SCRIPT_CYPRIOT = 47,
	PANGO_SCRIPT_LIMBU = 48,
	PANGO_SCRIPT_OSMANYA = 49,
	PANGO_SCRIPT_SHAVIAN = 50,
	PANGO_SCRIPT_LINEAR_B = 51,
	PANGO_SCRIPT_TAI_LE = 52,
	PANGO_SCRIPT_UGARITIC = 53
    } PangoScript;

    typedef struct _PangoFont PangoFont;

    typedef struct _PangoContext PangoContext;

    typedef struct _PangoFontDescription PangoFontDescription;

    typedef enum {
	PANGO_ATTR_INVALID = 0,
	PANGO_ATTR_LANGUAGE = 1,
	PANGO_ATTR_FAMILY = 2,
	PANGO_ATTR_STYLE = 3,
	PANGO_ATTR_WEIGHT = 4,
	PANGO_ATTR_VARIANT = 5,
	PANGO_ATTR_STRETCH = 6,
	PANGO_ATTR_SIZE = 7,
	PANGO_ATTR_FONT_DESC = 8,
	PANGO_ATTR_FOREGROUND = 9,
	PANGO_ATTR_BACKGROUND = 10,
	PANGO_ATTR_UNDERLINE = 11,
	PANGO_ATTR_STRIKETHROUGH = 12,
	PANGO_ATTR_RISE = 13,
	PANGO_ATTR_SHAPE = 14,
	PANGO_ATTR_SCALE = 15,
	PANGO_ATTR_FALLBACK = 16,
	PANGO_ATTR_LETTER_SPACING = 17,
	PANGO_ATTR_UNDERLINE_COLOR = 18,
	PANGO_ATTR_STRIKETHROUGH_COLOR = 19,
	PANGO_ATTR_ABSOLUTE_SIZE = 20
    } PangoAttrType;

    typedef struct _PangoAttribute PangoAttribute;

    typedef struct _PangoAttrClass PangoAttrClass;

    typedef struct _PangoLanguage PangoLanguage;

    typedef struct _PangoLogAttr PangoLogAttr;

    typedef struct _PangoColor PangoColor;

    typedef struct _PangoMatrix PangoMatrix;

    typedef struct _PangoEngineShape PangoEngineShape;

    typedef struct _PangoEngineLang PangoEngineLang;

    typedef struct _PangoAnalysis PangoAnalysis;

    typedef struct _PangoItem PangoItem;

    typedef guint32 PangoGlyph;

    typedef gint32 PangoGlyphUnit;

    typedef struct _PangoGlyphGeometry PangoGlyphGeometry;

    typedef struct _PangoGlyphVisAttr PangoGlyphVisAttr;

    typedef struct _PangoGlyphInfo PangoGlyphInfo;

    typedef struct _PangoGlyphString PangoGlyphString;

    typedef struct _PangoGlyphItem PangoGlyphItem;

    typedef PangoGlyphItem PangoLayoutRun;

    typedef struct _PangoLayoutIter PangoLayoutIter;

    typedef enum {
	PANGO_UNDERLINE_NONE = 0,
	PANGO_UNDERLINE_SINGLE = 1,
	PANGO_UNDERLINE_DOUBLE = 2,
	PANGO_UNDERLINE_LOW = 3,
	PANGO_UNDERLINE_ERROR = 4
    } PangoUnderline;

    typedef struct _PangoRendererPrivate PangoRendererPrivate;

    typedef struct _PangoRenderer PangoRenderer;

    typedef enum {
	PANGO_RENDER_PART_FOREGROUND = 0,
	PANGO_RENDER_PART_BACKGROUND = 1,
	PANGO_RENDER_PART_UNDERLINE = 2,
	PANGO_RENDER_PART_STRIKETHROUGH = 3
    } PangoRenderPart;

    typedef struct _PangoAttrList PangoAttrList;

    typedef struct _PangoLayoutLine PangoLayoutLine;

    typedef enum {
	PANGO_STRETCH_ULTRA_CONDENSED = 0,
	PANGO_STRETCH_EXTRA_CONDENSED = 1,
	PANGO_STRETCH_CONDENSED = 2,
	PANGO_STRETCH_SEMI_CONDENSED = 3,
	PANGO_STRETCH_NORMAL = 4,
	PANGO_STRETCH_SEMI_EXPANDED = 5,
	PANGO_STRETCH_EXPANDED = 6,
	PANGO_STRETCH_EXTRA_EXPANDED = 7,
	PANGO_STRETCH_ULTRA_EXPANDED = 8
    } PangoStretch;

    typedef struct _PangoRectangle PangoRectangle;

    typedef struct _PangoFontFamily PangoFontFamily;

    typedef struct _PangoFontMetrics PangoFontMetrics;

    typedef struct _PangoTabArray PangoTabArray;

    typedef enum {
	PANGO_TAB_LEFT = 0
    } PangoTabAlign;

    typedef enum {
	PANGO_ALIGN_LEFT = 0,
	PANGO_ALIGN_CENTER = 1,
	PANGO_ALIGN_RIGHT = 2
    } PangoAlignment;

    typedef struct _PangoAttrIterator PangoAttrIterator;

    typedef enum {
	PANGO_FONT_MASK_FAMILY = 1,
	PANGO_FONT_MASK_STYLE = 2,
	PANGO_FONT_MASK_VARIANT = 4,
	PANGO_FONT_MASK_WEIGHT = 8,
	PANGO_FONT_MASK_STRETCH = 16,
	PANGO_FONT_MASK_SIZE = 32
    } PangoFontMask;

    typedef enum {
	PANGO_DIRECTION_LTR = 0,
	PANGO_DIRECTION_RTL = 1,
	PANGO_DIRECTION_TTB_LTR = 2,
	PANGO_DIRECTION_TTB_RTL = 3,
	PANGO_DIRECTION_WEAK_LTR = 4,
	PANGO_DIRECTION_WEAK_RTL = 5,
	PANGO_DIRECTION_NEUTRAL = 6
    } PangoDirection;

    typedef enum {
	PANGO_ELLIPSIZE_NONE = 0,
	PANGO_ELLIPSIZE_START = 1,
	PANGO_ELLIPSIZE_MIDDLE = 2,
	PANGO_ELLIPSIZE_END = 3
    } PangoEllipsizeMode;

    typedef struct _PangoCoverage PangoCoverage;

    typedef enum {
	PANGO_STYLE_NORMAL = 0,
	PANGO_STYLE_OBLIQUE = 1,
	PANGO_STYLE_ITALIC = 2
    } PangoStyle;

    typedef enum {
	PANGO_COVERAGE_NONE = 0,
	PANGO_COVERAGE_FALLBACK = 1,
	PANGO_COVERAGE_APPROXIMATE = 2,
	PANGO_COVERAGE_EXACT = 3
    } PangoCoverageLevel;

    typedef struct _PangoFontMap PangoFontMap;

    typedef gboolean(*PangoAttrFilterFunc) (PangoAttribute *, gpointer);

    typedef struct _PangoFontset PangoFontset;

    typedef enum {
	PANGO_WEIGHT_ULTRALIGHT = 200,
	PANGO_WEIGHT_LIGHT = 300,
	PANGO_WEIGHT_NORMAL = 400,
	PANGO_WEIGHT_SEMIBOLD = 600,
	PANGO_WEIGHT_BOLD = 700,
	PANGO_WEIGHT_ULTRABOLD = 800,
	PANGO_WEIGHT_HEAVY = 900
    } PangoWeight;

    typedef gboolean(*PangoFontsetForeachFunc) (PangoFontset *,
						PangoFont *, gpointer);

    typedef enum {
	PANGO_VARIANT_NORMAL = 0,
	PANGO_VARIANT_SMALL_CAPS = 1
    } PangoVariant;

    typedef gpointer(*PangoAttrDataCopyFunc) (gconstpointer);

    typedef struct _PangoAttrShape PangoAttrShape;

    typedef struct _PangoContextClass PangoContextClass;

    typedef struct _PangoAttrString PangoAttrString;

    typedef struct _PangoAttrColor PangoAttrColor;

    typedef struct _PangoAttrFontDesc PangoAttrFontDesc;

    typedef struct _PangoAttrFloat PangoAttrFloat;

    typedef struct _PangoRendererClass PangoRendererClass;

    typedef struct _PangoAttrLanguage PangoAttrLanguage;

    typedef struct _PangoAttrInt PangoAttrInt;

    typedef struct _PangoAttrSize PangoAttrSize;

    typedef struct _PangoLayoutClass PangoLayoutClass;

    struct _PangoAttribute {
	const PangoAttrClass *klass;
	guint start_index;
	guint end_index;
    };

    struct _PangoAttrClass {
	PangoAttrType type;
	PangoAttribute *(*copy) (const PangoAttribute *);
	void (*destroy) (PangoAttribute *);
	 gboolean(*equal) (const PangoAttribute *, const PangoAttribute *);
    };

    struct _PangoLogAttr {
	guint is_line_break:1;
	guint is_mandatory_break:1;
	guint is_char_break:1;
	guint is_white:1;
	guint is_cursor_position:1;
	guint is_word_start:1;
	guint is_word_end:1;
	guint is_sentence_boundary:1;
	guint is_sentence_start:1;
	guint is_sentence_end:1;
	guint backspace_deletes_character:1;
    };

    struct _PangoColor {
	guint16 red;
	guint16 green;
	guint16 blue;
    };

    struct _PangoMatrix {
	double xx;
	double xy;
	double yx;
	double yy;
	double x0;
	double y0;
    };

    struct _PangoAnalysis {
	PangoEngineShape *shape_engine;
	PangoEngineLang *lang_engine;
	PangoFont *font;
	guint8 level;
	PangoLanguage *language;
	GSList *extra_attrs;
    };

    struct _PangoItem {
	gint offset;
	gint length;
	gint num_chars;
	PangoAnalysis analysis;
    };

    struct _PangoGlyphGeometry {
	PangoGlyphUnit width;
	PangoGlyphUnit x_offset;
	PangoGlyphUnit y_offset;
    };

    struct _PangoGlyphVisAttr {
	guint is_cluster_start:1;
    };

    struct _PangoGlyphInfo {
	PangoGlyph glyph;
	PangoGlyphGeometry geometry;
	PangoGlyphVisAttr attr;
    };

    struct _PangoGlyphString {
	gint num_glyphs;
	PangoGlyphInfo *glyphs;
	gint *log_clusters;
	gint space;
    };

    struct _PangoGlyphItem {
	PangoItem *item;
	PangoGlyphString *glyphs;
    };

    struct _PangoRenderer {
	GObject parent_instance;
	PangoUnderline underline;
	gboolean strikethrough;
	int active_count;
	PangoMatrix *matrix;
	PangoRendererPrivate *priv;
    };

    struct _PangoLayoutLine {
	PangoLayout *layout;
	gint start_index;
	gint length;
	GSList *runs;
	guint is_paragraph_start:1;
	guint resolved_dir:3;
    };

    struct _PangoRectangle {
	int x;
	int y;
	int width;
	int height;
    };

    struct _PangoAttrShape {
	PangoAttribute attr;
	PangoRectangle ink_rect;
	PangoRectangle logical_rect;
	gpointer data;
	PangoAttrDataCopyFunc copy_func;
	GDestroyNotify destroy_func;
    };

    struct _PangoAttrString {
	PangoAttribute attr;
	char *value;
    };

    struct _PangoAttrColor {
	PangoAttribute attr;
	PangoColor color;
    };

    struct _PangoAttrFontDesc {
	PangoAttribute attr;
	PangoFontDescription *desc;
    };

    struct _PangoAttrFloat {
	PangoAttribute attr;
	double value;
    };

    struct _PangoRendererClass {
	GObjectClass parent_class;
	void (*draw_glyphs) (PangoRenderer *, PangoFont *,
			     PangoGlyphString *, int, int);
	void (*draw_rectangle) (PangoRenderer *, PangoRenderPart, int, int,
				int, int);
	void (*draw_error_underline) (PangoRenderer *, int, int, int, int);
	void (*draw_shape) (PangoRenderer *, PangoAttrShape *, int, int);
	void (*draw_trapezoid) (PangoRenderer *, PangoRenderPart, double,
				double, double, double, double, double);
	void (*draw_glyph) (PangoRenderer *, PangoFont *, PangoGlyph,
			    double, double);
	void (*part_changed) (PangoRenderer *, PangoRenderPart);
	void (*begin) (PangoRenderer *);
	void (*end) (PangoRenderer *);
	void (*prepare_run) (PangoRenderer *, PangoLayoutRun *);
	void (*_pango_reserved1) (void);
	void (*_pango_reserved2) (void);
	void (*_pango_reserved3) (void);
	void (*_pango_reserved4) (void);
    };

    struct _PangoAttrLanguage {
	PangoAttribute attr;
	PangoLanguage *value;
    };

    struct _PangoAttrInt {
	PangoAttribute attr;
	int value;
    };

    struct _PangoAttrSize {
	PangoAttribute attr;
	int size;
	guint absolute:1;
    };


/* Function prototypes */

    extern GType pango_alignment_get_type(void);
    extern PangoAttribute *pango_attr_background_new(guint16 red,
						     guint16 green,
						     guint16 blue);
    extern PangoAttribute *pango_attr_fallback_new(gboolean
						   enable_fallback);
    extern PangoAttribute *pango_attr_family_new(const char *family);
    extern PangoAttribute *pango_attr_font_desc_new(const
						    PangoFontDescription *
						    desc);
    extern PangoAttribute *pango_attr_foreground_new(guint16 red,
						     guint16 green,
						     guint16 blue);
    extern PangoAttrIterator *pango_attr_iterator_copy(PangoAttrIterator *
						       iterator);
    extern void pango_attr_iterator_destroy(PangoAttrIterator * iterator);
    extern PangoAttribute *pango_attr_iterator_get(PangoAttrIterator *
						   iterator,
						   PangoAttrType type);
    extern GSList *pango_attr_iterator_get_attrs(PangoAttrIterator *
						 iterator);
    extern void pango_attr_iterator_get_font(PangoAttrIterator * iterator,
					     PangoFontDescription * desc,
					     PangoLanguage * *language,
					     GSList * *extra_attrs);
    extern gboolean pango_attr_iterator_next(PangoAttrIterator * iterator);
    extern void pango_attr_iterator_range(PangoAttrIterator * iterator,
					  gint * start, gint * end);
    extern PangoAttribute *pango_attr_language_new(PangoLanguage *
						   language);
    extern PangoAttribute *pango_attr_letter_spacing_new(int
							 letter_spacing);
    extern void pango_attr_list_change(PangoAttrList * list,
				       PangoAttribute * attr);
    extern PangoAttrList *pango_attr_list_copy(PangoAttrList * list);
    extern PangoAttrList *pango_attr_list_filter(PangoAttrList * list,
						 PangoAttrFilterFunc func,
						 gpointer data);
    extern PangoAttrIterator *pango_attr_list_get_iterator(PangoAttrList *
							   list);
    extern GType pango_attr_list_get_type(void);
    extern void pango_attr_list_insert(PangoAttrList * list,
				       PangoAttribute * attr);
    extern void pango_attr_list_insert_before(PangoAttrList * list,
					      PangoAttribute * attr);
    extern PangoAttrList *pango_attr_list_new(void);
    extern PangoAttrList *pango_attr_list_ref(PangoAttrList * list);
    extern void pango_attr_list_splice(PangoAttrList * list,
				       PangoAttrList * other, gint pos,
				       gint len);
    extern void pango_attr_list_unref(PangoAttrList * list);
    extern PangoAttribute *pango_attr_rise_new(int rise);
    extern PangoAttribute *pango_attr_scale_new(double scale_factor);
    extern PangoAttribute *pango_attr_shape_new(const PangoRectangle *
						ink_rect,
						const PangoRectangle *
						logical_rect);
    extern PangoAttribute *pango_attr_shape_new_with_data(const
							  PangoRectangle *
							  ink_rect,
							  const
							  PangoRectangle *
							  logical_rect,
							  gpointer data,
							  PangoAttrDataCopyFunc
							  copy_func,
							  GDestroyNotify
							  destroy_func);
    extern PangoAttribute *pango_attr_size_new(int size);
    extern PangoAttribute *pango_attr_size_new_absolute(int size);
    extern PangoAttribute *pango_attr_stretch_new(PangoStretch stretch);
    extern PangoAttribute *pango_attr_strikethrough_color_new(guint16 red,
							      guint16
							      green,
							      guint16
							      blue);
    extern PangoAttribute *pango_attr_strikethrough_new(gboolean
							strikethrough);
    extern PangoAttribute *pango_attr_style_new(PangoStyle style);
    extern GType pango_attr_type_get_type(void);
    extern PangoAttrType pango_attr_type_register(const gchar * name);
    extern PangoAttribute *pango_attr_underline_color_new(guint16 red,
							  guint16 green,
							  guint16 blue);
    extern PangoAttribute *pango_attr_underline_new(PangoUnderline
						    underline);
    extern PangoAttribute *pango_attr_variant_new(PangoVariant variant);
    extern PangoAttribute *pango_attr_weight_new(PangoWeight weight);
    extern PangoAttribute *pango_attribute_copy(const PangoAttribute *
						attr);
    extern void pango_attribute_destroy(PangoAttribute * attr);
    extern gboolean pango_attribute_equal(const PangoAttribute * attr1,
					  const PangoAttribute * attr2);
    extern void pango_break(const gchar * text, gint length,
			    PangoAnalysis * analysis, PangoLogAttr * attrs,
			    int attrs_len);
    extern PangoColor *pango_color_copy(const PangoColor * src);
    extern void pango_color_free(PangoColor * color);
    extern GType pango_color_get_type(void);
    extern gboolean pango_color_parse(PangoColor * color,
				      const char *spec);
    extern PangoDirection pango_context_get_base_dir(PangoContext *
						     context);
    extern PangoFontDescription
	*pango_context_get_font_description(PangoContext * context);
    extern PangoFontMap *pango_context_get_font_map(PangoContext *
						    context);
    extern PangoLanguage *pango_context_get_language(PangoContext *
						     context);
    extern const PangoMatrix *pango_context_get_matrix(PangoContext *
						       context);
    extern PangoFontMetrics *pango_context_get_metrics(PangoContext *
						       context,
						       const
						       PangoFontDescription
						       * desc,
						       PangoLanguage *
						       language);
    extern GType pango_context_get_type(void);
    extern void pango_context_list_families(PangoContext * context,
					    PangoFontFamily * **families,
					    int *n_families);
    extern PangoFont *pango_context_load_font(PangoContext * context,
					      const PangoFontDescription *
					      desc);
    extern PangoFontset *pango_context_load_fontset(PangoContext * context,
						    const
						    PangoFontDescription *
						    desc,
						    PangoLanguage *
						    language);
    extern void pango_context_set_base_dir(PangoContext * context,
					   PangoDirection direction);
    extern void pango_context_set_font_description(PangoContext * context,
						   const
						   PangoFontDescription *
						   desc);
    extern void pango_context_set_language(PangoContext * context,
					   PangoLanguage * language);
    extern void pango_context_set_matrix(PangoContext * context,
					 const PangoMatrix * matrix);
    extern PangoCoverage *pango_coverage_from_bytes(guchar * bytes,
						    int n_bytes);
    extern PangoCoverageLevel pango_coverage_get(PangoCoverage * coverage,
						 int index_);
    extern GType pango_coverage_level_get_type(void);
    extern void pango_coverage_max(PangoCoverage * coverage,
				   PangoCoverage * other);
    extern PangoCoverage *pango_coverage_new(void);
    extern PangoCoverage *pango_coverage_ref(PangoCoverage * coverage);
    extern void pango_coverage_set(PangoCoverage * coverage, int index_,
				   PangoCoverageLevel level);
    extern void pango_coverage_to_bytes(PangoCoverage * coverage,
					guchar * *bytes, int *n_bytes);
    extern void pango_coverage_unref(PangoCoverage * coverage);
    extern GType pango_direction_get_type(void);
    extern GType pango_ellipsize_mode_get_type(void);
    extern PangoDirection pango_find_base_dir(const gchar * text,
					      gint length);
    extern void pango_find_paragraph_boundary(const gchar * text,
					      gint length,
					      gint *
					      paragraph_delimiter_index,
					      gint * next_paragraph_start);
    extern PangoFontDescription *pango_font_describe(PangoFont * font);
    extern gboolean pango_font_description_better_match(const
							PangoFontDescription
							* desc,
							const
							PangoFontDescription
							* old_match,
							const
							PangoFontDescription
							* new_match);
    extern PangoFontDescription *pango_font_description_copy(const
							     PangoFontDescription
							     * desc);
    extern PangoFontDescription *pango_font_description_copy_static(const
								    PangoFontDescription
								    *
								    desc);
    extern gboolean pango_font_description_equal(const PangoFontDescription
						 * desc1,
						 const PangoFontDescription
						 * desc2);
    extern void pango_font_description_free(PangoFontDescription * desc);
    extern PangoFontDescription *pango_font_description_from_string(const
								    char
								    *str);
    extern const char *pango_font_description_get_family(const
							 PangoFontDescription
							 * desc);
    extern PangoFontMask pango_font_description_get_set_fields(const
							       PangoFontDescription
							       * desc);
    extern gint pango_font_description_get_size(const PangoFontDescription
						* desc);
    extern gboolean pango_font_description_get_size_is_absolute(const
								PangoFontDescription
								* desc);
    extern PangoStretch pango_font_description_get_stretch(const
							   PangoFontDescription
							   * desc);
    extern PangoStyle pango_font_description_get_style(const
						       PangoFontDescription
						       * desc);
    extern GType pango_font_description_get_type(void);
    extern PangoVariant pango_font_description_get_variant(const
							   PangoFontDescription
							   * desc);
    extern PangoWeight pango_font_description_get_weight(const
							 PangoFontDescription
							 * desc);
    extern guint pango_font_description_hash(const PangoFontDescription *
					     desc);
    extern void pango_font_description_merge(PangoFontDescription * desc,
					     const PangoFontDescription *
					     desc_to_merge,
					     gboolean replace_existing);
    extern void pango_font_description_merge_static(PangoFontDescription *
						    desc,
						    const
						    PangoFontDescription *
						    desc_to_merge,
						    gboolean
						    replace_existing);
    extern PangoFontDescription *pango_font_description_new(void);
    extern void
	pango_font_description_set_absolute_size(PangoFontDescription *
						 desc, double size);
    extern void pango_font_description_set_family(PangoFontDescription *
						  desc,
						  const char *family);
    extern void
	pango_font_description_set_family_static(PangoFontDescription *
						 desc, const char *family);
    extern void pango_font_description_set_size(PangoFontDescription *
						desc, gint size);
    extern void pango_font_description_set_stretch(PangoFontDescription *
						   desc,
						   PangoStretch stretch);
    extern void pango_font_description_set_style(PangoFontDescription *
						 desc, PangoStyle style);
    extern void pango_font_description_set_variant(PangoFontDescription *
						   desc,
						   PangoVariant variant);
    extern void pango_font_description_set_weight(PangoFontDescription *
						  desc,
						  PangoWeight weight);
    extern char *pango_font_description_to_filename(const
						    PangoFontDescription *
						    desc);
    extern char *pango_font_description_to_string(const
						  PangoFontDescription *
						  desc);
    extern void pango_font_description_unset_fields(PangoFontDescription *
						    desc,
						    PangoFontMask
						    to_unset);
    extern void pango_font_descriptions_free(PangoFontDescription * *descs,
					     int n_descs);
    extern PangoFontDescription *pango_font_face_describe(PangoFontFace *
							  face);
    extern const char *pango_font_face_get_face_name(PangoFontFace * face);
    extern GType pango_font_face_get_type(void);
    extern void pango_font_face_list_sizes(PangoFontFace * face,
					   int **sizes, int *n_sizes);
    extern const char *pango_font_family_get_name(PangoFontFamily *
						  family);
    extern GType pango_font_family_get_type(void);
    extern gboolean pango_font_family_is_monospace(PangoFontFamily *
						   family);
    extern void pango_font_family_list_faces(PangoFontFamily * family,
					     PangoFontFace * **faces,
					     int *n_faces);
    extern PangoEngineShape *pango_font_find_shaper(PangoFont * font,
						    PangoLanguage *
						    language, guint32 ch);
    extern PangoCoverage *pango_font_get_coverage(PangoFont * font,
						  PangoLanguage *
						  language);
    extern void pango_font_get_glyph_extents(PangoFont * font,
					     PangoGlyph glyph,
					     PangoRectangle * ink_rect,
					     PangoRectangle *
					     logical_rect);
    extern PangoFontMetrics *pango_font_get_metrics(PangoFont * font,
						    PangoLanguage *
						    language);
    extern GType pango_font_get_type(void);
    extern GType pango_font_map_get_type(void);
    extern void pango_font_map_list_families(PangoFontMap * fontmap,
					     PangoFontFamily * **families,
					     int *n_families);
    extern PangoFont *pango_font_map_load_font(PangoFontMap * fontmap,
					       PangoContext * context,
					       const PangoFontDescription *
					       desc);
    extern PangoFontset *pango_font_map_load_fontset(PangoFontMap *
						     fontmap,
						     PangoContext *
						     context,
						     const
						     PangoFontDescription *
						     desc,
						     PangoLanguage *
						     language);
    extern GType pango_font_mask_get_type(void);
    extern int
	pango_font_metrics_get_approximate_char_width(PangoFontMetrics *
						      metrics);
    extern int
	pango_font_metrics_get_approximate_digit_width(PangoFontMetrics *
						       metrics);
    extern int pango_font_metrics_get_ascent(PangoFontMetrics * metrics);
    extern int pango_font_metrics_get_descent(PangoFontMetrics * metrics);
    extern int
	pango_font_metrics_get_strikethrough_position(PangoFontMetrics *
						      metrics);
    extern int
	pango_font_metrics_get_strikethrough_thickness(PangoFontMetrics *
						       metrics);
    extern GType pango_font_metrics_get_type(void);
    extern int pango_font_metrics_get_underline_position(PangoFontMetrics *
							 metrics);
    extern int pango_font_metrics_get_underline_thickness(PangoFontMetrics
							  * metrics);
    extern PangoFontMetrics *pango_font_metrics_ref(PangoFontMetrics *
						    metrics);
    extern void pango_font_metrics_unref(PangoFontMetrics * metrics);
    extern void pango_fontset_foreach(PangoFontset *,
				      PangoFontsetForeachFunc, gpointer);
    extern PangoFont *pango_fontset_get_font(PangoFontset *, guint);
    extern PangoFontMetrics *pango_fontset_get_metrics(PangoFontset *);
    extern GType pango_fontset_get_type(void);
    extern void pango_get_log_attrs(const char *text, int length,
				    int level, PangoLanguage * language,
				    PangoLogAttr * log_attrs,
				    int attrs_len);
    extern GSList *pango_glyph_item_apply_attrs(PangoGlyphItem *
						glyph_item,
						const char *text,
						PangoAttrList * list);
    extern void pango_glyph_item_free(PangoGlyphItem * glyph_item);
    extern void pango_glyph_item_letter_space(PangoGlyphItem * glyph_item,
					      const char *text,
					      PangoLogAttr * log_attrs,
					      int letter_spacing);
    extern PangoGlyphItem *pango_glyph_item_split(PangoGlyphItem * orig,
						  const char *text,
						  int split_index);
    extern PangoGlyphString *pango_glyph_string_copy(PangoGlyphString *
						     string);
    extern void pango_glyph_string_extents(PangoGlyphString * glyphs,
					   PangoFont * font,
					   PangoRectangle * ink_rect,
					   PangoRectangle * logical_rect);
    extern void pango_glyph_string_extents_range(PangoGlyphString * glyphs,
						 int start, int end,
						 PangoFont * font,
						 PangoRectangle * ink_rect,
						 PangoRectangle *
						 logical_rect);
    extern void pango_glyph_string_free(PangoGlyphString * string);
    extern void pango_glyph_string_get_logical_widths(PangoGlyphString *
						      glyphs,
						      const char *text,
						      int length,
						      int embedding_level,
						      int *logical_widths);
    extern GType pango_glyph_string_get_type(void);
    extern void pango_glyph_string_index_to_x(PangoGlyphString * glyphs,
					      char *text, int length,
					      PangoAnalysis * analysis,
					      int index_,
					      gboolean trailing,
					      int *x_pos);
    extern PangoGlyphString *pango_glyph_string_new(void);
    extern void pango_glyph_string_set_size(PangoGlyphString * string,
					    gint new_len);
    extern void pango_glyph_string_x_to_index(PangoGlyphString * glyphs,
					      char *text, int length,
					      PangoAnalysis * analysis,
					      int x_pos, int *index_,
					      gboolean * trailing);
    extern PangoItem *pango_item_copy(PangoItem * item);
    extern void pango_item_free(PangoItem * item);
    extern PangoItem *pango_item_new(void);
    extern PangoItem *pango_item_split(PangoItem * orig, int split_index,
				       int split_offset);
    extern GList *pango_itemize(PangoContext * context, const char *text,
				int start_index, int length,
				PangoAttrList * attrs,
				PangoAttrIterator * cached_iter);
    extern GList *pango_itemize_with_base_dir(PangoContext * context,
					      PangoDirection base_dir,
					      const char *text,
					      int start_index, int length,
					      PangoAttrList * attrs,
					      PangoAttrIterator *
					      cached_iter);
    extern PangoLanguage *pango_language_from_string(const char *language);
    extern GType pango_language_get_type(void);
    extern gboolean pango_language_includes_script(PangoLanguage *
						   language,
						   PangoScript script);
    extern gboolean pango_language_matches(PangoLanguage * language,
					   const char *range_list);
    extern void pango_layout_context_changed(PangoLayout * layout);
    extern PangoLayout *pango_layout_copy(PangoLayout * src);
    extern PangoAlignment pango_layout_get_alignment(PangoLayout * layout);
    extern PangoAttrList *pango_layout_get_attributes(PangoLayout *
						      layout);
    extern gboolean pango_layout_get_auto_dir(PangoLayout * layout);
    extern PangoContext *pango_layout_get_context(PangoLayout * layout);
    extern void pango_layout_get_cursor_pos(PangoLayout * layout,
					    int index_,
					    PangoRectangle * strong_pos,
					    PangoRectangle * weak_pos);
    extern PangoEllipsizeMode pango_layout_get_ellipsize(PangoLayout *
							 layout);
    extern void pango_layout_get_extents(PangoLayout * layout,
					 PangoRectangle * ink_rect,
					 PangoRectangle * logical_rect);
    extern const PangoFontDescription
	*pango_layout_get_font_description(PangoLayout * layout);
    extern int pango_layout_get_indent(PangoLayout * layout);
    extern PangoLayoutIter *pango_layout_get_iter(PangoLayout * layout);
    extern gboolean pango_layout_get_justify(PangoLayout * layout);
    extern PangoLayoutLine *pango_layout_get_line(PangoLayout * layout,
						  int line);
    extern int pango_layout_get_line_count(PangoLayout * layout);
    extern GSList *pango_layout_get_lines(PangoLayout * layout);
    extern void pango_layout_get_log_attrs(PangoLayout * layout,
					   PangoLogAttr * *attrs,
					   gint * n_attrs);
    extern void pango_layout_get_pixel_extents(PangoLayout * layout,
					       PangoRectangle * ink_rect,
					       PangoRectangle *
					       logical_rect);
    extern void pango_layout_get_pixel_size(PangoLayout * layout,
					    int *width, int *height);
    extern gboolean pango_layout_get_single_paragraph_mode(PangoLayout *
							   layout);
    extern void pango_layout_get_size(PangoLayout * layout, int *width,
				      int *height);
    extern int pango_layout_get_spacing(PangoLayout * layout);
    extern PangoTabArray *pango_layout_get_tabs(PangoLayout * layout);
    extern const char *pango_layout_get_text(PangoLayout * layout);
    extern GType pango_layout_get_type(void);
    extern int pango_layout_get_width(PangoLayout * layout);
    extern PangoWrapMode pango_layout_get_wrap(PangoLayout * layout);
    extern void pango_layout_index_to_pos(PangoLayout * layout, int index_,
					  PangoRectangle * pos);
    extern gboolean pango_layout_iter_at_last_line(PangoLayoutIter * iter);
    extern void pango_layout_iter_free(PangoLayoutIter * iter);
    extern int pango_layout_iter_get_baseline(PangoLayoutIter * iter);
    extern void pango_layout_iter_get_char_extents(PangoLayoutIter * iter,
						   PangoRectangle *
						   logical_rect);
    extern void pango_layout_iter_get_cluster_extents(PangoLayoutIter *
						      iter,
						      PangoRectangle *
						      ink_rect,
						      PangoRectangle *
						      logical_rect);
    extern int pango_layout_iter_get_index(PangoLayoutIter * iter);
    extern void pango_layout_iter_get_layout_extents(PangoLayoutIter *
						     iter,
						     PangoRectangle *
						     ink_rect,
						     PangoRectangle *
						     logical_rect);
    extern PangoLayoutLine *pango_layout_iter_get_line(PangoLayoutIter *
						       iter);
    extern void pango_layout_iter_get_line_extents(PangoLayoutIter * iter,
						   PangoRectangle *
						   ink_rect,
						   PangoRectangle *
						   logical_rect);
    extern void pango_layout_iter_get_line_yrange(PangoLayoutIter * iter,
						  int *y0_, int *y1_);
    extern PangoLayoutRun *pango_layout_iter_get_run(PangoLayoutIter *
						     iter);
    extern void pango_layout_iter_get_run_extents(PangoLayoutIter * iter,
						  PangoRectangle *
						  ink_rect,
						  PangoRectangle *
						  logical_rect);
    extern GType pango_layout_iter_get_type(void);
    extern gboolean pango_layout_iter_next_char(PangoLayoutIter * iter);
    extern gboolean pango_layout_iter_next_cluster(PangoLayoutIter * iter);
    extern gboolean pango_layout_iter_next_line(PangoLayoutIter * iter);
    extern gboolean pango_layout_iter_next_run(PangoLayoutIter * iter);
    extern void pango_layout_line_get_extents(PangoLayoutLine * line,
					      PangoRectangle * ink_rect,
					      PangoRectangle *
					      logical_rect);
    extern void pango_layout_line_get_pixel_extents(PangoLayoutLine *
						    layout_line,
						    PangoRectangle *
						    ink_rect,
						    PangoRectangle *
						    logical_rect);
    extern void pango_layout_line_get_x_ranges(PangoLayoutLine * line,
					       int start_index,
					       int end_index, int **ranges,
					       int *n_ranges);
    extern void pango_layout_line_index_to_x(PangoLayoutLine * line,
					     int index_, int trailing,
					     int *x_pos);
    extern PangoLayoutLine *pango_layout_line_ref(PangoLayoutLine * line);
    extern void pango_layout_line_unref(PangoLayoutLine * line);
    extern gboolean pango_layout_line_x_to_index(PangoLayoutLine * line,
						 int x_pos, int *index_,
						 int *trailing);
    extern void pango_layout_move_cursor_visually(PangoLayout * layout,
						  gboolean strong,
						  int old_index,
						  int old_trailing,
						  int direction,
						  int *new_index,
						  int *new_trailing);
    extern PangoLayout *pango_layout_new(PangoContext * context);
    extern void pango_layout_set_alignment(PangoLayout * layout,
					   PangoAlignment alignment);
    extern void pango_layout_set_attributes(PangoLayout * layout,
					    PangoAttrList * attrs);
    extern void pango_layout_set_auto_dir(PangoLayout * layout,
					  gboolean auto_dir);
    extern void pango_layout_set_ellipsize(PangoLayout * layout,
					   PangoEllipsizeMode ellipsize);
    extern void pango_layout_set_font_description(PangoLayout * layout,
						  const
						  PangoFontDescription *
						  desc);
    extern void pango_layout_set_indent(PangoLayout * layout, int indent);
    extern void pango_layout_set_justify(PangoLayout * layout,
					 gboolean justify);
    extern void pango_layout_set_markup(PangoLayout * layout,
					const char *markup, int length);
    extern void pango_layout_set_markup_with_accel(PangoLayout * layout,
						   const char *markup,
						   int length,
						   gunichar accel_marker,
						   gunichar * accel_char);
    extern void pango_layout_set_single_paragraph_mode(PangoLayout *
						       layout,
						       gboolean setting);
    extern void pango_layout_set_spacing(PangoLayout * layout,
					 int spacing);
    extern void pango_layout_set_tabs(PangoLayout * layout,
				      PangoTabArray * tabs);
    extern void pango_layout_set_text(PangoLayout * layout,
				      const char *text, int length);
    extern void pango_layout_set_width(PangoLayout * layout, int width);
    extern void pango_layout_set_wrap(PangoLayout * layout,
				      PangoWrapMode wrap);
    extern gboolean pango_layout_xy_to_index(PangoLayout * layout, int x,
					     int y, int *index_,
					     gint * trailing);
    extern void pango_matrix_concat(PangoMatrix * matrix,
				    const PangoMatrix * new_matrix);
    extern PangoMatrix *pango_matrix_copy(const PangoMatrix * matrix);
    extern void pango_matrix_free(PangoMatrix * matrix);
    extern GType pango_matrix_get_type(void);
    extern void pango_matrix_rotate(PangoMatrix * matrix, double degrees);
    extern void pango_matrix_scale(PangoMatrix * matrix, double scale_x,
				   double scale_y);
    extern void pango_matrix_translate(PangoMatrix * matrix, double tx,
				       double ty);
    extern gboolean pango_parse_markup(const char *markup_text, int length,
				       gunichar accel_marker,
				       PangoAttrList * *attr_list,
				       char **text, gunichar * accel_char,
				       GError * *error);
    extern GType pango_render_part_get_type(void);
    extern void pango_renderer_activate(PangoRenderer * renderer);
    extern void pango_renderer_deactivate(PangoRenderer * renderer);
    extern void pango_renderer_draw_error_underline(PangoRenderer *
						    renderer, int x, int y,
						    int width, int height);
    extern void pango_renderer_draw_glyph(PangoRenderer * renderer,
					  PangoFont * font,
					  PangoGlyph glyph, double x,
					  double y);
    extern void pango_renderer_draw_glyphs(PangoRenderer * renderer,
					   PangoFont * font,
					   PangoGlyphString * glyphs,
					   int x, int y);
    extern void pango_renderer_draw_layout(PangoRenderer * renderer,
					   PangoLayout * layout, int x,
					   int y);
    extern void pango_renderer_draw_layout_line(PangoRenderer * renderer,
						PangoLayoutLine * line,
						int x, int y);
    extern void pango_renderer_draw_rectangle(PangoRenderer * renderer,
					      PangoRenderPart part, int x,
					      int y, int width,
					      int height);
    extern void pango_renderer_draw_trapezoid(PangoRenderer * renderer,
					      PangoRenderPart part,
					      double y1_, double x11,
					      double x21, double y2,
					      double x12, double x22);
    extern PangoColor *pango_renderer_get_color(PangoRenderer * renderer,
						PangoRenderPart part);
    extern const PangoMatrix *pango_renderer_get_matrix(PangoRenderer *
							renderer);
    extern GType pango_renderer_get_type(void);
    extern void pango_renderer_part_changed(PangoRenderer * renderer,
					    PangoRenderPart part);
    extern void pango_renderer_set_color(PangoRenderer * renderer,
					 PangoRenderPart part,
					 const PangoColor * color);
    extern void pango_renderer_set_matrix(PangoRenderer * renderer,
					  const PangoMatrix * matrix);
    extern GList *pango_reorder_items(GList * logical_items);
    extern PangoScript pango_script_for_unichar(gunichar ch);
    extern PangoLanguage *pango_script_get_sample_language(PangoScript
							   script);
    extern GType pango_script_get_type(void);
    extern void pango_script_iter_free(PangoScriptIter * iter);
    extern void pango_script_iter_get_range(PangoScriptIter * iter,
					    const char **start,
					    const char **end,
					    PangoScript * script);
    extern PangoScriptIter *pango_script_iter_new(const char *text,
						  int length);
    extern gboolean pango_script_iter_next(PangoScriptIter * iter);
    extern void pango_shape(const gchar * text, gint length,
			    PangoAnalysis * analysis,
			    PangoGlyphString * glyphs);
    extern GType pango_stretch_get_type(void);
    extern GType pango_style_get_type(void);
    extern GType pango_tab_align_get_type(void);
    extern PangoTabArray *pango_tab_array_copy(PangoTabArray * src);
    extern void pango_tab_array_free(PangoTabArray * tab_array);
    extern gboolean pango_tab_array_get_positions_in_pixels(PangoTabArray *
							    tab_array);
    extern gint pango_tab_array_get_size(PangoTabArray * tab_array);
    extern void pango_tab_array_get_tab(PangoTabArray * tab_array,
					gint tab_index,
					PangoTabAlign * alignment,
					gint * location);
    extern void pango_tab_array_get_tabs(PangoTabArray * tab_array,
					 PangoTabAlign * *alignments,
					 gint * *locations);
    extern GType pango_tab_array_get_type(void);
    extern PangoTabArray *pango_tab_array_new(gint initial_size,
					      gboolean
					      positions_in_pixels);
    extern PangoTabArray *pango_tab_array_new_with_positions(gint size,
							     gboolean
							     positions_in_pixels,
							     PangoTabAlign
							     first_alignment,
							     gint
							     first_position,
							     ...);
    extern void pango_tab_array_resize(PangoTabArray * tab_array,
				       gint new_size);
    extern void pango_tab_array_set_tab(PangoTabArray * tab_array,
					gint tab_index,
					PangoTabAlign alignment,
					gint location);
    extern GType pango_underline_get_type(void);
    extern PangoDirection pango_unichar_direction(gunichar ch);
    extern GType pango_variant_get_type(void);
    extern GType pango_weight_get_type(void);
    extern GType pango_wrap_mode_get_type(void);
#if __LSB_VERSION__ >= 40
    extern PangoFontMap *pango_font_get_font_map(PangoFont * font);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
