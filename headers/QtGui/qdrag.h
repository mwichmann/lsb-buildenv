#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QDRAG_H_
#define _QTGUI_QDRAG_H_

class QDrag;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QDrag : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QDrag(QWidget*);
     ~QDrag();
    void setMimeData(QMimeData*);
    QMimeData * mimeData() const;
    void setPixmap(QPixmap const&);
    QPixmap pixmap() const;
    void setHotSpot(QPoint const&);
    QPoint hotSpot() const;
    QWidget * source() const;
    QWidget * target() const;
    enum _ZN2Qt10DropActionE start(QFlags<Qt::DropAction>);
    void setDragCursor(QPixmap const&, Qt::DropAction);
protected:
    void actionChanged(Qt::DropAction);
    void targetChanged(QWidget*);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN5QDrag16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
