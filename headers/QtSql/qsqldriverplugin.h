#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLDRIVERPLUGIN_H_
#define _QTSQL_QSQLDRIVERPLUGIN_H_

class QSqlDriverPlugin;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
struct QSqlDriverFactoryInterface	;

class QSqlDriverPlugin : public QObject, public QSqlDriverFactoryInterface
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSqlDriverPlugin(QObject*);
     ~QSqlDriverPlugin();
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN16QSqlDriverPlugin16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
