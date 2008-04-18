#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCLIPBOARD_H_
#define _QTGUI_QCLIPBOARD_H_

class QClipboard;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QClipboard : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
    void clear(QClipboard::Mode);
    bool supportsSelection() const;
    bool ownsSelection() const;
    bool ownsClipboard() const;
    QString text(QClipboard::Mode) const;
    QString text(QString&, QClipboard::Mode) const;
    void setText(QString const&, QClipboard::Mode);
    QMimeSource * data(QClipboard::Mode) const;
    void setData(QMimeSource*, QClipboard::Mode);
    QMimeData * * mimeData(QClipboard::Mode) const;
    void setMimeData(QMimeData*, QClipboard::Mode);
    QImage image(QClipboard::Mode) const;
    QPixmap pixmap(QClipboard::Mode) const;
    void setImage(QImage const&, QClipboard::Mode);
    void setPixmap(QPixmap const&, QClipboard::Mode);
     ~QClipboard();
    bool ownsFindBuffer() const;
    bool supportsFindBuffer() const;
protected:
    void selectionChanged();
    void dataChanged();
    void connectNotify(char const*);
    bool event(QEvent*);
    void findBufferChanged();
    void changed(QClipboard::Mode);
};

enum Mode	
{
Clipboard = 0,	
Selection = 1
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN10QClipboard16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
