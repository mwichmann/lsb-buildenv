#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QPOINT_H_
#define _QTCORE_QPOINT_H_

class QPoint;
// *INDENT-OFF*

class QPoint;

class QPointF;


/* Function prototypes */

extern QDebug operator<<(QDebug, QPoint const&)(const QPoint &);
extern QDebug operator<<(QDebug, QPointF const&)(_Z6QDebug, QPointF & &);
extern QDataStream operator<<(QDataStream&, QPoint const&)(const QPoint &);
extern QDataStream operator<<(QDataStream&, QPointF const&)(QDataStream &, QPointF & &);
extern QDataStream operator>>(QDataStream&, QPoint&)(QPoint &);
extern QDataStream operator>>(QDataStream&, QPointF&)(QDataStream &, QPointF &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
