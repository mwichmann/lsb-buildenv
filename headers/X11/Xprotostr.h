#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_XPROTOSTR_H_
#define _X11_XPROTOSTR_H_

#include <X11/Xmd.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xSegment xSegment;

    typedef struct _xPoint xPoint;

    typedef struct _xRectangle xRectangle;

    typedef struct _xArc xArc;


    struct _xSegment {
	INT16 x1;
	INT16 y1;
	INT16 x2;
	INT16 y2;
    };


    struct _xPoint {
	INT16 x;
	INT16 y;
    };


    struct _xRectangle {
	INT16 x;
	INT16 y;
	CARD16 width;
	CARD16 height;
    };


    struct _xArc {
	INT16 x;
	INT16 y;
	CARD16 width;
	CARD16 height;
	INT16 angle1;
	INT16 angle2;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
