#ifndef _QTCORE_QLINE_H_
#define _QTCORE_QLINE_H_

#include <QtCore/qglobal.h>
#include <QtCore/qdatastream.h>
#include <QtCore/qdebug.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N6QLineF13IntersectTypeE {
	NoIntersection,
	BoundedIntersection,
	UnboundedIntersection
    };


    extern Class _Zls6QDebugRK5QLine(void);
    extern Class _ZlsR11QDataStreamRK5QLine(void);
    extern Class _ZrsR11QDataStreamR5QLine(void);
    extern bool _ZNK6QLineF6isNullEv(void);
    extern qreal _ZNK6QLineF6lengthEv(void);
    extern Class _ZNK6QLineF10unitVectorEv(void);
    extern enum N6QLineF13IntersectTypeE
	_ZNK6QLineF9intersectERKS_P7QPointF(void);
    extern qreal _ZNK6QLineF5angleERKS_(void);
    extern Class _Zls6QDebugRK6QLineF(void);
    extern Class _ZlsR11QDataStreamRK6QLineF(void);
    extern Class _ZrsR11QDataStreamR6QLineF(void);
#ifdef __cplusplus
}
#endif
#endif
