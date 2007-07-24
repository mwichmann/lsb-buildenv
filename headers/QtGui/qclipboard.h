#ifndef _QTGUI_QCLIPBOARD_H_
#define _QTGUI_QCLIPBOARD_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qmimedata.h>
#include <QtGui/qmime.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qimage.h>
#include <QtGui/qpixmap.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N10QClipboard4ModeE {
	Clipboard,
	Selection
    };


    extern struct QMetaObject _ZN10QClipboard16staticMetaObjectE;
    extern struct QMetaObject _ZNK10QClipboard10metaObjectEv(void);
    extern void _ZN10QClipboard11qt_metacastEPKc(void);
    extern int _ZN10QClipboard11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern void _ZN10QClipboard5clearENS_4ModeE(void);
    extern bool _ZNK10QClipboard17supportsSelectionEv(void);
    extern bool _ZNK10QClipboard13ownsSelectionEv(void);
    extern bool _ZNK10QClipboard13ownsClipboardEv(void);
    extern Class _ZNK10QClipboard4textENS_4ModeE(void);
    extern Class _ZNK10QClipboard4textER7QStringNS_4ModeE(void);
    extern void _ZN10QClipboard7setTextERK7QStringNS_4ModeE(void);
    extern Class _ZNK10QClipboard4dataENS_4ModeE(void);
    extern void _ZN10QClipboard7setDataEP11QMimeSourceNS_4ModeE(void);
    extern Class _ZNK10QClipboard8mimeDataENS_4ModeE(void);
    extern void _ZN10QClipboard11setMimeDataEP9QMimeDataNS_4ModeE(void);
    extern Class _ZNK10QClipboard5imageENS_4ModeE(void);
    extern Class _ZNK10QClipboard6pixmapENS_4ModeE(void);
    extern void _ZN10QClipboard8setImageERK6QImageNS_4ModeE(void);
    extern void _ZN10QClipboard9setPixmapERK7QPixmapNS_4ModeE(void);
    extern void _ZN10QClipboard16selectionChangedEv(void);
    extern void _ZN10QClipboard11dataChangedEv(void);
    extern void _ZN10QClipboard13connectNotifyEPKc(void);
    extern bool _ZN10QClipboard5eventEP6QEvent(void);
    extern Class _ZN10QClipboardD2Ev(void);
    extern Class _ZN10QClipboardD1Ev(void);
    extern Class _ZN10QClipboardD0Ev(void);
#ifdef __cplusplus
}
#endif
#endif
