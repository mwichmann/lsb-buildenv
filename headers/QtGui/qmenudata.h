#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QMENUDATA_H_
#define _QTGUI_QMENUDATA_H_

class QMenuItem;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QMenuItem : public QAction
{
private:
public:
     ~QMenuItem();
     QMenuItem();
    int id() const;
    int signalValue() const;
    int qt_metacall(QMetaObject::Call, int, void**);
    void * qt_metacast(char const*);
    struct QMetaObject * metaObject() const;
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
