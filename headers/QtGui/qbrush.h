#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QBRUSH_H_
#define _QTGUI_QBRUSH_H_

class QConicalGradient;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QBrush
{
private:
public:
     QBrush();
     QBrush(Qt::BrushStyle);
     QBrush(QColor const&, Qt::BrushStyle);
     QBrush(Qt::GlobalColor, Qt::BrushStyle);
     QBrush(QColor const&, QPixmap const&);
     QBrush(Qt::GlobalColor, QPixmap const&);
     QBrush(QPixmap const&);
     QBrush(QBrush const&);
     QBrush(QGradient const&);
     ~QBrush();
    QBrush & operator=(QBrush const&);
    QVariant operator QVariant() const;
    void setStyle(Qt::BrushStyle);
    QPixmap texture() const;
    void setTexture(QPixmap const&);
    void setColor(QColor const&);
     gradient() const;
    bool isOpaque() const;
    bool operator==(QBrush const&) const;
    QPixmap * pixmap() const;
     QBrush(QImage const&);
    void setTextureImage(QImage const&);
    void setMatrix(QMatrix const&);
    QImage textureImage() const;
};

struct QBrushData	;

class QGradient
{
private:
public:
     QGradient();
    void setColorAt(double, QColor const&);
    void setStops(QVector<QPair<double, QColor> > const&);
     stops() const;
    bool operator==(QGradient const&);
    bool operator==(QGradient const&) const;
    void setCoordinateMode(QGradient::CoordinateMode);
     coordinateMode() const;
};

enum Type	
{
LinearGradient = 0,	
RadialGradient = 1,	
ConicalGradient = 2,	
NoGradient = 3
}
;

enum Spread	
{
PadSpread = 0,	
ReflectSpread = 1,	
RepeatSpread = 2
}
;

class QLinearGradient :  
{
private:
public:
     QLinearGradient(QPointF const&, QPointF const&);
     QLinearGradient(double, double, double, double);
    QPointF start() const;
    QPointF finalStop() const;
     QLinearGradient();
    void setFinalStop(QPointF const&);
    void setStart(QPointF const&);
};

class QRadialGradient :  
{
private:
public:
     QRadialGradient(QPointF const&, double, QPointF const&);
     QRadialGradient(double, double, double, double, double);
    QPointF center() const;
    QPointF focalPoint() const;
    qreal radius() const;
     QRadialGradient(double, double, double);
     QRadialGradient(QPointF const&, double);
     QRadialGradient();
    void setFocalPoint(QPointF const&);
    void setCenter(QPointF const&);
    void setRadius(double);
};

class QConicalGradient :  
{
private:
public:
     QConicalGradient(QPointF const&, double);
     QConicalGradient(double, double, double);
    QPointF center() const;
    qreal angle() const;
     QConicalGradient();
    void setAngle(double);
    void setCenter(QPointF const&);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern QDebug _Zls6QDebugRK6QBrush(const QBrush &);
extern QDataStream _ZlsR11QDataStreamRK6QBrush(QDataStream &, const QBrush &);
extern QDataStream _ZrsR11QDataStreamR6QBrush(QDataStream &, QBrush &);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
