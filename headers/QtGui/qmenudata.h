#ifndef _QTGUI_QMENUDATA_H_
#define _QTGUI_QMENUDATA_H_

class QMenuItem;
// *INDENT-OFF*

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

// *INDENT-ON*
#endif
