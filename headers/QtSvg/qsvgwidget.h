#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSVG_QSVGWIDGET_H_
#define _QTSVG_QSVGWIDGET_H_

class QSvgWidget;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef enum QtValidLicenseForSvgModule	QtSvgModule	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
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

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN10QSvgWidget16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
