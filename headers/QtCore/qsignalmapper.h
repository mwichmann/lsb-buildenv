#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QSIGNALMAPPER_H_
#define _QTCORE_QSIGNALMAPPER_H_

class QSignalMapper;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSignalMapper : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSignalMapper(QObject*);
     ~QSignalMapper();
    void setMapping(QObject*, int);
    void setMapping(QObject*, QString const&);
    void setMapping(QObject*, QWidget*);
    void setMapping(QObject*, QObject*);
    void removeMappings(QObject*);
    QObject * mapping(int) const;
    QObject * mapping(QString const&) const;
    QObject * mapping(QWidget*) const;
    QObject * mapping(QObject*) const;
    void map();
    void map(QObject*);
     QSignalMapper(QObject*, char const*);
protected:
    void mapped(int);
    void mapped(QString const&);
    void mapped(QWidget*);
    void mapped(QObject*);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN13QSignalMapper16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
