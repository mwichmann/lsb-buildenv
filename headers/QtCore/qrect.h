#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QRECT_H_
#define _QTCORE_QRECT_H_

class QRectF;
// *INDENT-OFF*

class QRect;

class QRectF;


/* Function prototypes */

extern QDebug operator<<(QDebug, QRect const&)(const QRect &);
extern QDebug operator<<(QDebug, QRectF const&)(_Z6QDebug, const QRectF &);
extern QDataStream operator<<(QDataStream&, QRect const&)(const QRect &);
extern QDataStream operator<<(QDataStream&, QRectF const&)(QDataStream &, const QRectF &);
extern QDataStream operator>>(QDataStream&, QRect&)(QRect &);
extern QDataStream operator>>(QDataStream&, QRectF&)(QDataStream &, QRectF &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
