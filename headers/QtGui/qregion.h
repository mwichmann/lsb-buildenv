#ifndef _QTGUI_QREGION_H_
#define _QTGUI_QREGION_H_

#include <QtCore/qdatastream.h>
#include <QtCore/qdebug.h>
#include <QtCore/qrect.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N7QRegion10RegionTypeE {
	Rectangle,
	Ellipse
    };

    struct N7QRegion11QRegionDataE;


    extern Class _ZN7QRegionC2Ev(void);
    extern Class _ZN7QRegionC1Ev(void);
    extern Class _ZN7QRegionC2EiiiiNS_10RegionTypeE(void);
    extern Class _ZN7QRegionC1EiiiiNS_10RegionTypeE(void);
    extern Class _ZN7QRegionC2ERK5QRectNS_10RegionTypeE(void);
    extern Class _ZN7QRegionC1ERK5QRectNS_10RegionTypeE(void);
    extern Class _ZN7QRegionC2ERK8QPolygonN2Qt8FillRuleE(void);
    extern Class _ZN7QRegionC1ERK8QPolygonN2Qt8FillRuleE(void);
    extern Class _ZN7QRegionC2ERK8QPolygonb(void);
    extern Class _ZN7QRegionC1ERK8QPolygonb(void);
    extern Class _ZN7QRegionC2ERKS_(void);
    extern Class _ZN7QRegionC1ERKS_(void);
    extern Class _ZN7QRegionC2ERK7QBitmap(void);
    extern Class _ZN7QRegionC1ERK7QBitmap(void);
    extern Class _ZN7QRegionD2Ev(void);
    extern Class _ZN7QRegionD1Ev(void);
    extern Class _ZN7QRegionaSERKS_(void);
    extern bool _ZNK7QRegion7isEmptyEv(void);
    extern bool _ZNK7QRegion8containsERK6QPoint(void);
    extern bool _ZNK7QRegion8containsERK5QRect(void);
    extern void _ZN7QRegion9translateEii(void);
    extern Class _ZNK7QRegion10translatedEii(void);
    extern Class _ZNK7QRegion5uniteERKS_(void);
    extern Class _ZNK7QRegion9intersectERKS_(void);
    extern Class _ZNK7QRegion8subtractERKS_(void);
    extern Class _ZNK7QRegion3eorERKS_(void);
    extern Class _ZNK7QRegion12boundingRectEv(void);
    extern _ZNK7QRegion5rectsEv(void);
    extern void _ZN7QRegion8setRectsEPK5QRecti(void);
    extern Class _ZNK7QRegionorERKS_(void);
    extern Class _ZNK7QRegionplERKS_(void);
    extern Class _ZNK7QRegionanERKS_(void);
    extern Class _ZNK7QRegionmiERKS_(void);
    extern Class _ZNK7QRegioneoERKS_(void);
    extern Class _ZN7QRegionoRERKS_(void);
    extern Class _ZN7QRegionpLERKS_(void);
    extern Class _ZN7QRegionaNERKS_(void);
    extern Class _ZN7QRegionmIERKS_(void);
    extern Class _ZN7QRegioneOERKS_(void);
    extern bool _ZNK7QRegioneqERKS_(void);
    extern Class _ZNK7QRegioncv8QVariantEv(void);
    extern Class _ZlsR11QDataStreamRK7QRegion(void);
    extern Class _ZrsR11QDataStreamR7QRegion(void);
    extern Class _Zls6QDebugRK7QRegion(void);
#ifdef __cplusplus
}
#endif
#endif
