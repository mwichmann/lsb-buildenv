#ifndef _QTGUI_QAPPLICATION_H_
#define _QTGUI_QAPPLICATION_H_

class QApplication;
// *INDENT-OFF*

typedef int	ColorMode	
;

class QApplication : public QCoreApplication
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QApplication(int&, char**);
     QApplication(int&, char**, bool);
     QApplication(int&, char**, QApplication::Type);
     QApplication(_XDisplay*, unsigned long, unsigned long);
     QApplication(_XDisplay*, int&, char**, unsigned long, unsigned long);
     ~QApplication();
    enum _ZN12QApplication4TypeE type();
    QStyle * style();
    void setStyle(QStyle*);
    QStyle * setStyle(QString const&);
    int colorSpec();
    void setColorSpec(int);
    QCursor * overrideCursor();
    void setOverrideCursor(QCursor const&);
    void changeOverrideCursor(QCursor const&);
    void restoreOverrideCursor();
    QPalette palette();
    QPalette palette(QWidget const*);
    QPalette palette(char const*);
    void setPalette(QPalette const&, char const*);
    QFont font(QWidget const*);
    void setFont(QFont const&, char const*);
    QFontMetrics fontMetrics();
    void setWindowIcon(QIcon const&);
    QIcon windowIcon();
    QWidget * mainWidget();
    void setMainWidget(QWidget*);
    _Z11QWidgetList allWidgets();
    _Z11QWidgetList topLevelWidgets();
    QDesktopWidget * desktop();
    QWidget * activePopupWidget();
    QWidget * activeModalWidget();
    QClipboard * clipboard();
    QWidget * focusWidget();
    QWidget * activeWindow();
    void setActiveWindow(QWidget*);
    QWidget * widgetAt(QPoint const&);
    QWidget * topLevelAt(QPoint const&);
    void syncX();
    void beep();
     keyboardModifiers();
     mouseButtons();
    void setDesktopSettingsAware(bool);
    bool desktopSettingsAware();
    void setCursorFlashTime(int);
    int cursorFlashTime();
    void setDoubleClickInterval(int);
    int doubleClickInterval();
    void setKeyboardInputInterval(int);
    int keyboardInputInterval();
    void setWheelScrollLines(int);
    int wheelScrollLines();
    void setGlobalStrut(QSize const&);
    QSize globalStrut();
    void setStartDragTime(int);
    int startDragTime();
    void setStartDragDistance(int);
    int startDragDistance();
    void setLayoutDirection(Qt::LayoutDirection);
    enum _ZN2Qt15LayoutDirectionE layoutDirection();
    bool isEffectEnabled(Qt::UIEffect);
    void setEffectEnabled(Qt::UIEffect, bool);
    bool x11EventFilter(_XEvent*);
    int x11ClientMessage(QWidget*, _XEvent*, bool);
    int x11ProcessEvent(_XEvent*);
    bool isSessionRestored() const;
    QString sessionId() const;
    QString sessionKey() const;
    void commitData(QSessionManager&);
    void saveState(QSessionManager&);
    void setInputContext(QInputContext*);
    QInputContext * inputContext() const;
    int exec();
    bool notify(QObject*, QEvent*);
    void setQuitOnLastWindowClosed(bool);
    bool quitOnLastWindowClosed();
    void closeAllWindows();
    void aboutQt();
     horizontalAlignment(QFlags<Qt::AlignmentFlag>);
     QApplication(_XDisplay*, unsigned long, unsigned long, int);
     QApplication(_XDisplay*, int&, char**, unsigned long, unsigned long, int);
     QApplication(int&, char**, bool, int);
     QApplication(int&, char**, int);
     QApplication(int&, char**, QApplication::Type, int);
    void setStyleSheet(QString const&);
    QLocale keyboardInputLocale();
    enum _ZN2Qt15LayoutDirectionE keyboardInputDirection();
    QFont font(char const*);
    QFont font();
    QString styleSheet() const;
protected:
    void lastWindowClosed();
    void focusChanged(QWidget*, QWidget*);
    bool event(QEvent*);
    bool compressEvent(QEvent*, QObject*, QPostEventList*);
    void saveStateRequest(QSessionManager&);
    void commitDataRequest(QSessionManager&);
};

enum Type	
{
Tty = 0,	
GuiClient = 1,	
GuiServer = 2
}
;

enum ColorSpec	
{
NormalColor = 0,	
CustomColor = 1,	
ManyColor = 2
}
;


extern struct QMetaObject _ZN12QApplication16staticMetaObjectE ;
// *INDENT-ON*
#endif
