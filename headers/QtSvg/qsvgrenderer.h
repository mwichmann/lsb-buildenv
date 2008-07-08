#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSVG_QSVGRENDERER_H_
#define _QTSVG_QSVGRENDERER_H_

class QSvgRenderer;
// *INDENT-OFF*

class QSvgRenderer : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
     qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSvgRenderer(QObject*);
     QSvgRenderer(QString const&, QObject*);
     QSvgRenderer(QByteArray const&, QObject*);
     ~QSvgRenderer();
    bool isValid() const;
    QSize defaultSize() const;
    QRect viewBox() const;
    void setViewBox(QRect const&);
    bool animated() const;
    int framesPerSecond() const;
    void setFramesPerSecond(int);
    int currentFrame() const;
    void setCurrentFrame(int);
    int animationDuration() const;
    bool load(QString const&);
    bool load(QByteArray const&);
    void render(QPainter*);
     setViewBox(QRectF const&);
     render(QPainter*, QRectF const&);
     render(QPainter*, QString const&, QRectF const&);
     elementExists(QString const&) const;
    QRectF boundsOnElement(QString const&) const;
    QMatrix matrixForElement(QString const&) const;
    QRectF viewBoxF() const;
protected:
    void repaintNeeded();
};


/* Function prototypes */

extern struct QMetaObject _ZN12QSvgRenderer16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
