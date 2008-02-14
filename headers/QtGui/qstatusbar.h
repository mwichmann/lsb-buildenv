#ifndef _QTGUI_QSTATUSBAR_H_
#define _QTGUI_QSTATUSBAR_H_

class QStatusBar;
// *INDENT-OFF*

class QStatusBar : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QStatusBar(QWidget*);
     ~QStatusBar();
    void addWidget(QWidget*, int);
    void addPermanentWidget(QWidget*, int);
    void removeWidget(QWidget*);
    void setSizeGripEnabled(bool);
    bool isSizeGripEnabled() const;
    QString currentMessage() const;
    void showMessage(QString const&, int);
    void clearMessage();
     QStatusBar(QWidget*, char const*);
    int insertWidget(int, QWidget*, int);
    int insertPermanentWidget(int, QWidget*, int);
protected:
    void messageChanged(QString const&);
    void paintEvent(QPaintEvent*);
    void resizeEvent(QResizeEvent*);
    void reformat();
    void hideOrShow();
    bool event(QEvent*);
};


extern struct QMetaObject _ZN10QStatusBar16staticMetaObjectE ;
// *INDENT-ON*
#endif
