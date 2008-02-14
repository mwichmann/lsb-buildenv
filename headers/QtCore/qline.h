#ifndef _QTCORE_QLINE_H_
#define _QTCORE_QLINE_H_

class QLineF;
// *INDENT-OFF*

class QLine
{
private:
public:
};

class QLineF
{
private:
public:
    bool isNull() const;
    qreal length() const;
    QLineF unitVector() const;
    enum _ZN6QLineF13IntersectTypeE intersect(QLineF const&, QPointF*) const;
    qreal angle(QLineF const&) const;
};

enum IntersectType	
{
NoIntersection = 0,	
BoundedIntersection = 1,	
UnboundedIntersection = 2
}
;


extern QDebug _Zls6QDebugRK5QLine(_Z6QDebug, const QLine &);
extern QDataStream _ZlsR11QDataStreamRK5QLine(QDataStream &, const QLine &);
extern QDataStream _ZrsR11QDataStreamR5QLine(QDataStream &, QLine &);
extern QDebug _Zls6QDebugRK6QLineF(_Z6QDebug, QLineF & &);
extern QDataStream _ZlsR11QDataStreamRK6QLineF(QDataStream &, QLineF & &);
extern QDataStream _ZrsR11QDataStreamR6QLineF(QDataStream &, QLineF &);
// *INDENT-ON*
#endif
