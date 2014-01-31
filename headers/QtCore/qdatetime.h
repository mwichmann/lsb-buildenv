#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QDATETIME_H_
#define _QTCORE_QDATETIME_H_

class QDateTime;
// *INDENT-OFF*

class QDate;

class QTime;

class QDateTime;


/* Function prototypes */

extern QDebug operator<<(QDebug, QDate const&)(const QDate &);
extern QDebug operator<<(QDebug, QTime const&)(const QTime &);
extern QDebug operator<<(QDebug, QDateTime const&)(const QDateTime &);
extern QDataStream operator<<(QDataStream&, QDate const&)(const QDate &);
extern QDataStream operator<<(QDataStream&, QTime const&)(const QTime &);
extern QDataStream operator<<(QDataStream&, QDateTime const&)(const QDateTime &);
extern QDataStream operator>>(QDataStream&, QDate&)(QDate &);
extern QDataStream operator>>(QDataStream&, QTime&)(QTime &);
extern QDataStream operator>>(QDataStream&, QDateTime&)(QDateTime &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
