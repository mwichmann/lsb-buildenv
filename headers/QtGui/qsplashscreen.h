#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSPLASHSCREEN_H_
#define _QTGUI_QSPLASHSCREEN_H_

class QSplashScreen;
// *INDENT-OFF*

class QSplashScreen : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSplashScreen(QPixmap const&, QFlags<Qt::WindowType>);
     QSplashScreen(QWidget*, QPixmap const&, QFlags<Qt::WindowType>);
     ~QSplashScreen();
    void setPixmap(QPixmap const&);
    const QPixmap pixmap() const;
    void finish(QWidget*);
    void repaint();
    void showMessage(QString const&, int, QColor const&);
    void clearMessage();
protected:
    void messageChanged(QString const&);
    bool event(QEvent*);
    void drawContents(QPainter*);
    void mousePressEvent(QMouseEvent*);
};


/* Function prototypes */

extern struct QMetaObject _ZN13QSplashScreen16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
