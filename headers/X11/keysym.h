#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_KEYSYM_H_
#define _X11_KEYSYM_H_

#include <X11/keysymdef.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XK_ARABIC
#define XK_ARMENIAN
#define XK_BRAILLE
#define XK_CAUCASUS
#define XK_CURRENCY
#define XK_CYRILLIC
#define XK_GEORGIAN
#define XK_GREEK
#define XK_HEBREW
#define XK_KATAKANA
#define XK_KOREAN
#define XK_LATIN1
#define XK_LATIN2
#define XK_LATIN3
#define XK_LATIN4
#define XK_LATIN8
#define XK_LATIN9
#define XK_MATHEMATICAL
#define XK_THAI
#define XK_VIETNAMESE
#define XK_XKB_KEYS
#if __LSB_VERSION__ >= 50
#define XK_APL
#define XK_MISCELLANY
#define XK_PUBLISHING
#define XK_SPECIAL
#define XK_TECHNICAL
#endif				/* __LSB_VERSION__ >= 5.0 */



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
