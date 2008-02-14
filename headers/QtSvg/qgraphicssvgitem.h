#ifndef _QTSVG_QGRAPHICSSVGITEM_H_
#define _QTSVG_QGRAPHICSSVGITEM_H_

#include <X11/Xlib.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtCore/qrect.h>
#include <QtSvg/qsvgrenderer.h>

#ifdef __cplusplus
extern "C" {
#endif



    extern struct QMetaObject _ZN16QGraphicsSvgItem16staticMetaObjectE;
    extern _ZN16QGraphicsSvgItem11qt_metacallEN11QMetaObject4CallEiPPv(enum
								       _ZN11QMetaObject4CallE,
								       int,
								       void
								       **);
    extern _ZN16QGraphicsSvgItem11qt_metacastEPKc(const char *);
    extern _ZN16QGraphicsSvgItem12setElementIdERK7QString(const QString &);
    extern _ZN16QGraphicsSvgItem17setCachingEnabledEb(bool);
    extern
	_ZN16QGraphicsSvgItem17setSharedRendererEP12QSvgRenderer
	(QSvgRenderer *);
    extern _ZN16QGraphicsSvgItem19setMaximumCacheSizeERK5QSize(const QSize
							       &);
    extern
	_ZN16QGraphicsSvgItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget
	(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
    extern struct QMetaObject *_ZNK16QGraphicsSvgItem10metaObjectEv(void);
    extern QRectF _ZNK16QGraphicsSvgItem12boundingRectEv(void);
    extern _ZNK16QGraphicsSvgItem16isCachingEnabledEv(void);
    extern QSize _ZNK16QGraphicsSvgItem16maximumCacheSizeEv(void);
    extern _ZNK16QGraphicsSvgItem4typeEv(void);
    extern QSvgRenderer *_ZNK16QGraphicsSvgItem8rendererEv(void);
    extern QString _ZNK16QGraphicsSvgItem9elementIdEv(void);
#ifdef __cplusplus
}
#endif
#endif
