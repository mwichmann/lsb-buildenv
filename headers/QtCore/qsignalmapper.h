#ifndef _QTCORE_QSIGNALMAPPER_H_
#define _QTCORE_QSIGNALMAPPER_H_

class QSignalMapper;
// *INDENT-OFF*

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


extern struct QMetaObject _ZN13QSignalMapper16staticMetaObjectE ;
// *INDENT-ON*
#endif
