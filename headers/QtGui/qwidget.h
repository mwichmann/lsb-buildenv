#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QWIDGET_H_
#define _QTGUI_QWIDGET_H_

class QWidgetData;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QWidgetData
{
private:
public:
};

class QWidget : public QObject, public QPaintDevice
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QWidget(QWidget*, QFlags<Qt::WindowType>);
     QWidget(QWidget*, char const*, QFlags<Qt::WindowType>);
     ~QWidget();
    int devType() const;
    QStyle * style() const;
    void setStyle(QStyle*);
    enum _ZN2Qt14WindowModalityE windowModality() const;
    void setWindowModality(Qt::WindowModality);
    bool isEnabledTo(QWidget*) const;
    void setEnabled(bool);
    void setDisabled(bool);
    void setWindowModified(bool);
    QRect frameGeometry() const;
    QRect normalGeometry() const;
    int x() const;
    int y() const;
    QPoint pos() const;
    QSize frameSize() const;
    QRect childrenRect() const;
    QRegion childrenRegion() const;
    QSize minimumSize() const;
    QSize maximumSize() const;
    void setMinimumSize(int, int);
    void setMaximumSize(int, int);
    void setMinimumWidth(int);
    void setMinimumHeight(int);
    void setMaximumWidth(int);
    void setMaximumHeight(int);
    QSize sizeIncrement() const;
    void setSizeIncrement(int, int);
    QSize baseSize() const;
    void setBaseSize(int, int);
    void setFixedSize(QSize const&);
    void setFixedSize(int, int);
    void setFixedWidth(int);
    void setFixedHeight(int);
    QPoint mapToGlobal(QPoint const&) const;
    QPoint mapFromGlobal(QPoint const&) const;
    QPoint mapToParent(QPoint const&) const;
    QPoint mapFromParent(QPoint const&) const;
    QPoint mapTo(QWidget*, QPoint const&) const;
    QPoint mapFrom(QWidget*, QPoint const&) const;
    QWidget * window() const;
    const QPalette & palette() const;
    void setPalette(QPalette const&);
    void setBackgroundRole(QPalette::ColorRole);
    enum _ZN8QPalette9ColorRoleE backgroundRole() const;
    void setForegroundRole(QPalette::ColorRole);
    enum _ZN8QPalette9ColorRoleE foregroundRole() const;
    void setFont(QFont const&);
    QCursor cursor() const;
    void setCursor(QCursor const&);
    void unsetCursor();
    void setMask(QBitmap const&);
    void setMask(QRegion const&);
    QRegion mask() const;
    void clearMask();
    void setWindowTitle(QString const&);
    QString windowTitle() const;
    void setWindowIcon(QIcon const&);
    QIcon windowIcon() const;
    void setWindowIconText(QString const&);
    QString windowIconText() const;
    void setWindowRole(QString const&);
    QString windowRole() const;
    void setWindowOpacity(double);
    qreal windowOpacity() const;
    bool isWindowModified() const;
    void setToolTip(QString const&);
    QString toolTip() const;
    void setStatusTip(QString const&);
    QString statusTip() const;
    void setWhatsThis(QString const&);
    QString whatsThis() const;
    QString accessibleName() const;
    void setAccessibleName(QString const&);
    QString accessibleDescription() const;
    void setAccessibleDescription(QString const&);
    void setLayoutDirection(Qt::LayoutDirection);
    enum _ZN2Qt15LayoutDirectionE layoutDirection() const;
    void unsetLayoutDirection();
    bool isActiveWindow() const;
    void activateWindow();
    void clearFocus();
    void setFocus(Qt::FocusReason);
    enum _ZN2Qt11FocusPolicyE focusPolicy() const;
    void setFocusPolicy(Qt::FocusPolicy);
    bool hasFocus() const;
    void setTabOrder(QWidget*, QWidget*);
    void setFocusProxy(QWidget*);
    QWidget * focusProxy() const;
    enum _ZN2Qt17ContextMenuPolicyE contextMenuPolicy() const;
    void setContextMenuPolicy(Qt::ContextMenuPolicy);
    void grabMouse();
    void grabMouse(QCursor const&);
    void releaseMouse();
    void grabKeyboard();
    void releaseKeyboard();
    int grabShortcut(QKeySequence const&, Qt::ShortcutContext);
    void releaseShortcut(int);
    void setShortcutEnabled(int, bool);
    QWidget * mouseGrabber();
    QWidget * keyboardGrabber();
    void setUpdatesEnabled(bool);
    void update();
    void repaint();
    void update(QRect const&);
    void update(QRegion const&);
    void repaint(int, int, int, int);
    void repaint(QRect const&);
    void repaint(QRegion const&);
    void setVisible(bool);
    void showMinimized();
    void showMaximized();
    void showFullScreen();
    void showNormal();
    bool close();
    void raise();
    void lower();
    void stackUnder(QWidget*);
    void move(QPoint const&);
    void resize(QSize const&);
    void setGeometry(QRect const&);
    void adjustSize();
    bool isVisibleTo(QWidget*) const;
    bool isMinimized() const;
    bool isMaximized() const;
    bool isFullScreen() const;
     windowState() const;
    void setWindowState(QFlags<Qt::WindowState>);
    void overrideWindowState(QFlags<Qt::WindowState>);
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    QSizePolicy sizePolicy() const;
    void setSizePolicy(QSizePolicy);
    int heightForWidth(int) const;
    QRegion visibleRegion() const;
    void setContentsMargins(int, int, int, int);
    void getContentsMargins(int*, int*, int*, int*) const;
    QRect contentsRect() const;
    QLayout * layout() const;
    void setLayout(QLayout*);
    void updateGeometry();
    void setParent(QWidget*);
    void setParent(QWidget*, QFlags<Qt::WindowType>);
    void scroll(int, int);
    void scroll(int, int, QRect const&);
    QWidget * focusWidget() const;
    QWidget * nextInFocusChain() const;
    bool acceptDrops() const;
    void setAcceptDrops(bool);
    void addAction(QAction*);
    void addActions(QList<QAction*>);
    void insertAction(QAction*, QAction*);
    void insertActions(QAction*, QList<QAction*>);
    void removeAction(QAction*);
     actions() const;
    void setWindowFlags(QFlags<Qt::WindowType>);
    void overrideWindowFlags(QFlags<Qt::WindowType>);
    QWidget * find(unsigned long);
    QWidgetMapper * wmapper();
    QWidget * childAt(QPoint const&) const;
     x11Info() const;
     x11PictureHandle() const;
     handle() const;
    void setAttribute(Qt::WidgetAttribute, bool);
    QPaintEngine * paintEngine() const;
    void ensurePolished() const;
    QInputContext * inputContext();
    void setInputContext(QInputContext*);
    bool isAncestorOf(QWidget const*) const;
    bool autoFillBackground() const;
    void setAutoFillBackground(bool);
    QVariant inputMethodQuery(Qt::InputMethodQuery) const;
    QStyle * setStyle(QString const&);
    QRect visibleRect() const;
    enum _ZN2Qt14BackgroundModeE backgroundMode() const;
    void setBackgroundMode(Qt::BackgroundMode, Qt::BackgroundMode);
    void erase(QRegion const&);
    bool close(bool);
    void setIcon(QPixmap const&);
    const QPixmap * icon() const;
    void createWinId();
    void setStyleSheet(QString const&);
    bool restoreGeometry(QByteArray const&);
    void setWindowSurface(QWindowSurface*);
    void setShortcutAutoRepeat(int, bool);
    QString styleSheet() const;
    QByteArray saveGeometry() const;
    QWindowSurface * windowSurface() const;
    WId winId() const;
protected:
    void customContextMenuRequested(QPoint const&);
    bool event(QEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseDoubleClickEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void wheelEvent(QWheelEvent*);
    void keyPressEvent(QKeyEvent*);
    void keyReleaseEvent(QKeyEvent*);
    void focusInEvent(QFocusEvent*);
    void focusOutEvent(QFocusEvent*);
    void enterEvent(QEvent*);
    void leaveEvent(QEvent*);
    void paintEvent(QPaintEvent*);
    void moveEvent(QMoveEvent*);
    void resizeEvent(QResizeEvent*);
    void closeEvent(QCloseEvent*);
    void contextMenuEvent(QContextMenuEvent*);
    void tabletEvent(QTabletEvent*);
    void actionEvent(QActionEvent*);
    void dragEnterEvent(QDragEnterEvent*);
    void dragMoveEvent(QDragMoveEvent*);
    void dragLeaveEvent(QDragLeaveEvent*);
    void dropEvent(QDropEvent*);
    void showEvent(QShowEvent*);
    void hideEvent(QHideEvent*);
    bool x11Event(_XEvent*);
    void changeEvent(QEvent*);
    int metric(QPaintDevice::PaintDeviceMetric) const;
    void inputMethodEvent(QInputMethodEvent*);
    void resetInputContext();
    void updateMicroFocus();
    void create(unsigned long, bool, bool);
    void destroy(bool, bool);
    bool focusNextPrevChild(bool);
    void styleChange(QStyle&);
    void enabledChange(bool);
    void paletteChange(QPalette const&);
    void fontChange(QFont const&);
    void windowActivationChange(bool);
    void languageChange();
private:
    bool testAttribute_helper(Qt::WidgetAttribute) const;
};

enum BackgroundOrigin	
{
WidgetOrigin = 0,	
ParentOrigin = 1,	
WindowOrigin = 2,	
AncestorOrigin = 3
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN7QWidget16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
