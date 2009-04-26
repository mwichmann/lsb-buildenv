#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QREGION_H_
#define _QTGUI_QREGION_H_

class QRegion;
// *INDENT-OFF*

class QRegion;

enum _ZN7QRegion10RegionTypeE	
{
Rectangle = 0,	
Ellipse = 1
}
;

struct QRegion::QRegionData	;


/* Function prototypes */

extern QDebug _Zls6QDebugRK7QRegion(const QRegion &);
extern QDataStream _ZlsR11QDataStreamRK7QRegion(QDataStream &, const QRegion &);
extern QDataStream _ZrsR11QDataStreamR7QRegion(QDataStream &, QRegion &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
