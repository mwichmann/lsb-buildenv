#if (__LSB_VERSION__ >= 31 )
#ifndef _GLIB_2_0_GLIB_GPRINTF_H_
#define _GLIB_2_0_GLIB_GPRINTF_H_

#include <stdio.h>
#include <stdarg.h>
#include <glib-2.0/glib.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern gint g_fprintf(FILE * file, const gchar * format, ...);
    extern gint g_printf(const gchar * format, ...);
    extern gint g_snprintf(gchar * string, gulong n, const gchar * format,
			   ...);
    extern gint g_sprintf(gchar * string, const gchar * format, ...);
    extern gint g_vasprintf(gchar * *string, const gchar * format,
			    va_list args);
    extern gint g_vfprintf(FILE * file, const gchar * format,
			   va_list args);
    extern gint g_vprintf(const gchar * format, va_list args);
    extern gint g_vsnprintf(gchar * string, gulong n, const gchar * format,
			    va_list args);
    extern gint g_vsprintf(gchar * string, const gchar * format,
			   va_list args);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
