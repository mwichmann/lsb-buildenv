#if (__LSB_VERSION__ >= 50 )
#ifndef _PANGO_1_0_PANGO_PANGO_BIDI_TYPE_H_
#define _PANGO_1_0_PANGO_PANGO_BIDI_TYPE_H_

#include <glib-2.0/glib.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	PANGO_BIDI_TYPE_L,
	PANGO_BIDI_TYPE_LRE,
	PANGO_BIDI_TYPE_LRO,
	PANGO_BIDI_TYPE_R,
	PANGO_BIDI_TYPE_AL,
	PANGO_BIDI_TYPE_RLE,
	PANGO_BIDI_TYPE_RLO,
	PANGO_BIDI_TYPE_PDF,
	PANGO_BIDI_TYPE_EN,
	PANGO_BIDI_TYPE_ES,
	PANGO_BIDI_TYPE_ET,
	PANGO_BIDI_TYPE_AN,
	PANGO_BIDI_TYPE_CS,
	PANGO_BIDI_TYPE_NSM,
	PANGO_BIDI_TYPE_BN,
	PANGO_BIDI_TYPE_B,
	PANGO_BIDI_TYPE_S,
	PANGO_BIDI_TYPE_WS,
	PANGO_BIDI_TYPE_ON
    } PangoBidiType;


/* Function prototypes */

    extern PangoBidiType pango_bidi_type_for_unichar(gunichar ch);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
