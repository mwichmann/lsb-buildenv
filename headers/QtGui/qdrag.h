#ifndef _QTGUI_QDRAG_H_
#define _QTGUI_QDRAG_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qpoint.h>
#include <QtCore/qmimedata.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern struct QMetaObject _ZN5QDrag16staticMetaObjectE;
    extern struct QMetaObject _ZNK5QDrag10metaObjectEv(void);
    extern void _ZN5QDrag11qt_metacastEPKc(void);
    extern int _ZN5QDrag11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN5QDragC2EP7QWidget(void);
    extern Class _ZN5QDragC1EP7QWidget(void);
    extern Class _ZN5QDragD2Ev(void);
    extern Class _ZN5QDragD1Ev(void);
    extern Class _ZN5QDragD0Ev(void);
    extern void _ZN5QDrag11setMimeDataEP9QMimeData(void);
    extern Class _ZNK5QDrag8mimeDataEv(void);
    extern void _ZN5QDrag9setPixmapERK7QPixmap(void);
    extern _ZNK5QDrag6pixmapEv(void);
    extern void _ZN5QDrag10setHotSpotERK6QPoint(void);
    extern Class _ZNK5QDrag7hotSpotEv(void);
    extern _ZNK5QDrag6sourceEv(void);
    extern _ZNK5QDrag6targetEv(void);
    extern enum N2Qt10DropActionE
	_ZN5QDrag5startE6QFlagsIN2Qt10DropActionEE(void);
    extern void _ZN5QDrag13setDragCursorERK7QPixmapN2Qt10DropActionE(void);
    extern void _ZN5QDrag13actionChangedEN2Qt10DropActionE(void);
    extern void _ZN5QDrag13targetChangedEP7QWidget(void);
#ifdef __cplusplus
}
#endif
#endif
