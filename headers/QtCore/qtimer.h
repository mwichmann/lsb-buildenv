#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QTIMER_H_
#define _QTCORE_QTIMER_H_

class QTimer;
// *INDENT-OFF*

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


/* Function prototypes */

extern struct QMetaObject _ZN6QTimer16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
