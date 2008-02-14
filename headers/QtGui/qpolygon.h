#ifndef _QTGUI_QPOLYGON_H_
#define _QTGUI_QPOLYGON_H_

class QPolygonF;
// *INDENT-OFF*

class QPolygon
{
private:
public:
     QPolygon(QRect const&, bool);
     QPolygon(int, int const*);
    QVariant operator QVariant() const;
    void translate(int, int);
    QRect boundingRect() const;
    void point(int, int*, int*) const;
    void setPoints(int, int const*);
    void setPoints(int, int, int, ...);
    void putPoints(int, int, int const*);
    void putPoints(int, int, int, int, ...);
    void putPoints(int, int, QPolygon const&, int);
};

class QPolygonF
{
private:
public:
     QPolygonF(QRectF const&);
     QPolygonF(QPolygon const&);
    void translate(QPointF const&);
    QPolygon toPolygon() const;
    QRectF boundingRect() const;
};


extern QDebug _Zls6QDebugRK8QPolygon(_Z6QDebug, const QPolygon &);
extern QDebug _Zls6QDebugRK9QPolygonF(_Z6QDebug, const QPolygonF &);
extern QDataStream _ZlsR11QDataStreamRK9QPolygonF(QDataStream &, const QPolygonF &);
extern QDataStream _ZrsR11QDataStreamR9QPolygonF(QDataStream &, QPolygonF &);
// *INDENT-ON*
#endif
