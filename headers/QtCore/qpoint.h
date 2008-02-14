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


extern QDataStream _ZlsR11QDataStreamRK6QPoint(QDataStream &, const QPoint &);
extern QDataStream _ZrsR11QDataStreamR6QPoint(QDataStream &, QPoint &);
extern QDebug _Zls6QDebugRK6QPoint(_Z6QDebug, const QPoint &);
extern QDataStream _ZlsR11QDataStreamRK7QPointF(QDataStream &, QPointF & &);
extern QDataStream _ZrsR11QDataStreamR7QPointF(QDataStream &, QPointF &);
extern QDebug _Zls6QDebugRK7QPointF(_Z6QDebug, QPointF & &);
// *INDENT-ON*
#endif
