#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QDATETIME_H_
#define _QTCORE_QDATETIME_H_

class QDateTime;
// *INDENT-OFF*

class QDate;

class QTime;

class QDateTime;


/* Function prototypes */

extern QDebug _Zls6QDebugRK5QDate(const QDate &);
extern QDebug _Zls6QDebugRK5QTime(const QTime &);
extern QDebug _Zls6QDebugRK9QDateTime(const QDateTime &);
extern QDataStream _ZlsR11QDataStreamRK5QDate(const QDate &);
extern QDataStream _ZlsR11QDataStreamRK5QTime(const QTime &);
extern QDataStream _ZlsR11QDataStreamRK9QDateTime(const QDateTime &);
extern QDataStream _ZrsR11QDataStreamR5QDate(QDate &);
extern QDataStream _ZrsR11QDataStreamR5QTime(QTime &);
extern QDataStream _ZrsR11QDataStreamR9QDateTime(QDateTime &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
