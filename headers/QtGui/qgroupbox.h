#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QGROUPBOX_H_
#define _QTGUI_QGROUPBOX_H_

class QGroupBox;
// *INDENT-OFF*

class QGroupBox : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QGroupBox(QWidget*);
     QGroupBox(QString const&, QWidget*);
     ~QGroupBox();
    QString title() const;
    void setTitle(QString const&);
     alignment() const;
    void setAlignment(int);
    QSize minimumSizeHint() const;
    bool isFlat() const;
    void setFlat(bool);
    bool isCheckable() const;
    void setCheckable(bool);
    bool isChecked() const;
    void setChecked(bool);
     QGroupBox(QWidget*, char const*);
     QGroupBox(QString const&, QWidget*, char const*);
protected:
    void toggled(bool);
    bool event(QEvent*);
    void childEvent(QChildEvent*);
    void resizeEvent(QResizeEvent*);
    void paintEvent(QPaintEvent*);
    void focusInEvent(QFocusEvent*);
    void changeEvent(QEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void clicked(bool);
};


/* Function prototypes */

extern struct QMetaObject _ZN9QGroupBox16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
