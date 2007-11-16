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
};

enum IntersectType	
{
NoIntersection = 0,	
BoundedIntersection = 1,	
UnboundedIntersection = 2
}
;


extern QDebug _Zls6QDebugRK5QLine(void);
extern QDataStream _ZlsR11QDataStreamRK5QLine(void);
extern QDataStream _ZrsR11QDataStreamR5QLine(void);
extern bool _ZNK6QLineF6isNullEv(void);
extern qreal _ZNK6QLineF6lengthEv(void);
extern QLineF _ZNK6QLineF10unitVectorEv(void);
extern enum N6QLineF13IntersectTypeE _ZNK6QLineF9intersectERKS_P7QPointF(void);
extern qreal _ZNK6QLineF5angleERKS_(void);
extern QDebug _Zls6QDebugRK6QLineF(void);
extern QDataStream _ZlsR11QDataStreamRK6QLineF(void);
extern QDataStream _ZrsR11QDataStreamR6QLineF(void);
// *INDENT-ON*
#endif
