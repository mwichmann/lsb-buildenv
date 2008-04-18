#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QMATRIX_H_
#define _QTGUI_QMATRIX_H_

class QMatrix;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QMatrix
{
private:
public:
     QMatrix();
     QMatrix(double, double, double, double, double, double);
     QMatrix(QMatrix const&);
    void setMatrix(double, double, double, double, double, double);
    void map(int, int, int*, int*) const;
    void map(double, double, double*, double*) const;
    QRect mapRect(QRect const&) const;
    QRectF mapRect(QRectF const&) const;
    QPoint map(QPoint const&) const;
    QPointF map(QPointF const&) const;
    QLine map(QLine const&) const;
    QLineF map(QLineF const&) const;
    QPolygonF map(QPolygonF const&) const;
    QPolygon map(QPolygon const&) const;
    QRegion map(QRegion const&) const;
    QPainterPath map(QPainterPath const&) const;
    QPolygon mapToPolygon(QRect const&) const;
    void reset();
     translate(double, double);
     scale(double, double);
     shear(double, double);
     rotate(double);
    QMatrix inverted(bool*) const;
    bool operator==(QMatrix const&) const;
    bool operator!=(QMatrix const&) const;
     operator*=(QMatrix const&);
    QMatrix operator*(QMatrix const&) const;
     operator=(QMatrix const&);
    QRegion mapToRegion(QRect const&) const;
    QVariant operator QVariant() const;
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern QDebug _Zls6QDebugRK7QMatrix(_Z6QDebug, const QMatrix &);
extern QDataStream _ZlsR11QDataStreamRK7QMatrix(QDataStream &);
extern  _ZmlRK12QPainterPathRK7QMatrix(const QPainterPath &, const QMatrix &);
extern QDataStream _ZrsR11QDataStreamR7QMatrix(QDataStream &);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
