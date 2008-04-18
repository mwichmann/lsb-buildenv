#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QTIMER_H_
#define _QTCORE_QTIMER_H_

class QTimer;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QTimer : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTimer(QObject*);
     QTimer(QObject*, char const*);
     ~QTimer();
    void setInterval(int);
    static void singleShot(int, QObject*, char const*);
    void start(int);
    void start();
    void stop();
    int start(int, bool);
protected:
    void timeout();
    void timerEvent(QTimerEvent*);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN6QTimer16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
