#ifndef _QTGUI_QRUBBERBAND_H_
#define _QTGUI_QRUBBERBAND_H_

class QRubberBand;
// *INDENT-OFF*

class QRubberBand : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QRubberBand(QRubberBand::Shape, QWidget*);
     ~QRubberBand();
    enum _ZN11QRubberBand5ShapeE shape() const;
    void setGeometry(QRect const&);
protected:
    bool event(QEvent*);
    void paintEvent(QPaintEvent*);
    void changeEvent(QEvent*);
    void showEvent(QShowEvent*);
    void resizeEvent(QResizeEvent*);
    void moveEvent(QMoveEvent*);
};

enum Shape	
{
Line = 0,	
Rectangle = 1
}
;


extern struct QMetaObject _ZN11QRubberBand16staticMetaObjectE ;
// *INDENT-ON*
#endif
