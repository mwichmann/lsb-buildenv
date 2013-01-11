#if (__LSB_VERSION__ >= 31 )
#ifndef _PANGO_1_0_PANGO_PANGO_UTILS_H_
#define _PANGO_1_0_PANGO_PANGO_UTILS_H_

#include <stdio.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <pango-1.0/pango/pango.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 50
#define PANGO_VERSION_ENCODE(major,minor,micro)	( ((major) * 10000) + ((minor) * 100) + ((micro) * 1))
#define PANGO_VERSION_CHECK(major,minor,micro)	(PANGO_VERSION >= PANGO_VERSION_ENCODE(major,minor,micro))
#define PANGO_VERSION	PANGO_VERSION_ENCODE( PANGO_VERSION_MAJOR, PANGO_VERSION_MINOR, PANGO_VERSION_MICRO)
#endif				/* __LSB_VERSION__ >= 5.0 */




/* Function prototypes */

    extern const char *pango_language_get_sample_string(PangoLanguage *
							language);
    extern guint8 *pango_log2vis_get_embedding_levels(const gchar * text,
						      int length,
						      PangoDirection *
						      pbase_dir);
    extern gboolean pango_parse_stretch(const char *str,
					PangoStretch * stretch,
					gboolean warn);
    extern gboolean pango_parse_style(const char *str, PangoStyle * style,
				      gboolean warn);
    extern gboolean pango_parse_variant(const char *str,
					PangoVariant * variant,
					gboolean warn);
    extern gboolean pango_parse_weight(const char *str,
				       PangoWeight * weight,
				       gboolean warn);
    extern gint pango_read_line(FILE * stream, GString * str);
    extern gboolean pango_scan_int(const char **pos, int *out);
    extern gboolean pango_scan_string(const char **pos, GString * out);
    extern gboolean pango_scan_word(const char **pos, GString * out);
    extern gboolean pango_skip_space(const char **pos);
    extern char **pango_split_file_list(const char *str);
    extern char *pango_trim_string(const char *str);
#if __LSB_VERSION__ >= 40
    extern gboolean pango_is_zero_width(gunichar ch);
#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 50
    extern gboolean pango_parse_enum(GType type, const char *str,
				     int *value, gboolean warn,
				     char **possible_values);
    extern void pango_quantize_line_geometry(int *thickness,
					     int *position);
    extern int pango_version(void);
    extern const char *pango_version_check(int required_major,
					   int required_minor,
					   int required_micro);
    extern const char *pango_version_string(void);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
