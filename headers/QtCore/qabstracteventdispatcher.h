#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QABSTRACTEVENTDISPATCHER_H_
#define _QTCORE_QABSTRACTEVENTDISPATCHER_H_

class QAbstractEventDispatcher;
// *INDENT-OFF*

typedef struct QPair<int, int>	TimerInfo	
;

typedef bool	EventFilter	
;

class QAbstractEventDispatcher : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractEventDispatcher(QObject*);
     ~QAbstractEventDispatcher();
    static  instance(QThread*);
    int registerTimer(int, QObject*);
    void startingUp();
    void closingDown();
    bool(*)(void	* )
 setEventFilter(bool (*)(void*));
    bool filterEvent(void*);
protected:
    void aboutToBlock();
    void awake();
};


/* Function prototypes */

extern struct QMetaObject _ZN24QAbstractEventDispatcher16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
