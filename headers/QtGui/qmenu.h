#ifndef _QTGUI_QMENU_H_
#define _QTGUI_QMENU_H_

class QMenu;
// *INDENT-OFF*

class QMenu : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QMenu(QWidget*);
     QMenu(QString const&, QWidget*);
     ~QMenu();
    QAction * addAction(QString const&);
    QAction * addAction(QIcon const&, QString const&);
    QAction * addAction(QString const&, QObject const*, char const*, QKeySequence const&);
    QAction * addAction(QIcon const&, QString const&, QObject const*, char const*, QKeySequence const&);
    QAction * addMenu(QMenu*);
    QMenu * addMenu(QString const&);
    QMenu * addMenu(QIcon const&, QString const&);
    QAction * addSeparator();
    QAction * insertMenu(QAction*, QMenu*);
    QAction * insertSeparator(QAction*);
    void clear();
    void setTearOffEnabled(bool);
    bool isTearOffEnabled() const;
    bool isTearOffMenuVisible() const;
    void hideTearOffMenu();
    void setDefaultAction(QAction*);
    QAction * defaultAction() const;
    void setActiveAction(QAction*);
    QAction * activeAction() const;
    void popup(QPoint const&, QAction*);
    QAction * exec();
    QAction * exec(QPoint const&, QAction*);
    QAction * exec(QList<QAction*>, QPoint const&, QAction*);
    QSize sizeHint() const;
    QRect actionGeometry(QAction*) const;
    QAction * actionAt(QPoint const&) const;
    QAction * menuAction() const;
    QString title() const;
    void setTitle(QString const&);
    QIcon icon() const;
    void setIcon(QIcon const&);
    void setNoReplayFor(QWidget*);
    int insertItem(QMenuItem*, int, int);
    int insertSeparator(int);
    void setId(int, int);
    QMenuItem * findPopup(QMenu*, int*);
    bool setItemParameter(int, int);
    int itemParameter(int) const;
    int frameWidth() const;
    void setSeparatorsCollapsible(bool);
    bool separatorsCollapsible() const;
    bool isEmpty() const;
protected:
    void aboutToShow();
    void triggered(QAction*);
    void hovered(QAction*);
    int columnCount() const;
    void changeEvent(QEvent*);
    void keyPressEvent(QKeyEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void wheelEvent(QWheelEvent*);
    void enterEvent(QEvent*);
    void leaveEvent(QEvent*);
    void hideEvent(QHideEvent*);
    void paintEvent(QPaintEvent*);
    void actionEvent(QActionEvent*);
    void timerEvent(QTimerEvent*);
    bool event(QEvent*);
    void aboutToHide();
    void activated(int);
    void highlighted(int);
    bool focusNextPrevChild(bool);
private:
    int insertAny(QIcon const*, QString const*, QObject const*, char const*, QKeySequence const*, QMenu const*, int, int);
};


extern struct QMetaObject _ZN5QMenu16staticMetaObjectE ;
// *INDENT-ON*
#endif
