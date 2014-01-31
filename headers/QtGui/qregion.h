#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QREGION_H_
#define _QTGUI_QREGION_H_

class QRegion;
// *INDENT-OFF*

class QRegion;

enum QRegion::RegionType	
{
Rectangle = 0,	
Ellipse = 1
}
;

struct QRegion::QRegionData	;


/* Function prototypes */

extern QDebug operator<<(QDebug, QRegion const&)(const QRegion &);
extern QDataStream operator<<(QDataStream&, QRegion const&)(QDataStream &, const QRegion &);
extern QDataStream operator>>(QDataStream&, QRegion&)(QDataStream &, QRegion &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
