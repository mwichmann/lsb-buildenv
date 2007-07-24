#ifndef _QTGUI_QICON_H_
#define _QTGUI_QICON_H_

#include <QtCore/qsize.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qpixmap.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".Class." QIconSet;

    Unknown Type:".Class.";

    enum N5QIcon4ModeE {
	Normal,
	Disabled,
	Active
    };

    enum N5QIcon5StateE {
	On,
	Off
    };

    enum N5QIcon4SizeE {
	Small,
	Automatic,
	Large
    };


    extern Class _ZN5QIconC2Ev(void);
    extern Class _ZN5QIconC1Ev(void);
    extern Class _ZN5QIconC2ERK7QPixmap(void);
    extern Class _ZN5QIconC1ERK7QPixmap(void);
    extern Class _ZN5QIconC2ERKS_(void);
    extern Class _ZN5QIconC1ERKS_(void);
    extern Class _ZN5QIconC2ERK7QString(void);
    extern Class _ZN5QIconC1ERK7QString(void);
    extern Class _ZN5QIconC2EP11QIconEngine(void);
    extern Class _ZN5QIconC1EP11QIconEngine(void);
    extern Class _ZN5QIconD2Ev(void);
    extern Class _ZN5QIconD1Ev(void);
    extern Class _ZN5QIconaSERKS_(void);
    extern Class _ZNK5QIconcv8QVariantEv(void);
    extern Class _ZNK5QIcon6pixmapERK5QSizeNS_4ModeENS_5StateE(void);
    extern Class _ZNK5QIcon10actualSizeERK5QSizeNS_4ModeENS_5StateE(void);
    extern void
	_ZNK5QIcon5paintEP8QPainterRK5QRect6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE
	(void);
    extern bool _ZNK5QIcon6isNullEv(void);
    extern bool _ZNK5QIcon10isDetachedEv(void);
    extern int _ZNK5QIcon12serialNumberEv(void);
    extern void _ZN5QIcon9addPixmapERK7QPixmapNS_4ModeENS_5StateE(void);
    extern void
	_ZN5QIcon7addFileERK7QStringRK5QSizeNS_4ModeENS_5StateE(void);
    extern void _ZN5QIcon13setPixmapSizeENS_4SizeERK5QSize(void);
    extern Class _ZN5QIcon10pixmapSizeENS_4SizeE(void);
    extern Class _ZNK5QIcon6pixmapENS_4SizeENS_4ModeENS_5StateE(void);
    extern Class _ZNK5QIcon6pixmapENS_4SizeEbNS_5StateE(void);
    extern Class _ZNK5QIcon6pixmapEv(void);
#ifdef __cplusplus
}
#endif
#endif
