#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QREGION_H_
#define _QTGUI_QREGION_H_

class QRegion;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QRegion
{
private:
public:
     QRegion();
     QRegion(int, int, int, int, QRegion::RegionType);
     QRegion(QRect const&, QRegion::RegionType);
     QRegion(QPolygon const&, Qt::FillRule);
     QRegion(QPolygon const&, bool);
     QRegion(QRegion const&);
     QRegion(QBitmap const&);
     ~QRegion();
    QRegion & operator=(QRegion const&);
    bool isEmpty() const;
    bool contains(QPoint const&) const;
    bool contains(QRect const&) const;
    void translate(int, int);
    QRegion translated(int, int) const;
    QRegion unite(QRegion const&) const;
    QRegion intersect(QRegion const&) const;
    QRegion subtract(QRegion const&) const;
    QRegion eor(QRegion const&) const;
    QRect boundingRect() const;
    QVector<QRect> rects() const;
    void setRects(QRect const*, int);
    const QRegion operator|(QRegion const&) const;
    const QRegion operator+(QRegion const&) const;
    const QRegion operator&(QRegion const&) const;
    const QRegion operator-(QRegion const&) const;
    const QRegion operator^(QRegion const&) const;
    QRegion & operator|=(QRegion const&);
    QRegion & operator+=(QRegion const&);
    QRegion & operator&=(QRegion const&);
    QRegion & operator-=(QRegion const&);
    QRegion & operator^=(QRegion const&);
    bool operator==(QRegion const&) const;
    QVariant operator QVariant() const;
    bool intersects(QRect const&) const;
    bool intersects(QRegion const&) const;
};

enum RegionType	
{
Rectangle = 0,	
Ellipse = 1
}
;

struct QRegionData	;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern QDebug _Zls6QDebugRK7QRegion(const QRegion &);
extern QDataStream _ZlsR11QDataStreamRK7QRegion(QDataStream &, const QRegion &);
extern QDataStream _ZrsR11QDataStreamR7QRegion(QDataStream &, QRegion &);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
