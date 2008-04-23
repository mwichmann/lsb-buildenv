#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPEN_H_
#define _QTGUI_QPEN_H_

class QPen;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QPen
{
private:
public:
     QPen();
     QPen(Qt::PenStyle);
     QPen(QColor const&);
     QPen(QBrush const&, double, Qt::PenStyle, Qt::PenCapStyle, Qt::PenJoinStyle);
     QPen(QPen const&);
     ~QPen();
    QPen & operator=(QPen const&);
    enum _ZN2Qt8PenStyleE style() const;
    void setStyle(Qt::PenStyle);
    QVector<double> dashPattern() const;
    void setDashPattern(QVector<double> const&);
    qreal miterLimit() const;
    void setMiterLimit(double);
    qreal widthF() const;
    void setWidthF(double);
    int width() const;
    void setWidth(int);
    QColor color() const;
    void setColor(QColor const&);
    QBrush brush() const;
    void setBrush(QBrush const&);
    bool isSolid() const;
    enum _ZN2Qt11PenCapStyleE capStyle() const;
    void setCapStyle(Qt::PenCapStyle);
    enum _ZN2Qt12PenJoinStyleE joinStyle() const;
    void setJoinStyle(Qt::PenJoinStyle);
    bool operator==(QPen const&) const;
    QVariant operator QVariant() const;
    bool isDetached();
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern QDebug _Zls6QDebugRK4QPen(const QPen &);
extern QDataStream _ZlsR11QDataStreamRK4QPen(QDataStream &, const QPen &);
extern QDataStream _ZrsR11QDataStreamR4QPen(QDataStream &, QPen &);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
