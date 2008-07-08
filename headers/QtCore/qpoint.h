#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QPOINT_H_
#define _QTCORE_QPOINT_H_

class QPoint;
// *INDENT-OFF*

class QPoint
{
private:
public:
    int manhattanLength() const;
};

class QPointF
{
private:
public:
};


/* Function prototypes */

extern QDebug _Zls6QDebugRK6QPoint(const QPoint &);
extern QDebug _Zls6QDebugRK7QPointF(_Z6QDebug, QPointF & &);
extern QDataStream _ZlsR11QDataStreamRK6QPoint(const QPoint &);
extern QDataStream _ZlsR11QDataStreamRK7QPointF(QDataStream &, QPointF & &);
extern QDataStream _ZrsR11QDataStreamR6QPoint(QPoint &);
extern QDataStream _ZrsR11QDataStreamR7QPointF(QDataStream &, QPointF &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
