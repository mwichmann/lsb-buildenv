#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QSIZE_H_
#define _QTCORE_QSIZE_H_

class QSize;
// *INDENT-OFF*

class QSize;

class QSizeF;


/* Function prototypes */

extern QDebug operator<<(QDebug, QSize const&)(const QSize &);
extern QDebug operator<<(QDebug, QSizeF const&)(_Z6QDebug, QSizeF & &);
extern QDataStream operator<<(QDataStream&, QSize const&)(const QSize &);
extern QDataStream operator<<(QDataStream&, QSizeF const&)(QDataStream &, QSizeF & &);
extern QDataStream operator>>(QDataStream&, QSize&)(QSize &);
extern QDataStream operator>>(QDataStream&, QSizeF&)(QDataStream &, QSizeF &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
