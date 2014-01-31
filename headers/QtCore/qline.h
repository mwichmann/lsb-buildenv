#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QLINE_H_
#define _QTCORE_QLINE_H_

class QLineF;
// *INDENT-OFF*

class QLine;

class QLineF;

enum QLineF::IntersectType	
{
NoIntersection = 0,	
BoundedIntersection = 1,	
UnboundedIntersection = 2
}
;


/* Function prototypes */

extern QDebug operator<<(QDebug, QLine const&)(_Z6QDebug, const QLine &);
extern QDebug operator<<(QDebug, QLineF const&)(_Z6QDebug, QLineF & &);
extern QDataStream operator<<(QDataStream&, QLine const&)(QDataStream &, const QLine &);
extern QDataStream operator<<(QDataStream&, QLineF const&)(QDataStream &, QLineF & &);
extern QDataStream operator>>(QDataStream&, QLine&)(QDataStream &, QLine &);
extern QDataStream operator>>(QDataStream&, QLineF&)(QDataStream &, QLineF &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
