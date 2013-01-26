#if (__LSB_VERSION__ >= 40 )
#ifndef _CAIRO_CAIRO_FEATURES_H_
#define _CAIRO_CAIRO_FEATURES_H_


#ifdef __cplusplus
extern "C" {
#endif


#define CAIRO_HAS_FT_FONT	1
#define CAIRO_HAS_PDF_SURFACE	1
#define CAIRO_HAS_PNG_FUNCTIONS	1
#define CAIRO_HAS_PS_SURFACE	1
#define CAIRO_HAS_XLIB_SURFACE	1
#define CAIRO_VERSION_MAJOR	1
#if __LSB_VERSION__ < 41
#define CAIRO_VERSION_STRING	"1.0.2"
#define CAIRO_VERSION_MINOR	0
#define CAIRO_HAS_GLITZ_SURFACE	1
#define CAIRO_VERSION_MICRO	2
#endif				/* __LSB_VERSION__ < 4.1 */

#if __LSB_VERSION__ >= 41
#define CAIRO_HAS_SVG_SURFACE	1
#define CAIRO_HAS_XLIB_XRENDER_SURFACE	1
#define CAIRO_VERSION_MICRO	4
#if __LSB_VERSION__ < 50
#define CAIRO_VERSION_STRING	"1.2.4"
#define CAIRO_VERSION_MINOR	2
#endif				/* __LSB_VERSION__ < 5.0 */

#endif				/* __LSB_VERSION__ >= 4.1 */

#if __LSB_VERSION__ >= 50
#define CAIRO_VERSION_MINOR	12
#define CAIRO_VERSION_STRING	CAIRO_VERSION_STRINGIZE( \
        CAIRO_VERSION_MAJOR, \
	CAIRO_VERSION_MINOR, \
	CAIRO_VERSION_MICRO)
#endif				/* __LSB_VERSION__ >= 5.0 */



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
