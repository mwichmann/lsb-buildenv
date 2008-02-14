#ifndef _QTSVG_QSVGWIDGET_H_
#define _QTSVG_QSVGWIDGET_H_

class QSvgWidget;
// *INDENT-OFF*

typedef enum QtValidLicenseForSvgModule	QtSvgModule	
;

class QSvgWidget : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
     qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSvgWidget(QWidget*);
     QSvgWidget(QString const&, QWidget*);
     ~QSvgWidget();
    QSvgRenderer * renderer() const;
    QSize sizeHint() const;
    void load(QString const&);
    void load(QByteArray const&);
protected:
    void paintEvent(QPaintEvent*);
};


extern struct QMetaObject _ZN10QSvgWidget16staticMetaObjectE ;
// *INDENT-ON*
#endif
