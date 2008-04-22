#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QSOCKETNOTIFIER_H_
#define _QTCORE_QSOCKETNOTIFIER_H_

class QSocketNotifier;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSocketNotifier : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSocketNotifier(int, QSocketNotifier::Type, QObject*);
     QSocketNotifier(int, QSocketNotifier::Type, QObject*, char const*);
     ~QSocketNotifier();
    void setEnabled(bool);
protected:
    void activated(int);
    bool event(QEvent*);
};

enum Type	
{
Read = 0,	
Write = 1,	
Exception = 2
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN15QSocketNotifier16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
