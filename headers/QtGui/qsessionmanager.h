#ifndef _QTGUI_QSESSIONMANAGER_H_
#define _QTGUI_QSESSIONMANAGER_H_

class QSessionManager;
// *INDENT-OFF*

class QSessionManager : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
    QString sessionId() const;
    QString sessionKey() const;
    void * handle() const;
    bool allowsInteraction();
    bool allowsErrorInteraction();
    void release();
    void cancel();
    void setRestartHint(QSessionManager::RestartHint);
    enum _ZN15QSessionManager11RestartHintE restartHint() const;
    void setRestartCommand(QStringList const&);
    QStringList restartCommand() const;
    void setDiscardCommand(QStringList const&);
    QStringList discardCommand() const;
    void setManagerProperty(QString const&, QString const&);
    void setManagerProperty(QString const&, QStringList const&);
    bool isPhase2() const;
    void requestPhase2();
     ~QSessionManager();
};

enum RestartHint	
{
RestartIfRunning = 0,	
RestartAnyway = 1,	
RestartImmediately = 2,	
RestartNever = 3
}
;


extern struct QMetaObject _ZN15QSessionManager16staticMetaObjectE ;
// *INDENT-ON*
#endif
