#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPOLYGON_H_
#define _QTGUI_QPOLYGON_H_

class QPolygonF;
// *INDENT-OFF*

class QPolygon;

class QPolygonF;


/* Function prototypes */

extern QDebug operator<<(QDebug, QPolygon const&)(_Z6QDebug, const QPolygon &);
extern QDebug operator<<(QDebug, QPolygonF const&)(_Z6QDebug, const QPolygonF &);
extern QDataStream operator<<(QDataStream&, QPolygonF const&)(QDataStream &);
extern QDataStream operator>>(QDataStream&, QPolygonF&)(QDataStream &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
