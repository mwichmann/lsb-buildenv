#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSESSIONMANAGER_H_
#define _QTGUI_QSESSIONMANAGER_H_

class QSessionManager;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN15QSessionManager16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
